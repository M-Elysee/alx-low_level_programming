#!/usr/bin/python3
"""a function that returns the perimeter of the island described"""


def island_perimeter(grid):
    """*find and return the perimiter of the island*"""
    w = len(grid[0])
    h = len(grid)
    k = 0
    p = 0
    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                p += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    k += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    k += 1
    return (p * 4) - (k * 2)
