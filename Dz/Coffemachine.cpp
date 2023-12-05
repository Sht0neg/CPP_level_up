#include "Coffemachine.h"

Coffemachine::Coffemachine(std::string name, int model, std::vector<std::string> coffe) : Device(name, model), coffe(coffe) {};

std::vector<std::string> Coffemachine::getCoffe() {
	return this->coffe;
};

void Coffemachine::setCoffe(std::vector<std::string> coffe) {
	this->coffe = coffe;
};