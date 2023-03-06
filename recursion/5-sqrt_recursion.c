#include "main.h"

/**
 * find_root - est for closest int squareroot
 *
 * @n: number being evaluated
 * @i: test values being iterated
 *
 * Return: i if i is the root of n else -1
 */
int find_root(int n, int i)

{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (find_root(n, i + 1));
}
/**
 * _sqrt_recursion - return natural square root of a given number
 * @n: number being evaluated
 * Return: square root of n
 */
int _sqrt_recursion(int n)

{
	return (find_root(n, 1));
}
