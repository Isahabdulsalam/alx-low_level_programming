#include "main.h"

/**
 * _isalpha - check for uppercase and lowercase
 * @c: character
 * Return: 1 else 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
