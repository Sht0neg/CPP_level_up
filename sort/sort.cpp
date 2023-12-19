#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int list[4] = { 12, 4, 7, 1 };

    for (int i : list) {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 1; i < 4; i++) {
        int j = i - 1;
        while (j >= 0 && list[j] > list[j + 1]) {
            swap(list[j], list[j + 1]);
            j--;
        }
    }

    for (int i : list) {
        cout << i << " ";
    }
    cout << endl;
}
