#include "Device.h"

std::string Device::getName() {
	return this->name;
};
void Device::setName(std::string name) {
	this->name = name;
};
int Device::getModel() {
	return this->model;
};
void Device::setModel(int model) {
	this->model = model;
};

Device::Device(std::string name, int model){
	this->name = name;
	this->model = model;
};