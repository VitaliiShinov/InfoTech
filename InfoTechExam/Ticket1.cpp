
void main()
{
	// 4
	//ƒобавть поинтер на инт в четвертой строке
	
	int * pc = nullptr;
	float f, t = 0;
	//t = *pc; ошибка, надо присвоить поинеру переменную
	pc = (int*)&f;
	
	// 5

	int size = 20;
	int *array = new int[size];

	// bubble sort
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}

	}

}

