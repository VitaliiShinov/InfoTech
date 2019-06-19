int j, i = 10;
j = 2;

	  4		10     14
j = ++j++ + i++;

// 5

template<class temp>
void mystack<temp>::push(temp b) {
	if (top >= size)
		throw std::overflow_error("Stack is overflowed");

	data[top++] = b;
}