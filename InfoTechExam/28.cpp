//4
да

//5 

int amountOfStr;

for (int i=0; names[i]; i++) {
	for (j = 0; names[j]; j++) {
		if (strcmp(names[i], names[j]) < 0) {
			tmp = names[i];
			names[i] = names[j];
			names[j] = tmp;
		}
	}
}