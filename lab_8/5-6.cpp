//5.	��� ������� � ���������  ��������� ���� ?
int *pInt;
*pInt = 9;
cout << �The value at pInt : � << *pInt;
//���� ����� ���������� ���� ��� �� ������� ���� ���������


//6.	��� ������� � ���������  ��������� ���� ?
int SomeVariable = 5;
int *pVar = &SomeVariable;			 //������������ ��������� ������ ����������
pVar = 9;							 //������������ ��������� �������� 9
cout << �SomeVariable: � << *pVar;   //����� ������ � ������ � ������� 9