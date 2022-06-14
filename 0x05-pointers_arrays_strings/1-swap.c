/**
 * swap_int - function that swaps the values of two integers.
 * @a: first pointer to value
 * @b: second pointer to value
 *
 * Return: zero whhen success
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
