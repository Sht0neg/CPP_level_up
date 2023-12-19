#include "ForwardList.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	ForwardList* l1 = new ForwardList();
	l1->pushFront(5);
	l1->pushFront(5);
	l1->pushFront(5);
	l1->pushFront(8);
	l1->pushFront(5);
	l1->pushFront(21);
	l1->pushFront(24);
	l1->pushFront(20);
	l1->pushFront(1);
	l1->pushFront(4);

	ForwardList* l2 = new ForwardList();
	l2->pushFront(21);
	l2->pushFront(24);

	cout << "Вывод списка: ";
	l1->traverse();

	cout << "Удалим элемент: " << l1->popFront() << endl;

	cout << "Первое значение: " << l1->peekFront() << endl;

	l1->insertAfter(l1->getFront()->next->next, 9);

	cout << "Вывод списка: ";
	l1->traverse();

	l1->eraseAfter(l1->getFront()->next->next);

	cout << "Вывод списка: ";
	l1->traverse();

	l1->remove(5);

	cout << "Вывод списка: ";
	l1->traverse();

	l1->merge(l2);

	cout << "Вывод списка: ";
	l1->traverse();

	l1->unique();

	cout << "Вывод списка: ";
	l1->traverse();

	l1->reverse();

	cout << "Вывод списка: ";
	l1->traverse();

	l1->insertAfter(l1->getFront()->next, 9);
	cout << "Вывод списка: ";
	l1->traverse();

	l1->clear();

	if (l1->isEmpty()) {
		cout << "Список пуст\n";
	}
}


