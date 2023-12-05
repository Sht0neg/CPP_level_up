#include "Computer.h"

std::string Computer::getProcessor() {
	return this->processor;
};
void Computer::setProcessor(std::string processor) {
	this->processor = processor;
};
int Computer::getRam() {
	return this->ram;
};
void Computer::setRam(int ram) {
	this->ram = ram;
};
std::string Computer::getGpu() {
	return this->gpu;
};
void Computer::setGpu(std::string gpu) {
	this->gpu = gpu;
};
int Computer::getMemory() {
	return this->memory;
};
void Computer::setMemory(int memory) {
	this->memory = memory;
};
std::string Computer::getMotherboard() {
	return this->motherboard;
};
void Computer::setMotherboard(std::string motherboard) {
	this->motherboard = motherboard;
};

Computer::Computer(std::string name, int model, int ram, std::string processor, std::string gpu, int memory, std::string motherboard) : processor(processor), ram(ram), gpu(gpu), memory(memory), motherboard(motherboard), Device(name, model){};