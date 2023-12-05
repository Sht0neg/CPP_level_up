#include <iostream>
#include "Computer.h"
#include "Coffemachine.h"
#include <vector>

using namespace std;

int main()
{
    Computer* com1 = new Computer("Compucter", 0, 16, "Intel core i5 12400f", "rtx3060ti", 1000, "B660m");
    Coffemachine* cof1 = new Coffemachine("Coffe", 1, vector<string> {"coffe1", "coffe2", "coffe3"});

}


