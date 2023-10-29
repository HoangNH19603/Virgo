from python import Python

def main():
    alias firstLine: String = 'First mojo program'
    print(firstLine)

    let py = Python.import_module("builtins")
    let name = py.input('Enter your name: ')
    # string, int, float, bool, uint
    try:
        print('Try block')
        print('Hello', name + '!')
        print('Goodbye' + name + '!')   #   this will jump into except block
    except:
        print('Except block')
    finally:
        print('Finally block')

    loop()

    print(add2(2, 3))

    let Iam = Person(name.to_string(), 17)
    Iam.display()
# let (immutable), var (mutable), alias (final)

# The fn declaration enforces strongly-typed and memory-safe behaviors, while def provides Python-style dynamic behaviors.
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

# return function
fn add2(x: Int, y: Int) -> Int:
    return x + y

# structures
struct Person:
    var name: String
    var age: Int

    fn __init__(inout self, name: String, age: Int):
        self.name = name
        self.age = age

    fn display(self):
        print(self.name, self.age)
