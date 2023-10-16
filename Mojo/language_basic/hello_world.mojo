from python import Python

def main():
    let py = Python.import_module("builtins")
    let name = py.input('Enter your name: ')
    # string, int, float, bool, uint
    print('Hello', name + '!')
    # loop()
# let (immutable), var (mutable), alias (final)

fn loop():
    for i in range(10):
        print(i, 'on 10')

    var obj: PythonObject = ['Java', 'C/C++', 'CSharp/.NET', 'NodeJs', 'Python', 'Dart/Flutter']
    for item in obj:
        print(item)

    var count: Int8 = 0
    while True:
        if(count < 10):
            print(count, 'on 10')
            count += 1
        else:
            break