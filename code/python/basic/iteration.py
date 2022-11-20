#!/usr/bin/python
 
if __name__ == '__main__':
    for item in ["a", "b", "c"]:
        print(item)

    for i in range(4):     # 0 to 3
        print(i)

    for j in range(4, 8):  # 4 to 7
        print(j)

    for k in range(31,-1,-1):	# 31 to 0 step -1
        print(k)

    ingredients = {'spam': 1, 'egg': 2, 'ham': 3}
    for key, val in ingredients.items():
        print(key)