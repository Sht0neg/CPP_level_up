#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	vector<int> myNums{ 1,2,3,5 }; //Инициализация вектора

	myNums.push_back(6); //Добавить 6 в конец списка
	//myNums.emplace_back(6); //Добавить 6 в конец списка (чуть быстрее)

	//Вывод элементов вектора на экран (нельзя изменить содержимое вектора)
	for (int x : myNums) {
		cout << x << " ";
	}
	cout << "\n";

	myNums.pop_back(); //Удалить последний элемент списка

	//Вывод элементов вектора на экран (второй способ)
	for (int i = 0; i < myNums.size(); i++) {
		cout << myNums[i] << " ";
	}
	cout << "\n";

	vector<int>::iterator index = myNums.begin() + 3;

	myNums.insert(index, 4);

	//Вывод элементов вектора на экран
	for (auto it = myNums.begin(); it != myNums.end(); it++) {
		cout << *it;
	}
	cout << "\n";

	stack<int> myStack;
	myStack.push(2);
	myStack.push(6);
	myStack.push(11);
	myStack.push(19);

	while (!myStack.empty()) {
		cout << myStack.top() << " ";
		myStack.pop();
	}
	cout << "\n";

	queue<int> myQ;
	myQ.push(5);
	myQ.push(8);
	myQ.push(2);
	myQ.push(11);

	while (!myQ.empty()) {
		cout << myQ.front() << " ";
		myQ.pop();
	}
	cout << "\n";

	set<string> myS;
	myS.insert("Mark");
	myS.insert("Mark");
	myS.insert("Alex");
	myS.insert("Марк");
	myS.insert("Марк");
	for (auto x : myS) {
		cout << x << " ";
	}
	cout << "\n";
	
	map<int, string> myM;
	myM.emplace(1, "Alex");
	myM.emplace(2, "Mark");
	myM.emplace(3, "Danya");
	myM.emplace(2, "Sasha");

	for (auto it = myM.begin(); it != myM.end(); it++) {
		cout << it->first << "--->" << it->second << endl;
	}
}