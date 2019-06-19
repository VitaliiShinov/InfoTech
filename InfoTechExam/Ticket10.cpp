// по дефолту поля класса приватные
// сделать их публичными или создать геттеры

class U {
	int **pc;
	int f, t;
	int i, j;
};
U in, val;
in.f = val.i;

void ticket10()
{
	char * text;

	ofstream file;
	file.open("filename");
	file << text;
	file.close();

}
