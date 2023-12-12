#pragma once
//���� ������
class ListNode {
public:
	int data; //������
	ListNode* next; //��������� ����
	ListNode(int data); //�����������
};

class ForwardList {
public:
	ListNode* front; //������ ������

	//�������
	ForwardList();
	bool isEmpty(); //������ �� ������
	ListNode* getFront(); //�������� ���� � ������ ������
	int peekFront(); //�������� ������ � ������ ������
	void pushFront(int data); //�������� � ������ ������
	int popFront(); //������� � ������ ������
	void insertAfter(ListNode* node, int data); //�������� ���� ����� ���������� ����
	void eraseAfter(ListNode* node); //������� ���� ����� ���������� ����
	void traverse(); //������� �� ����� ��� �������� ������
	void clear(); //�������� ������


	//�������
	void remove(int data); //������� ��� �������� � ���������� ���������
	void merge(ForwardList* other); //��������� 2 ������, �������� ������������ ������
	void reverse(); //����������� ������

	//�� 12 �� ����
	void unique(); //�������� ������ ���������� ��������
	void sort(); //������������� ��������

};