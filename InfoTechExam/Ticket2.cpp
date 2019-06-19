void ticket2()
{
	// 4
	//ƒобавть поинтер на инт в четвертой строке

	int **pc;
	int f=0, t;
	int i=0, j=0;//	uninitialized local variable 'j' used

	pc = new int*[f];
	t = pc[i][j];

	// 5

	int size = 20, sum = 0;
	int *array = new int[size];

	for (int i = 0; i < size; i++)
		sum += array[i];
	double result = sum / size;
}

