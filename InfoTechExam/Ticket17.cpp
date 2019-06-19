enum color { red, white, black ,green, brown, magenta
};
enum col { red, green, brown, magenta };
color cl = red;// конфликт имен enum color { red, white, black ,green, brown, magenta
// 5
union u {
	int * dim1;
	int **dim2;
};

for (int i = 0; i < size; i++)
{
	for (int j = 0; j < size - i - 1; j++)
		if (dim1[j] > dim1[j + 1])
		{
			int temp = dim1[j];
			dim1[j] = dim1[j + 1];
			dim1[j + 1] = temp;
		}
}