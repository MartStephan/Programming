#!usr/bin/evn python3

def string_ifelif() -> None:
    """ string matching using if-elif """ 
    wochentag = "Freitag"
    if wochentag == "Montag":
        print("Heute ist Montag.")
    elif wochentag == "Dienstag":
        print("Heute ist Dienstag.")
    elif wochentag == "Mittwoch":
        print("Heute ist Mittwoch.")
    elif wochentag == "Donnerstag":
        print("Heute ist Donnerstag.")
    elif wochentag == "Freitag":
        print("Heute ist Freitag.")
    elif wochentag == "Samstag":
        print("Heute ist Samstag.")
    elif wochentag == "Sonntag":
        print("Heute ist Sonntag.")
    else:
        print("Ungültiger Wochentag.")

def string_pattern() -> None:
    """ string matching using match-case """ 
    wochentag = "Freitag"
    match wochentag:
        case "Montag":
            print("Heute ist Montag.")
        case "Dienstag":
            print("Heute ist Dienstag.")
        case "Mittwoch":
            print("Heute ist Mittwoch.")
        case "Donnerstag":
            print("Heute ist Donnerstag.")
        case "Freitag":
            print("Heute ist Freitag.")
        case "Samstag":
            print("Heute ist Samstag.")
        case "Sonntag":
            print("Heute ist Sonntag.")
        case _:
            print("Ungültiger Wochentag.")
                
def point_pattern() -> None:
    """ tuple matching using match-case """ 
    point = (3, 3)
    match point:
        case (0, 0):
            print("Origin")
        case (0, y):
            print(f"Y={y}")
        case (x, 0):
            print(f"X={x}")
        case (x, y):
            print(f"X={x}, Y={y}")
        case _:
            raise ValueError("Not a point")

if __name__ == '__main__':
    string_ifelif()
    string_pattern()
    point_pattern()