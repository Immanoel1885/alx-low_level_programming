/**
 * _isupper - check for uppercase letters
 * @c: the letter to be checked
 * Return: 0 if upper 1 if not
 */
int _isupper(int c)
{
	if (c >= 65 || c <= 90)
		return (1);
	else
		return (0);
}
