#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of an island in a grid.

    Args:
        grid (list of list of int): A rectangular grid of 0's and 1's.

    Returns:
        int: The perimeter of the island in the grid.

    Raises:
        ValueError: If the grid is not rectangular or contains non-0/1 values.

    """
    # Check that the grid is rectangular and contains only 0's and 1's
    rows, cols = len(grid), len(grid[0])
    for row in grid:
        if len(row) != cols:
            raise ValueError("Grid is not rectangular")
        for val in row:
            if val not in (0, 1):
                raise ValueError("Grid contains non-0/1 values")

    # Loop over all cells in the grid
    perimeter = 0
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Add 4 to the perimeter for each land cell
                perimeter += 4
                # Subtract 2 for each neighboring land cell (horizontally or vertically)
                if i > 0 and grid[i-1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j-1] == 1:
                    perimeter -= 2
    return perimeter

