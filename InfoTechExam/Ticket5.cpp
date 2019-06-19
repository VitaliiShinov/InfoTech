void ticket5()
{

	// я хз, че тут Гатин хочет
	int * pc;
	int f, t;
	t = 100;
	pc = new int[t];
	//pc = f; присваивание массива числу 
	pc[0] = 100;


	// 5
	//bullshit, fuck matrix

	int m1row=2, m1col=3, m2row=3, m2col=2;

	if (m1col != m2row) {
		const char * output = "Wat da heck, r u moron?";
		return;
	}

	int ** m1, **m2, **res;

	// product of two matrix has amount of rows = m1 rows, cols = m2 col
	// i'm not sure :)
	res = new int*[m1row];
	for (int i = 0; i < m1row; i++)
		res[i] = new int[m2col];

	m1 = new int*[m1row];
	for (int i = 0; i < m1row; i++)
		m1[i] = new int[m1col];

	m2 = new int*[m2row];
	for (int i = 0; i < m2row; i++)
		m2[i] = new int[m2col];

	for (int row = 0; row < m1row; row++)
	{
		for (int col = 0; col < m2col; col++)
		{
			for (int i = 0; i < m1row; i++)

				res[row][col] += m1[row][i] * m2[i][col];
		}
	}
}