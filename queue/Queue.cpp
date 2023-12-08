#include "Queue.h"
#include <iostream>

QueueNode::QueueNode(int data) {
	this->data = data;
	this->next = nullptr;
};

Queue::Queue() {
	this->back = nullptr;
	this->front = nullptr;
}

bool Queue::isEmpty() {
	return this->front == nullptr;
}

int Queue::getFront() {
	return this->front->data;
}

int Queue::getRear() {
	return this->back->data;
}

void Queue::enqueue(int data) {
	QueueNode* newNode = new QueueNode(data);
	if (this->isEmpty()) {
		this->front = newNode;
	}
	else {
		this->back->next = newNode;
	}
	this->back = newNode;
}

int Queue::dequeue() {
	if (!this->isEmpty()) {
		int data = this->front->data;
		QueueNode* newNode = this->front->next;
		delete this->front;
		this->front = newNode;
		return data;
	}
	else {
		return -1;
	}
}

int Queue::size() {
	int n = 0;
	QueueNode* node = this->front;
	while (node != nullptr) {
		n++;
		node = node->next;
	}
	return n;
}

void Queue::traverse() {
	QueueNode* node = this->front;
	while (!this->isEmpty()) {
		std::cout << node->data << " ";
		node = node->next;
	}
	std::cout << std::endl;
}

void Queue::clear() {
	while (!this->isEmpty()) {
		QueueNode* node = this->front;
		delete this->front;
		this->front = node->next;
	}
}