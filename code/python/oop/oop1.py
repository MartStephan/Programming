#!/usr/bin/python

class Rectangle:
    def __init__(self, length=1, width=1) -> None:
        self.length = length
        self.width = width 

    def change_length(self, l):
        self.length += l

    def change_width(self, w):
        self.width += w

    def show_area(self):
        print(self.length * self.width)


if __name__ == '__main__':
    print("Hallo")

    # create two instances of our Rectangle
    rect1 = Rectangle(5, 6)
    rect2 = Rectangle()

    # change the length of rect2
    rect2.change_length(4)

    rect1.show_area()
    rect2.show_area()

    # add a new attribute called 'area' - which is only available for object 'rect2'
    rect2.area = rect2.length * rect2.width
    print(rect2.area)

