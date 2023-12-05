#include <iostream>
#include <memory>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    string line;

    unique_ptr<string> fline = make_unique<string>(line);

    ifstream in;
    in.open("Text.txt");
    if (in.is_open()) {
        getline(in, *(fline.get()));
    }
    in.close();

   
    fline->append("!");

    ofstream out;
    out.open("Test.txt");
    if (out.is_open()) {
        out << *(fline.get());
    }
    out.close();
}


