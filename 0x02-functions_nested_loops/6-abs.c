#include "holberton.h"

/**
* _abs - prints absolute value
* @r: int sents to function
*
* Return: 0
*/

int _abs(int r)
{

	int mod_r = (r * -1);

	if (r > 0)
	{
		return (r);
	}

		else if (r < 0)
		{
			return (mod_r);
		}

			else

				return (0);

}
