#!/usr/bin/python3
"""
"""

def island_perimeter(grid):
    """
    """
    if not isinstance(grid, list):
        raise TypeError("grid must be a list of integers")
    if not all([isinstance(i, list) for i in grid]):
        raise ValueError("grid must be a list of integers")
    for row in grid:
        if not all([isinstance(i) for i in row]):
            raise ValueError("grid must be a list of integers")
