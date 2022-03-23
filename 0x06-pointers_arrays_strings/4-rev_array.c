/**
 * reverse_array - reverse the content of an array of integers
 * @a: the array
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int middle;

	while (i < j)
	{
		middle = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = middle;
		i++;
		j--;
	}
}
