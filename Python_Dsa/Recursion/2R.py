def printNumber(n):
  # check if n is greater than 0
  if n > 0:
    # recursively call the printNumber function
    printNumber(n - 1)
    # print n
    print(n, end = ' ')

# declare the value of n
n = 50
# call the printNumber function
printNumber(n)


def calculate_factorials(start, end):
    for i in range(start, end + 1):
        print(f"Factorial of {i} is {factorial(i)}")