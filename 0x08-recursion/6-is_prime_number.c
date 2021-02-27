#include "holberton.h"

int getSquareRoot(int n, int baseSquare, int squareResult);
int _sqrt_recursion(int n);
int getPrime(int, int, int, int);

/**
 * is_prime_number - function finds prime number
 * @n: number passed to be evaluated
 *
 * Return: notPrime
 */
int is_prime_number(int n)
{
	int baseSquare;
	int notPrime = 1;
	int counter = 2;

	if (n == 1 || n <= 0)
	{
		return (0);
	}
	baseSquare = _sqrt_recursion(n);
	notPrime = getPrime(n, baseSquare, notPrime, counter);

	return (notPrime);
}

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
		return (baseSquare - 1);
	}

	return (getSquareRoot(n, baseSquare + 1, squareResult));
}

/**
 * getPrime - function finds prime number
 * @n: number passed to be evaluated
 * @baseSquare: squareroot of n
 * @notPrime: bool variable
 * @counter: counting variable
 *
 * Return: notPrime
 */
int getPrime(int n, int baseSquare, int notPrime, int counter)
{
	if (counter <= baseSquare)
	{
		if (n % counter == 0)
		{
			return (0);
		}
	}
	if (counter > baseSquare)
	{
		return (1);
	}

	return (getPrime(n, baseSquare, notPrime, counter + 1));
}
