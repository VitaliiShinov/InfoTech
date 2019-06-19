#include <string.h>

// 4
// 32bit system
union Example{
	int * Example;	// 4 bytes
	char c;			// 1 byte
	int f, t;		// 4 bytes
};					// total 4 bytes


// 5
void ticket9()
{
	char * s1,* s2;
	bool res = false;
	int i = 0;

	if (strlen(s1) != strlen(s2))
		return;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			break;
	}

	if (strlen(s1) == i)
		res = true;
}