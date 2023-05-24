#!/usr/bin/python3
"""
5-island_perimeter.py
Returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    sum = 0
    w = len(grid[0])
    h = len(grid)
    perimeter = 0
    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                surrounding = 4
                if i - 1 >= 0 and grid[i - 1][j] == 1:
                    surrounding -= 1
                if i + 1 <= h - 1 and grid[i + 1][j] == 1:
                    surrounding -= 1
                if j - 1 >= 0 and grid[i][j - 1] == 1:
                    surrounding -= 1
                if j + 1 <= w - 1 and grid[i][j + 1] == 1:
                    surrounding -= 1
                perimeter += surrounding
            else:
                continue
    return perimeter
