#include <iostream>
#include <string>
#include <vector>

using namespace std;

class StringAnalyzer {

public:
    StringAnalyzer(string _str) : str(_str) {};
    int getStrLength() {
        return str.size();
    }
    char getCharAt(int _idx) {
        if (_idx > str.size() - 1) {
            return 'A';
        }

        return str[_idx];
    }
    int getCharSum(vector<int> _values) {

        int sum = 0;

        for (auto& _e : _values) {
            if (_e > str.size() - 1) {
                sum += (int)'A';
            }
            else {
                sum += (int)str[_e];
            }
        }

        return sum;
    }
private:
    string str;
};

int main()
{
    string str;
    int v;
    int k;
    vector<int> values;

    getline(cin, str);
    cin >> v;
    while (true) {
        cin >> k;
        if (k == -999) {
            break;
        }
        values.push_back(k);
    }

    StringAnalyzer sa(str);
    cout << sa.getStrLength() << endl;
    cout << sa.getCharAt(v) << endl;
    cout << sa.getCharSum(values) << endl;

    return 0;
}