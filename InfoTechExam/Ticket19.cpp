int i, j, k;

k = 10; 
j = 1;
	1	3	-6	9			0			-2			8
i = ++j + 2 - (--k) + (--j) * (++k) - (--j);
Ответ - 8

// 5
class MN {
	float realx;
	float imx;

	MN operator +()
	{
		return realx + imx;
	}
	
};

