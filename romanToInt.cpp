#include<iostream>
using namespace std;
#include<map>
class Solution {

public:
    int romanToInt(string s) {
        int count = 0;
        int n = s.length();
        for (int i = 0; i < n; ++i) {
            int value = symbolValues[s[i]];
            // “当前位置的元素比下个位置的元素小，就减去当前值，否则加上当前值”
            if (i < n - 1 && symbolValues[s[i]] < symbolValues[s[i + 1]]) {
                count -= value;
            }
            else {
                count += value;
            }
        }
        return count;
    }
private:
        map<char, int> symbolValues{
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
};

int main()
{
    string s;
    cout << "Please enter Roman numerals:";
    cin >> s;
    Solution roman_num;
    cout << "The Arabic numeral corresponding to this Roman numeral is:";
    cout<<roman_num.romanToInt(s);
    return 0;
}
