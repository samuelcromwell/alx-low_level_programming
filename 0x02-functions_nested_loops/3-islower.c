#include "main.h"
/**
 * _islower - check for c if its lowercase
 * @c : is the character to be checke
 * Return: 1 if true, otherwise 0
 */
int _islower(int c)
{
        if (c >= 'a' && c <= 'z')
                return (1);
        else
                return (0);
}
