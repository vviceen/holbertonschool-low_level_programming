#include "main.h"
/**
 * rev_string - reverses the string
 *@s: the string
 */
void rev_string(char *s)
{
	char temp;
	int i, left, right, len;

	for (i = 0; s[i] != '\0'; i++)
		;
	len = i;
	left = 0;
	right = len - 1;
	for (i = left; i < right; i++)
	{
		temp = s[i];
		s[i] = s[right];
		s[right] = temp;
		right--;
	}
}
