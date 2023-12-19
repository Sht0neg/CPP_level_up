#include "Car.h"
#include <iostream>

Car::Car(std::string brand, std::string model, std::string color, int speed, int price) {
	this->brand = brand;
	this->model = model;
	this->color = color;
	this->speed = speed;
	this->price = price;
};
void Car::print() {
	std::cout << "Марка: " << this->brand << ", модель: " << this->model << ", цвет: " << this->color << ", скорость: " << this->speed << ", стоимость: " << this->price << std::endl;
};
std::string Car::getBrand() {
	return this->brand;
};
void Car::setBrand(std::string brand) {
	this->brand = brand;
};
std::string Car::getModel() {
	return this->model;
};
void Car::setModel(std::string model) {
	this->model = model;
};
std::string Car::getColor() {
	return this->color;
};
void Car::setColor(std::string color) {
	this->color = color;
};
int Car::getSpeed() {
	return this->speed;
};
void Car::setSpeed(int speed) {
	this->speed = speed;
};
int Car::getPrice() {
	return this->price;
};
void Car::setPrice(int price) {
	this->price = price;
};