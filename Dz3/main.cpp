#include "Car.h"
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int n = 0;
    int sum = 0;
    bool flag = true;
    string brand;
    string model;
    string color;
    int speed;
    int price;
    while (true) {
        cout << "Если хотите ввести новую машину введите 0, если хотите выйти введите любую другую цифру: ";
        int t;
        cin >> t;
        if (t != 0) {
            break;
        }
        cout << "Введите марку: ";
        cin >> brand;
        cout << "Введите модель: ";
        cin >> model;
        cout << "Введите цвет: ";
        cin >> color;
        cout << "Введите скорость: ";
        cin >> speed;
        cout << "Введите стоимость: ";
        cin >> price;
        Car* car = new Car(brand, model, color, speed, price);
        car->print();
        n++;
        sum += car->getSpeed();
    }
    cout << "Средняя скорость всех автомобилей: " << sum / n;
}

