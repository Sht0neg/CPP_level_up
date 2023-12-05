#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <forward_list>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    vector<int> v{1, 2, 7, 9, 6};
    list<int> l{1, 2, 7, 9, 6};
    deque<int> d{1, 2, 7, 9, 6};
    forward_list<int> f{1, 2, 7, 9, 6};

    for (int i = 0; i < v.size(); i++) {
        cout << &v[i] << " ";
    }
    cout << endl;

    for (auto i = l.begin(); i != l.end(); i++) {
        cout << &i << " ";
    }
    cout << endl;

    for (int i = 0; i < d.size(); i++) {
        cout << &d[i] << " ";
    } 
    cout << endl;

    for (auto i = f.begin(); i != f.end(); i++) {
        cout << &i << " ";
    }
    cout << endl;

    set<int> vs{ 1, 2, 2, 7, 9, 6 };
    multiset<int> ls{ 1, 2, 2, 7, 9, 6 };
    unordered_set<int> ds{ 1, 2, 2, 7, 9, 6 };
    unordered_multiset<int> fs{ 1, 2, 2, 7, 9, 6 };

    for (auto i = vs.begin(); i != vs.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;

    for (auto i = ls.begin(); i != ls.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;

    for (auto i = ds.begin(); i != ds.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;

    for (auto i = fs.begin(); i != fs.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;

    map<int, string> vm;
    vm.emplace(1, "Иван");
    vm.emplace(2, "Марк");
    vm.emplace(3, "Даня");
    vm.emplace(3, "Иван");
    vm.emplace(4, "Алексей");
    multimap<int, string> lm;
    lm.emplace(1, "Иван");
    lm.emplace(2, "Марк");
    lm.emplace(3, "Даня");
    lm.emplace(3, "Иван");
    lm.emplace(4, "Алексей");
    unordered_map<int, string> dm;
    dm.emplace(2, "Марк");
    dm.emplace(3, "Даня");    
    dm.emplace(4, "Алексей");
    dm.emplace(3, "Иван");
    dm.emplace(1, "Иван");
    unordered_multimap<int, string> fm;//mjkljmjvbbvbbvbgcv.;jlk,iisdfjc,mkdfc,jm.dfgjgsdjrgjcmer,ytjcvlkfx.cgdfv,jfd,gvbj,gvlkfv,dfgjlkvs,vsd,gjv,js;vgsvk;gv,v;s,vj,gv,jvg
    fm.emplace(2, "Марк");
    fm.emplace(3, "Даня");
    fm.emplace(4, "Алексей");
    fm.emplace(3, "Иван");
    fm.emplace(1, "Иван");

    for (auto it = vm.begin(); it != vm.end(); it++) {
        cout << it->first << "--->" << it->second << endl;
    }

    cout << endl;

    for (auto it = lm.begin(); it != lm.end(); it++) {
        cout << it->first << "--->" << it->second << endl;
    }

    cout << endl;

    for (auto it = dm.begin(); it != dm.end(); it++) {
        cout << it->first << "--->" << it->second << endl;
    }

    cout << endl;

    for (auto it = fm.begin(); it != fm.end(); it++) {
        cout << it->first << "--->" << it->second << endl;
    }

    cout << endl;
}
