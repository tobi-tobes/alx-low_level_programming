#!/usr/bin/python3
"""
5-island_perimeter.py
Returns the perimeter of the island described in grid
"""

def island_perimeter(grid):
    sum = 0
    for i in grid:
        for j in i:
            if j == 1:
                sum += j
            else:
                continue
    perimeter = (sum + 1) * 2
    return perimeter
