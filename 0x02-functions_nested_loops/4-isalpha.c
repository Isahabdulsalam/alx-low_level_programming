#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * Return: return 1 if c is letter, alphabet otherwise return 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'));
}

