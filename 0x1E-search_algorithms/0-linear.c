nclude "search_algos.h"

/**
  * linear_search - searche for a value in an array of
  * integers using the Linear search algorithm
  *
  * @array:  pointer to the first element of the array to search in
  * @size: the number of elements in array
  * @value: the value to search for
  *
  * return: the first index where value is located
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (; i < size; ++i)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			break;
	}

	if (i == size)
		return (-1);

	return (i);
}
