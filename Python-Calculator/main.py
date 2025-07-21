

#Functions
def AddTwoNumbers():
    num1 = float(input("Please enter a number: "))
    num2 = float(input("Please enter another number: "))

    result = num1 + num2
    print("The Result is: ", result)

def SubstractTwoNumbers():
    num1 = float(input("Please enter a number: "))
    num2 = float(input("Please enter another number: "))

    result = num1 - num2
    print("The Result is: ", result)

def MultiplyTwoNumbers():
    num1 = float(input("Please enter a number: "))
    num2 = float(input("Please enter another number: "))

    result = num1 * num2
    print("The Result is: ", result)

def DivideTwoNumbers():
    num1 = float(input("Please enter a number: "))
    num2 = float(input("Please enter another number: "))

    result = num1 / num2
    print("The Result is: ", result)


#Program
while True:
    request_input = input("Please enter a operation (+ - * /, . to terminate): ")
    if request_input == '+':
        AddTwoNumbers()
    elif request_input == '-':
        SubstractTwoNumbers()
    elif request_input == '*':
        MultiplyTwoNumbers()
    elif request_input == '/':
        DivideTwoNumbers()
    elif request_input == '.':
        print("Quitting..")
        break
    else:
        print("Invalid input please try again.")
