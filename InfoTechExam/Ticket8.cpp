#include <string.h>

// 4
// 20 byte = sizeof(U)  for 32bit system
class U {
	int **pc; // 4 byte
	int f, t; // 4 byte * 2
	int i, j; // 4 byte * 2
};

// 5

void ticket8()
{
	char * text;
	char * word;

	int i = 0, j = 0;

	while (word[i] != '\0')
	{
		if (text[i] == word[j] && word[j] != '\0')
			j++;
		else
			j = 0;
		i++;
	}
	
}