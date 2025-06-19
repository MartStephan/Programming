#!/usr/bin/python

# traverses through an array to find a specific element with linear complexity O(n)
def find_element(arr, target) -> bool:
	for i in arr:
		if i == target:
			return True
	return False

if __name__ == '__main__':
    arr: list = [1, 2, 3, 4, 5]
    target: int = 3
    if find_element(arr, target):
        print(f"Element {target} found in the array.")
    else:
        print(f"Element {target} not found in the array.")
