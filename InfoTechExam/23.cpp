
// делает перебор значений p от 30.2491 до 1.2491
for (float p = 30.2491; p > 1; p -= 1);

// 5
class MN {
	float realx;
	float imx;

	bool operator ==( MN * m)
	{
		return this->realx == m->realx;
	}
};




