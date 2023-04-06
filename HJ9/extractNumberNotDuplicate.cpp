//
// Created by Administrator on 2023/4/6.
//
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    set<char> st;
    vector<char> ve;
    while (getline(cin, s)) { // 注意 while 处理多个 case
        for (int i = s.size()-1; i >=0; i--) {
            if (find(st.begin(), st.end(), s[i]) == st.end()) {
                st.insert(s[i]);
                ve.push_back(s[i]);
            }

        }
        string res;
        for (auto k : ve) {
            res += k;
        }
        cout << stoi(res) << endl;
    }
}