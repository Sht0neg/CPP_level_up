#pragma once
#include <iostream>
#include <string>
#include "Consumable.h"
class Food : Consumable {
private:
	std::string name;
public:
	Food(int id, std::string name);
	std::string getName();
	void setName(std::string name);
	void Consume() override {
		std::cout << "Продукт " << this->name << " с id " << this->id << " использован";
	}
};