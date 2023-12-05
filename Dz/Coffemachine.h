#pragma once
#include "Device.h"
#include <vector>
#include <iostream>

class Coffemachine : Device {
private:
	std::vector<std::string> coffe;
public:
	Coffemachine(std::string name, int model, std::vector<std::string> coffe);
	void start() override {
		std::cout << "Кофемашина работает!\n";
	}
	std::vector<std::string> getCoffe();
	void setCoffe(std::vector<std::string> coffe);
};


