#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int main() {

    int m;
    cin >> m;
    vector<string> I;

    for (int i = 0; i < m; i++) {
        string tmp;
        cin >> tmp;
        I.push_back(tmp);
    }

    int n;
    cin >> n;
    set<int> st;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        st.insert(tmp);
    }
    for (auto &it: st) {
        cout << it << " ";
    }
    vector<int> res;
    for (auto &it: st) {
        int cnt = 0;
        bool okk = false;
        for (auto &it1: I) {
            if (it1.find(to_string(it)) != string::npos) {
                cnt++;
                if (!okk) {
                    okk = true;
                    res.push_back(it);
                }
            }
        }

        if (cnt != 0) {
            res.push_back(cnt);
            for (int i = 0; i < m; i++) {
                if (I[i].find(to_string(it)) != string::npos) {
                    res.push_back(i);
                    res.push_back(stoi(I[i]));
                }
            }
        }
    }
    cout << res.size() << " ";
    for (auto &it: res) {
        cout << it << " ";
    }
    cout << "\n";
    return 0;
}
