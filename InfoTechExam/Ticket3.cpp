void ticket3()
{
	// 4
	// ��, � ��� ������, �� ������ �������� �� ���������
	// �� � ���� ����������
	enum color { �������, ������, ������, ����� };

	//5

	// �������� ������ ��� ������������� ���������
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