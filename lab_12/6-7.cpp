//6.	��� ������� � ���� ��������� ���� ?


void SomeFunc(Shape);					//���������� �� ������ ���������, ���� ���. ����������� ������
Shape * pRect = new Rectangle;
SomeFunc(*pRect);



//7.	��� ������� � ���� ��������� ���� ?
class Shape
{
public:						//��� ����������� �������������
	virtual Shape();
	~Shape();
};
