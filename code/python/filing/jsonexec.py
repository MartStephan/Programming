#!/usr/bin/python

import os
import json

if __name__ == '__main__':
    print("json")

    # Data as dictionary 
    data: dict = {"TIM": {"name": "Tim", "age":51, "city": "Kiel"},
                "ANDREA": {"name": "Andrea", "age":24, "city": "Magdeburg"},
                "CHECKSUM": 4711}

    # create dir in case 
    if os.path.exists("example-dir") == False:
        os.mkdir("example-dir")

    os.chdir("example-dir")

    # open and write JSON data 
    with open('data.json', 'w') as jsonfile:
        json.dump(data, jsonfile)

    # read as dictionary and print JSON data
    with open('data.json') as json_file:
        read_data: dict = json.load(json_file)

    print(read_data)

