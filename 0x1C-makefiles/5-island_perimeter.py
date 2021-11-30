#!/usr/bin/python3
"""
function define perimeter
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid
    """
    width = len(grid[0])
    height = len(grid)
    size = 0
    edges = 0

    for x in range(height):
        for y in range(width):
            if grid[x][y] == 1:
                size += 1
                if (y > 0 and grid[x][y - 1] == 1):
                    edges += 1
                if (x > 0 and grid[x - 1][y] == 1):
                    edges += 1
    return size * 4 - edges * 2
