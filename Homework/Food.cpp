#include "Food.h"

Food::Food(int id, std::string name) : Consumable(id) {
	this->name = name;
}
std::string Food::getName() {
	return this->name;
}

void Food::setName(std::string name) {
	this->name = name;
}
