#!usr/bin/python
    
def get_length(item):
    return len(item)

if __name__ == '__main__':
    """Example for Python built-in functions"""
    
    # range, filter, and lambda
    odds = filter(lambda i: (i % 2) == 1 , range(1, 10))

    for x in odds:
        print(x)

    # map
    lengths = map(get_length, ('wake', 'the', 'sleeping', 'dragon'))

    for y in lengths: 
        print(y)


