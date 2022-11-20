#!usr/bin/python

if __name__ == '__main__':
    foo = 42
    if foo == 42:
        print("This is the answer")
    elif foo == 7:
        print("Not really the answer")
    else:
        print("Whatever the answer is")

    zaehler = 0
    summe = 0
    while foo > zaehler:
        summe += zaehler
        zaehler = zaehler + 1

    print(summe)

    for i in range(1, 11, 2):
        print(i)