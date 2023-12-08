#include "Queue.h"
#include <iostream>

using namespace std;

int main()
{
    Queue* q1 = new Queue();

    q1->enqueue(5);
    q1->enqueue(10);
    q1->enqueue(15);
    q1->enqueue(20);

    cout << q1->back->data << " " << q1->front->data;
    q1->dequeue();
    cout << endl<< q1->back->data << " " << q1->front->data;

    cout << endl << q1->size() << endl;
    q1->traverse();

    q1->clear();
    q1->traverse();

}

