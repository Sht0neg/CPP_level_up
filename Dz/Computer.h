#pragma once
#include "Device.h"
#include <iostream>

class Computer : Device {
private:
	int ram;
	std::string processor;
	std::string gpu;
	int memory;
	std::string motherboard;
public:
	Computer(std::string name, int model, int ram, std::string processor, std::string gpu, int memory, std::string motherboard);
	void start() override {
		std::cout << "Компитер запущен!\n";
	};
	std::string getProcessor();
	void setProcessor(std::string processor);
	int getRam();
	void setRam(int ram);
	std::string getGpu();
	void setGpu(std::string gpu);
	int getMemory();
	void setMemory(int memory);
	std::string getMotherboard();
	void setMotherboard(std::string motherboard);
};
