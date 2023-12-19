#include <forward_list>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    forward_list<int> nums{ 5, 9, 24, 8, 25, 3 };
    nums.remove_if([](int n) {return n % 3 == 0; });
    for (auto i = nums.begin(); i != nums.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;
}

