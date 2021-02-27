#include "holberton.h"

int getSquareRoot(int n, int baseSquare, int squareResult);

/**
 * _sqrt_recursion - function finds natural root
 * @n: number passed ot be evaluated
 *
 * Return: 0 or return from called function
 */
int _sqrt_recursion(int n)
{
	int baseSquare = 1, squareResult = 0;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (getSquareRoot(n, baseSquare, squareResult));
	}
}

/**
 * getSquareRoot - function gets squareroot
 * @n: number passed ot be evaluated
 * @baseSquare: number being multiplied
 * @squareResult: holds result of multiplication
 *
 * Return: -1 or baseSquare
 */

int getSquareRoot(int n, int baseSquare, int squareResult)
{
	squareResult = baseSquare * baseSquare;

	if (squareResult == n)
	{
		return (baseSquare);
	}
	if (squareResult > n)
	{
		return (-1);
	}

	return (getSquareRoot(n, baseSquare + 1, squareResult));
}
