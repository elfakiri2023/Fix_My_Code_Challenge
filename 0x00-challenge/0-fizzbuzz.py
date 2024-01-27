#!/usr/bin/python3
""" FizzBuzz
    the classic FizzBuzz
"""
import sys

def fizzbuzz(n):
    """
    FizzBuzz main function that print a numbers
    """

    data = []
    for i in range(1, n + 1):
        if (i % 3) == 0 and (i % 5) == 0:
            data.append("FizzBuzz")
        elif (i % 3) == 0:
            data.append("Fizz")
        elif (i % 5) == 0:
            data.append("Buzz")
        else:
            data.append(str(i))
            
    print(" ".join(data))


if __name__ == '__main__':
    if len(sys.argv) <= 1:
        print("Please enter a number")
        sys.exit(1)

    number = int(sys.argv[1])
    if number < 1:
        sys.exit(1)
        
    fizzbuzz(number)
