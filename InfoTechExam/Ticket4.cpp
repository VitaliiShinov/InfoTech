void ticket4()
{
	// 4
	// Ёлементов больше 7
	//int pc[7] = { 6, 10, 2, 5, 9, 11, 24, 45, 2, 1, 9 };
	float f, t;


	// 5

	int dim1 = 10;
	int dim2 = 20;
	// alloc memory
	int **array = new int*[dim1];
	for (int i = 0; i < dim1; i++)
		array[i] = new int[dim2];

	int **result = new int*[dim2];
	for (int i = 0; i < dim2; i++)
		result[i] = new int[dim1];

	//swap rows and colomns
	for (int i = 0; i < dim1; i++)
	{
		for (int j = 0; j < dim2; j++)
			result[j][i] = array[i][j];
	}
}