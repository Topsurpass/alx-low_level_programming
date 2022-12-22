/**
 * reverse_array - reverse array, bring last index
 * to first and first to last
 * @n: size of the array
 * @a: the array
 */
void reverse_array(int *a, int n)
{
	int i = 0; /*first element of the array*/
	int j = n - 1; /*last element of the array*/
	int k;

	while (i < j)
	{
		k = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = k;
		i++, j--;
	}
}
