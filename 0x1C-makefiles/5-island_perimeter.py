#!/usr/bin/python3
"""
provides the function island_perimeter
"""


def island_perimeter(grid):
    """
    computes the perimeter of the island

    Args:
        grid (list): list of lists of integers, rectangular
        equal row lengths
    """
    if grid is None:
        return

    g_len = len(grid)
    row_len = len(grid[0])
    sum = 0

    for i in range(g_len):
        for j in range(row_len):
            if grid[i][j] == 1:
                sum += 4

                if i != 0 and grid[i - 1][j] == 1:
                    sum -= 1
                if i != g_len - 1 and grid[i + 1][j] == 1:
                    sum -= 1

                if j != 0 and grid[i][j - 1] == 1:
                    sum -= 1
                if j != row_len - 1 and grid[i][j + 1] == 1:
                    sum -= 1
    return sum
