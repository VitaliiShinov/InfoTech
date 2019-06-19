enum color { red, white, black };
color cl = green; 
//green doesnt exist

// only for pos values
int min = 0, size = 100;
int *array = new int[size];

for (int i = 0; i < size; i++)
{
	if (array[i] < min)
		min = array[i];
}
return min;