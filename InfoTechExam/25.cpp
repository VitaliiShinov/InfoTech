int M[100];
for (int p = 0; p < 100; ++p)  // �� ����� �������� � = 101
	M[p] = p;
p = 33;
MessageDlg("�������� ���������� M[33] " + IntToStr(M[p],
	mtInformation, TMsgDlgButtons() << mbOK, NULL);

// 5

template<class temp>
temp mystack<temp>::pop() {
	return data[--top];
}
