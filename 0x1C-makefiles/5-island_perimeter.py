#!/usr/bin/python3
"""
island grid calculation module
"""


def island_perimeter(grid):
    """ calculates perimeter size"""
    perim = 0
    for idx in range(len(grid)):
        for idx_2 in range(len(grid[idx])):
            if grid[idx][idx_2] == 1:
                perim += 4
                if idx > 0 and grid[idx - 1][idx_2] == 1:
                    perim -= 2
                if idx_2 > 0 and grid[idx][idx_2 - 1] == 1:
                    perim -= 2
    return perim
