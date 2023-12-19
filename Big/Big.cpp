#include <iostream>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    vector <int> v = { 1, 2, 9, 8 };

    cout << v[3] << endl;
    cout << 1 + 2 << endl;
    cout << v.size() << endl;
    if (7 % 2 == 0) {
        cout << "Чётное";
    }

    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    int max = v[0];
    int sum = 0;
    for (int i : v) {
        sum += i;
        if (i > max) {
            max = i; 
        }
    }
    cout << max << endl;
    cout << sum << endl;
    cout << sum / v.size() << endl;
}

