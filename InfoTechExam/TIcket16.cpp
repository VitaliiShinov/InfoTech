// 4

char u[] = "������";
char b[] = "dnjhfz";
if u == b{ ................. }; // ��������� ������

int i = 0;

while (u[i] != '\0' && b[i] != '\0')
{
	if (b[i] != u[i])
		return false;
	i++;
}

// 5
int i = 0;

while (u[i] != '\0' && b[i] != '\0')
{
	u[i] = b[i];
	i++;

}