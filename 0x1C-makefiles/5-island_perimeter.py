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
    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                if i == 0 or i == h - 1:
                    sum += 1
                elif (grid[i - 1][j] == 1 or grid[i + 1][j] == 1) and (
                        grid[i][j - 1] == 1 or grid[i][j + 1] == 1):
                    sum += 2
                elif (grid[i - 1][j] == 1 and grid[i + 1][j] == 1) and (
                        grid[i][j - 1] == 1 or grid[i][j + 1] == 1):
                    sum += 3
                elif (grid[i - 1][j] == 1 or grid[i + 1][j] == 1) and (
                        grid[i][j - 1] == 1 and grid[i][j + 1] == 1):
                    sum += 3
                else:
                    sum += 1
            else:
                continue
    perimeter = sum * 2
    return perimeter
