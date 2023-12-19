#include "ForwardList.h"
#include <iostream>

ListNode::ListNode(int data) {
	this->data = data;
	this->next = nullptr;
}

ForwardList::ForwardList() {
	this->front = nullptr;
}

bool ForwardList::isEmpty() {
	return this->front == nullptr;
}

ListNode* ForwardList::getFront() {
	return this->front;
}

int ForwardList::peekFront() {
	return this->front->data;
}

void ForwardList::pushFront(int data) {
	if (this->isEmpty()) {
		this->front = new ListNode(data);
	}
	else {
		ListNode* first = this->front;
		this->front = new ListNode(data);
		this->front->next = first;
	}
}

int ForwardList::popFront() {
	if (!this->isEmpty()) {
		int data = this->front->data;
		ListNode* first = this->front->next;
		delete this->front;
		this->front = first;
		return data;
	}
	return -1;
}

void ForwardList::insertAfter(ListNode* node, int data) {
	if (!this->isEmpty()) {
		ListNode* temp_node = node->next;
		node->next = new ListNode(data);
		node->next->next = temp_node;
	}
	else {
		std::cout << "Невозможно вставить элемент, список пуст!\n";
	}
}

void ForwardList::eraseAfter(ListNode* node) {
	if (!this->isEmpty()) {
		ListNode* temp_node = node->next->next;
		delete node->next;
		node->next = temp_node;
	}
	else {
		std::cout << "Невозможно удалить элемент, список пуст!\n";
	}
}

void ForwardList::traverse() {
	ListNode* next = this->front;
	while (next != nullptr) {
		std::cout << next->data << " ";
		next = next->next;
	}
	std::cout << std::endl;
}

void ForwardList::clear() {
	while (this->front != nullptr) {
		ListNode* next = this->front->next;
		delete this->front;
		this->front = next;
	}
}

void ForwardList::remove(int data) {
	ForwardList* temp_f = new ForwardList();
	temp_f->front = this->front;
	ListNode* next = temp_f->front;
	while (next != nullptr) {
		if (next->next != nullptr) {
			if (next->next->data == data || next->data == data) {
				ListNode* temp_node = next->next->next;
				delete next->next;
				next->next = temp_node;
			}
			else {
				next = next->next;
			}
		}
		else {
			next = next->next;
		}
	}
	this->front = temp_f->front;
	delete temp_f;
};

void ForwardList::merge(ForwardList* other) {
	ListNode* next = this->front;
	while (next != nullptr) {
		if (next->next == nullptr) {
			next->next = other->front;
			break;
		}
		next = next->next;
	}
	delete other;
}

void ForwardList::unique() {
	int n = 0;
	ListNode* i = this->front;
	ListNode* j = this->front;
	while (i != nullptr) {
		while (j != nullptr) {
			if (i->data == j->data) {
				n++;
			}
			j = j->next;
		}
		if (n > 1) {
			this->remove(i->data);
			i = this->front;
		}
		j = this->front;
		n = 0;
		i = i->next;
	}
}

void ForwardList::reverse() {
	ListNode* current = this->front;
	ListNode* prev = nullptr;
	while (current != nullptr) {
		ListNode* next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	this->front = prev;
}

