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


class RectangleClientParent: 
    number_of_clients: int = 0

    def __init__(self) -> None:
        RectangleClientParent.number_of_clients += 1

    @staticmethod
    def get_number_of_clients_static() -> int:
        """ static method to get the number of clients """
        return RectangleClientParent.number_of_clients
    
    @classmethod   
    def get_number_of_clients_class(cls) -> int:
        """ class method to get the number of clients """
        return cls.number_of_clients
    
class RectangleClientChild(RectangleClientParent):
    number_of_clients: int = 0

    def __init__(self) -> None:
        super().__init__()
        RectangleClientChild.number_of_clients += 1


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

    # create three parent clients and one child client
    client1 = RectangleClientParent()
    client2 = RectangleClientParent()
    client3 = RectangleClientParent()
    client4 = RectangleClientChild()

    # using static method result is always 4 clients
    print("Number of parent clients: ", RectangleClientParent.get_number_of_clients_static())      
    print("Number of children clients : ", RectangleClientChild.get_number_of_clients_static())

    # using class method result is 3 for parent clients and 1 for child clients
    print("Number of parent clients: ", RectangleClientParent.get_number_of_clients_class())      
    print("Number of children clients : ", RectangleClientChild.get_number_of_clients_class())
