//6.	Что неверно в этом фрагменте кода ?


void SomeFunc(Shape);					//передавать по ссылке параметры, если исп. виртуальные методы
Shape * pRect = new Rectangle;
SomeFunc(*pRect);



//7.	Что неверно в этом фрагменте кода ?
class Shape
{
public:						//нет виртуальных конструкторов
	virtual Shape();
	~Shape();
};
