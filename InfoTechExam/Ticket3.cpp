void ticket3()
{
	// 4
	// хз, в чем ошибка, мб должен ругаться на кириллицу
	// но у меня компелится
	enum color { красный, зелёный, чёрный, белый };

	//5

	// Работает только для положительных элементов
	int size = 20, min = 0, max = 0;
	int *array = new int[size];

	for (int i = 0; i < size; i++)
	{
		if (array[i] < min)
			min = array[i];

		if (array[i] > max)
			max = array[i];
	}

	double result = max - min;
}