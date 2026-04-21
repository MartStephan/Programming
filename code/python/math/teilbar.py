"""
Program to calculate the sum of all numbers divisible by 3 or 5 below a given number.
"""


def sum_divisible_by_3_or_5(n: int) -> int:
    """
    Calculate the sum of all numbers divisible by 3 or 5 below a given number.
    
    Args:
        n (int): The upper limit (exclusive)
    
    Returns:
        int: The sum of all numbers divisible by 3 or 5
    """
    total: int = 0
    for num in range(n):
        if num % 3 == 0 or num % 5 == 0:
            total += num
    return total


def sum_divisible_by_3_or_5_optimized(n: int) -> int:
    """
    Optimized version using list comprehension and sum().
    
    Args:
        n (int): The upper limit (exclusive)
    
    Returns:
        int: The sum of all numbers divisible by 3 or 5
    """
    return sum(num for num in range(n) if num % 3 == 0 or num % 5 == 0)


if __name__ == "__main__":
    # Interactive mode
    print("\n" + "="*40)
    print("Interactive Mode:")
    try:
        user_input: int = int(input("\nEnter a number: "))
        if user_input > 0:
            result: int = sum_divisible_by_3_or_5_optimized(user_input)
            print(f"\nSum of all numbers divisible by 3 or 5 below {user_input}: {result}")
        else:
            print("Please enter a positive number.")
    except ValueError:
        print("Invalid input. Please enter an integer.")