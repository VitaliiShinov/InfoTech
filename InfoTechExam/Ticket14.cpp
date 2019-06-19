AnsiString u = "строка";
char fi[100];
//fi = u; // Compilation error, use Сfi = u.to_cstr();Т instead


// 5
float dotProduct(Vector v1, Vector v2)
{
	return		v1.getX() * v2.getX() +
		v1.getY() * v2.getY() +
		v1.getZ() * v2.getZ();

}
