#include <iostream>
#include <memory>
#include <fstream>
#include <vector>

using namespace std;

class Animal {
public:
    string name;
    Animal(string name) : name(name) {}
    ~Animal() {
        cout << this->name << " удалён\n";
    }
    void print() {
        cout << "Животное с именем: " << name << endl;
    }
};

class Node {
private:
    int value;
public:
    vector<shared_ptr<Node>> connections;
    Node(int val) : value(val) {}
    ~Node() {
        cout << "Удалён узел со значением: " << value << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "");
    Animal cat("Tom");
    cat.print();

    unique_ptr<Animal> dog =  make_unique <Animal>("Reks");
    dog->print();

    shared_ptr<Animal> horse = make_shared<Animal>("Юлий");
    horse->print();

    unique_ptr<fstream> streamPtr = make_unique<fstream>("Test.txt");
    if (!streamPtr->is_open()) {
        cerr;
        return 1;
    }

    shared_ptr<Node> root = make_shared<Node>(1);
    root->connections.push_back(make_shared<Node>(2));
    root->connections.push_back(make_shared<Node>(3));
    root->connections[0]->connections.push_back(make_shared<Node>(4));

}

