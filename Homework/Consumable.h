#pragma once
class Consumable {
protected:
	int id;
	Consumable(int id);
	virtual void Consume() = 0;
};
