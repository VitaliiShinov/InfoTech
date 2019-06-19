char u[10] = "привет от старых штиблет";
// в u больше 10 символов

// 5

char * string;

char prev;
int spaces;

for (int i = 0; i < strlen(string); i++)
{
	char curr = string[i];
	if (curr == ' ' && curr == prev)
		spaces++;

	prev = curr;
}

string[strlen(string) - spaces] = '\0';