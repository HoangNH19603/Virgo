using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading;
using System.Threading.Tasks;

namespace Rextester
{
    public class SJFProcess
    {
        public string? Name { get; set; }
        public int Duration { get; set; }
        public bool CompleteStatus { get; set; }

        public override string ToString()
        {
            return Name + "\t" + Duration;
        }
    }

    public class SJF
    {
        List<SJFProcess> processes;
        object SJFLock = new object();
        bool workDone = false;

        public SJF(IEnumerable<SJFProcess> processes)
        {
            this.processes = new List<SJFProcess>();
            this.processes.AddRange(processes);
        }

        public void AddProcess(SJFProcess process)
        {
            if (workDone == false)
            {
                lock (SJFLock)
                {
                    processes.Add(process);
                }
            }
        }


        public async Task<List<SJFProcess>> Start()
        {
            return await Task.Run(() => Work()); 
        }

        private List<SJFProcess> Work()
        {
            List<SJFProcess> workResult = new List<SJFProcess>();
            while (processes.Exists(p => p.CompleteStatus == false))
            {
                SJFProcess? execProc = null;
                lock (SJFLock)
                {
                    int minDuration = processes.Where(p => p.CompleteStatus == false).Min(p => p.Duration);
                    execProc = processes.First(p => p.Duration == minDuration && p.CompleteStatus == false);
                    execProc.CompleteStatus = true;
                    workResult.Add(execProc);
                }

                //for work imitation
                Thread.Sleep(execProc.Duration);
            }
            workDone = true;
            return workResult;
        }
    }

    public class Program
    {
        public static void Main(string[] args)
        {
            List<SJFProcess> processes = new List<SJFProcess>();
            processes.Add(new SJFProcess { Name = "p0", Duration = 1200, CompleteStatus = false });
            processes.Add(new SJFProcess { Name = "p1", Duration = 600, CompleteStatus = false });
            processes.Add(new SJFProcess { Name = "p2", Duration = 1700, CompleteStatus = false });
            processes.Add(new SJFProcess { Name = "p3", Duration = 900, CompleteStatus = false });
            
            SJF sjf = new SJF(processes); 
            var resTask = sjf.Start();

            //nonpreemptive imitation
            Thread.Sleep(500);
            sjf.AddProcess(new SJFProcess { Name = "p3", Duration = 200, CompleteStatus = false });

            resTask.Wait();

            foreach(var res in resTask.Result)
            {
                Console.WriteLine(res);
            }
            Console.Read();
        }
    }
}