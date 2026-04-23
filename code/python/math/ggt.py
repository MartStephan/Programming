"""
Programm, das zwei positive Ganzzahlen entgegennimmt und den größten gemeinsamen Teiler der beiden berechnet und ausgibt.

"""

def ggt(a: int, b: int) -> int:
    """
    Calculates the greatest common divisor (GCD) of two positive integers a and b.
    
    Args:
        a (int): The first positive integer
        b (int): The second positive integer
    
    Returns:
        int: The greatest common divisor of a and b
    """
    # Solange b nicht 0 ist, setze a auf b und b auf den Rest von a geteilt durch b.
    # Dies ist der moderne euklidische Algorithmus zur Berechnung des größten gemeinsamen Teilers (ggT).
    while b:
        a, b = b, a % b
    return a    

if __name__ == "__main__":
    # Interaktiver Modus
    print("\n" + "="*40)
    print("Interaktiver Modus:")
    try:
        num1: int = int(input("\nGeben Sie die erste positive Ganzzahl ein: "))
        num2: int = int(input("Geben Sie die zweite positive Ganzzahl ein: "))
        if num1 > 0 and num2 > 0:
            result: int = ggt(num1, num2)
            print(f"\nDer größte gemeinsame Teiler von {num1} und {num2} ist: {result}")
        else:
            print("Bitte geben Sie positive Ganzzahlen ein.")
    except ValueError:
        print("Ungültige Eingabe. Bitte geben Sie ganze Zahlen ein.")
        

