// 4
class Ex {
	int * Ex;
	char c;
	int f;
};

class Ux {

	int * Ux;
	char c;
	int f;

};

Ex U;

Ux pu;

//U = pu; // Compilation error, use	 ‘U.c = pu.c;
	//				U.Ex = pu.Ux;
//				U.f = pu.f;’ instead
// also override ‘=’ operator

// 5
template<typename T>
void allocTwoDimArr(int rows, int cols, T**twoDimArr) {
	twoDimArr = new T*[rows];
	for (int i = 0; i < rows; i++) {
		twoDimArr[i] = new T[cols];
	}
}
