#pragma once
//Узел списка
class ListNode {
public:
	int data; //Данные
	ListNode* next; //Следующий узел
	ListNode(int data); //Конструктор
};

class ForwardList {
public:
	ListNode* front; //Начало списка

	//Базовые
	ForwardList();
	bool isEmpty(); //Пустой ли список
	ListNode* getFront(); //Получить узел в начале списка
	int peekFront(); //Получить данные в начале списка
	void pushFront(int data); //Добавить в начало списка
	int popFront(); //Удалить с начала списка
	void insertAfter(ListNode* node, int data); //Вставить узел после указанного узла
	void eraseAfter(ListNode* node); //Удалить узел после указанного узла
	void traverse(); //Вывести на экран все элементы списка
	void clear(); //Очистить список


	//Сложные
	void remove(int data); //Удалить все элементы с переданным значением
	void merge(ForwardList* other); //Соединить 2 списка, очистить передаваемый список
	void reverse(); //Перевернуть список

	//На 12 за пару
	void unique(); //Оставить только уникальные значения
	void sort(); //Отсортировать значения

};