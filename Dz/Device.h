#pragma once
#include <string>

class Device {
protected:
	std::string name;
	int model;
public:
	Device(std::string name, int model);
	virtual void start() = 0;
	std::string getName();
	void setName(std::string name);
	int getModel();
	void setModel(int model);
};
