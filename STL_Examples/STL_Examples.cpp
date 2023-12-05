#include <iostream>
#include <list>
#include <forward_list>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

template <typename T> void print(T begin, T end);
void countWords(const vector<string>& words, unordered_map<string, int> word_count);
void countNums(const vector<int>& nums, unordered_map<int, int>& num_count);

int main()
{
    setlocale(LC_ALL, "");
    
    list<int> num_list{ 4, 5, 7, 2, 76, 12, 54, 2, 33, 56, 12, 12, 4, 5 };
    forward_list<int> num_flist{ 4, 5, 7, 2, 76, 12, 54, 2, 33, 56, 12, 12, 4, 5 };
    vector<int> num_vector{ 1, 7, 2, 7, 2, 5, 7, 2, 9 };
    vector<string> words{ "apple", "banana", "strawberry", "apple", "pear", "banana", "banana", "strawberry", "apple" };

    for (auto i = num_list.begin(); i != num_list.end(); ) {
        if (*i % 2 != 0) {
            i = num_list.erase(i);
        }
        else {
            i++;
        }
    }
    print(num_list.begin(), num_list.end());
    
    auto max = max_element(num_vector.begin(), num_vector.end());
    cout << "Max element: " << *max << endl;

    unordered_map<int, int> nums_count;
    countNums(num_vector, nums_count);
    for (auto i = nums_count.begin(); i != nums_count.end(); i++) {
        cout << "Число: " << i->first << " ---> " << i->second << " раз\n";
    }
}

template <typename T> void print(T begin, T end) {
    for (auto i = begin; i != end; i++) {
        cout << *i << " ";
    }
    cout << endl;
}

void countWords(const vector<string>& words, unordered_map<string, int> word_count) {
    for (const auto word : words) {
        word_count[word]++;
    }
}

void countNums(const vector<int>& nums, unordered_map<int, int>& num_count) {
    for (const auto &num : nums) {
        num_count[num]++;
    }
}