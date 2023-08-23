#!/usr/bin/python3
""" Island Perimeter """


def island_perimeter(grid):
    """ Island Perimeter """
    c = 0
    l = []
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            l.append(grid[i][j])
    for i in range(len(l)):
        if i < len(l) - 1 and i > 0:
            if l[i] == 0 and l[i + 1] == 1 or l[i] == 0 and l[i - 1] == 1:
                c += 1
    if c % 2 == 0:
        c *= 2
    else:
        c = (c * 2) - 1
    return c
