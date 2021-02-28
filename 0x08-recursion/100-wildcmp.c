#include <stdio.h>

int getCompare(char *s1, char *s2, int same, int arrayLength1, int arrayLength2);
char movePointer(char *s);
int getLength(char *s, int arrayLength);

int wildcmp(char *s1, char *s2)
{
	int same = 0, arrayLength1 = 0, arrayLength2 =0;

	arrayLength1 = getLength(s1, arrayLength1);
	arrayLength2 = getLength(s2, arrayLength2);
	same = getCompare(s1, s2, same, arrayLength1, arrayLength2);

	return (same);
}

int getLength(char *s, int arrayLength)
{
	if (s[arrayLength] != '\0')
	{
		arrayLength++;
	}

	else
	{
		return (arrayLength - 1);
	}
	return (getLength(s, arrayLength));
}

int getCompare(char *s1, char *s2, int same, int arrayLength1, int arrayLength2)
{
	if ((s2[arrayLength2] != '*') && (s1[arrayLength1] != '\0') 
			&& (s2[arrayLength2] != '\0'))
	{
		if (s1[arrayLength1] == s2[arrayLength2])
		{
			same = 1;
		}
		else
		{
			same = 0;
		}
	}

	if (s2[arrayLength2] == '*' || s2[arrayLength2] != '\0')
	{
		arrayLength2--;
	}

	if (s1[arrayLength1] == '\0' || s2[arrayLength2] == '\0')
	{
		return (same);
	}
	if (arrayLength1 != 0 && s2[arrayLength2] != '*')
	{
		arrayLength1 -= 1;
	}

	return(getCompare(s1, s2, same, arrayLength1, arrayLength2));
}
