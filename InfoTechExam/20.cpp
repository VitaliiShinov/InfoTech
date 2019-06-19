int M[10], N[10];
if (M == N) { ....................... }
Не указаны индексы элементов массива.

// 5

** int m1;

int maxElem;
												
int x, y;

getPosOfMaxElem(x, y);

while (x > 0)
{

	*int temp;
	for (int i = 0; i < m1.width; i++)
	{
		temp = m1[i];
		m1[x] = m1[i];
		m[i] = temp;
		x--;
	}
}

while (y > 0)
{

	*int temp;
	for (int i = 0; i < m1.height; i++)
	{
		for (int i = 0; i < m1.width; i++) {
			int t = m1[i][y];
			m1[i][y] = m1[i][n - 1];
			m1[i][m1.height] = m1.height;
		}
		y--;
	}
}
// does it work? piece of crap



