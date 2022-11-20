#!usr/bin/python


if __name__ == '__main__':
    
    ingredients = {'spam': 1, 'egg': 2, 'ham': 3}
    print(ingredients)

    junk = {'egg': 'brown', 'e405': 'lecker'}
    print(junk)

    # new in python 3.9 - combine the two dictionaries
    recipe = ingredients | junk
    print(recipe)


