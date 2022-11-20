#!usr/bin/python

def square_list_loops():
    # You can either use loops
    squares = []

    for x in range(10):
        squares.append(x**2)
 
    print(squares)

def square_list_comprehensions():
    # Or you can use list comprehensions to get the same result:
    squares = [x**2 for x in range(10)]

    print(squares)

if __name__ == '__main__':
    """Example for List Comprehensions"""
    
    # simple list using loops 
    numbers = []
    for item in range(10):
        numbers.append(item)
    print(numbers)

    # simple list using list comprehensions
    x: int = [i for i in range(10)]
    print(x)

    # list of square numbers using loop
    square_list_loops()

    # list of square numbers using comprehensions
    square_list_comprehensions()

