#include <list>
#include <iostream>
#include <algorithm>

using namespace std;

bool isEven(int x);

int main()
{
    list<int> nums{1, 6, 2, 5, 8, 1};
    //nums.remove_if(isEven);
    nums.remove_if([](int x) {return x % 2 == 0; });
    for (auto i = nums.begin(); i != nums.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;
    for_each(nums.begin(), nums.end(), [](int x) {cout << x * 3 << " "; });
}

//@brief Эта функция выявляет, является ли число чётным. Является предикатом
//@param int x - число, которое будет проверяться
//@return Булевое значение. Истина если чётное, ложь если нечётное
bool isEven(int x) {
    return !(x % 2);
}
