#!/usr/bin/python3
"""
class island_perimeter
"""


def island_perimeter(grid):

    """
    function representation
    """

    perimeter = 0
    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                """check if value is zero"""
                if row - 1 < 0 or grid[row - 1][col] == 0:
                    perimeter += 1
                    """check if value is zero"""
                    if row + 1 >= len(grid) or grid[row + 1][col] == 0:
                        perimeter += 1
                        """check if value is zero"""
                        if col - 1 < 0 or grid[row][col - 1] == 0:
                            perimeter += 1
                            """check if value is zero"""
                            if col + 1 >= len(grid[0]) or
                            grid[row][col + 1] == 0:
                                perimeter += 1
                                return perimeter
