#!/usr/bin/env python3
"""A script that calculates the perimeter of an island grid """


def island_perimeter(grid):
    if not isinstance(grid, list):
        return

    perimeter = 0

    if not len(grid) or not len(grid[0]):
        return perimeter

    grid_len = len(grid)
    max_width = len(grid[0])
    row_num = 0
    width = 0
    height = 0
    for row in grid:
        temp = 0
        row_num += 1
        if row[0] or row[-1]:
            return 0
        if row_num == 1 or row_num == grid_len:
            if any(i != 0 for i in row):
                return 0
        for i in row:
            temp += 1 if i else 0
            if temp > width:
                width = temp

    for i in range(1, max_width - 1):
        temp = 0
        for row in grid:
            if not row[i]:
                if temp > height:
                    height = temp
                # perimeter += 2 * (height + 1) if height else 0
                # if height:
                #     print(f"height:{height}, perimeter:{perimeter}")
                continue
            temp += 1
    perimeter = 2 * (width + height)
    # print(f"width: {width}, height:{height}, perimeter:{perimeter}")
    return perimeter
