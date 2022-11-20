#!/usr/bin/python

from typing import TypeVar, Generic, List

# Type variable 'T' serves as a generic - can be  any type
T = TypeVar('T')

class Stack(Generic[T]):
    def __init__(self) -> None:
        self._container: List[T] = []
    def push(self, item: T) -> None:
        self._container.append(item)
    def pop(self) -> T:
        return self._container.pop()
    def __repr__(self) -> str:
        return repr(self._container)

tower_a: Stack[int] = Stack()
tower_b: Stack[int] = Stack()
tower_c: Stack[int] = Stack()

def fill_towers(num: int) -> None:
    for i in range(1, num + 1):
        tower_a.push(i)

def hanoi(begin: Stack[int], end: Stack[int], temp: Stack[int], n: int) -> None:
    if n == 1:
        end.push(begin.pop())
    else:
        hanoi(begin, temp, end, n-1)
        hanoi(begin, end, temp, 1)
        hanoi(temp, end, begin, n - 1)


if __name__ == '__main__':
    num_discs: int = 10
    fill_towers(num_discs)
    print(tower_a)
    print(tower_b)
    print(tower_c)
    hanoi(tower_a, tower_c, tower_b, num_discs)
    print(tower_a)
    print(tower_b)
    print(tower_c)
