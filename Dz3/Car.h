#pragma once
#include <string>
class Car {
private:
	std::string brand;
	std::string model;
	std::string color;
	int speed;
	int price;
public:
	Car(std::string brand, std::string model, std::string color, int speed, int price);
	void print();
	std::string getBrand();
	void setBrand(std::string brand);
	std::string getModel();
	void setModel(std::string model);
	std::string getColor();
	void setColor(std::string color);
	int getSpeed();
	void setSpeed(int speed);
	int getPrice();
	void setPrice(int price);
};
