#pragma once
class QueueNode {
public:
	int data;
	QueueNode* next;
	QueueNode(int data);
};

class Queue {
public:
	QueueNode* front;
	QueueNode* back;
	Queue();
	void enqueue(int data);
	int dequeue();
	int getRear();
	int size();
	int getFront();
	bool isEmpty();
	void traverse();
	void clear();
};