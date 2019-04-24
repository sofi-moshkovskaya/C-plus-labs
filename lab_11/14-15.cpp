/*14.	***Напишите объявление класса  для узла связного списка ранее разработаного класса объектов(Worker, Pencil, Cat…)  и его реализацию.


15.	***Напишите объявление класса  для связного списка  класса узлов объектов типа(Worker, ***Pencil, Cat…)  и его реализацию, 
включив в нее следующие методы : Insert(), Delete(), Display(), Find()  и оператор[].Протестируйте этот класс в главной программе.

Moshkovskaya Sophia
01.02.19 */



#include <iostream>
#include <sstream>

using namespace std;

class Cat
{
private:
	int weight;
	int age;

public:

	Cat(int weight, int age)
	{
		this->weight = weight;
		this->age = age;
	}
	int getWeight() { return weight; }

	int getAge() { return age; }
};

class Node
{
private:
	Cat* value;
	Node* next;
public:
	Node(Cat* value, Node* next)
	{
		this->value = value;
		this->next = next;
	}

	void setNext(Node* next) { this->next = next; }

	Cat* getValue() { return value; }

	Node* getNext() { return next; }
};

class CatList
{
	Node* head = NULL;
	Node* tail = NULL;

public:
	void Insert(Cat* w)
	{
		Node *newItem = new Node(w, NULL);

		if (tail != NULL) { tail->setNext(newItem); }

		else
		{
			head = newItem;
		}


		tail = newItem;
	}

	void Display()
	{
		cout << "--------------------" << endl;
		if (head != NULL)
		{
			Node* current = head;
			int i = 0;
			while (current != NULL)
			{
				cout << "Index: " << i << endl;
				cout << "weight: " << current->getValue()->getWeight() << endl;
				cout << "Age: " << current->getValue()->getAge() << endl;
				cout << endl;
				current = current->getNext();
				i++;
			}
		}
		else { cout << "List is empty." << endl; }

		cout << "--------------------" << endl;
	}

	void Delete(int index) {
		Node* current = head;
		Node* prev = NULL;
		int i = 0;
		while (current != NULL)
		{
			if (i == index)
			{
				if (prev == NULL)  //удалить первый элемент
				{
					head = head->getNext();
					if (head == NULL) {
						tail = NULL;
					}
				}
				else { prev->setNext(current->getNext()); }

				delete current;
				return;
			}
			prev = current;
			current = current->getNext();
			i++;
		}
	}

	int Find(int weight, int age)
	{
		Node* current = head;
		int index = 0;
		while (current != NULL)
		{
			Cat *currentValue = current->getValue();
			if (weight > 0 && age > 0 && weight == currentValue->getWeight() && age == currentValue->getAge())
			{
				return index;
			}

			else if (age > 0 && age == currentValue->getAge())
			{
				return index;
			}

			else if (weight > 0 && weight == currentValue->getWeight())
			{
				return index;
			}
			current = current->getNext();
			index++;
		}
		return -1;
	}

	Cat* operator [](int index)
	{
		Node* current = head;
		int i = 0;
		while (current != NULL)
		{
			if (i == index)
			{
				return current->getValue();
			}
			current = current->getNext();
			i++;
		}
		return NULL;
	}

};

int main()
{
	CatList cats;
	while (true)
	{
		cout << "\nOptions:\n" << "\t1 - create a node" << "\n\t2 - find" 
			<< "\n\t3 - show the list" << "\n\t4 - delete a node." << "\n\t5 - exit" << endl;


		int action;
		cin >> action;
		cin.get();

		switch (action)
		{
		case 1:
		{
			cout << "Input weight: ";
			int weight;
			cin >> weight;
			cin.get();

			cout << "Input age: ";
			int age;
			cin >> age;
			cin.get();

			cats.Insert(new Cat(weight, age));

			break;
		}
		case 2:
		{
			cats.Display();
			break;
		}
		case 3:
		{
			cout << "Input weight or -1: ";
			int weight;
			cin >> weight;
			cin.get();

			cout << "Input age or -1: ";
			int age;
			cin >> age;
			cin.get();

			int result = cats.Find(weight, age);
			cout << "----------------------" << endl;

			if (result == -1)
			{
				cout << "Result: not found." << endl;
			}

			else
			{
				cout << "Index: " << result << endl;
			}

			cout << "----------------------" << endl;
			break;
		}
		case 4:
		{
			cout << "Input index to delete: ";
			int index;
			cin >> index;
			cin.get();

			Cat* w = cats[index];

			cout << "----------------------" << endl;

			if (w == NULL)
			{
				cout << "Index not found." << endl;
			}

			else
			{
				cats.Delete(index);
				delete w;
			}

			cout << "----------------------" << endl;
			break;
		}

		case 5: { return 0;  }

		default: break;
		}
	}

	system("pause");
	return 0;
}

//


	void Display()
	{
		cout << "=================================" << endl;
		List* p = this;
		while (p != NULL)
		{
			cout << "Cat`s age is " << p->Data.age << " and weight is " << p->Data.weight << endl;
			p = p->Next;
		}
		cout << "=================================" << endl;
	}


		cout << "\nOptions:\n" << "\t1 - create a node" << "\n\t2 - find" << "\n\t3 - show the list" << "\n\t4 - delete a node." << "\n\t5 - exit" << endl;
		