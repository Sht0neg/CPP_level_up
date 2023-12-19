#include "Food.h"
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    Food* f = new Food(1, "Pizza");
    f->Consume();
}


