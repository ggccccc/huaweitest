#include <iostream>
#include <algorithm>
using namespace std;

void Processing_string(const string& s1, const string& s2,
                       string& output_string) {
    string Intput = "0123456789abcdefABCDEF";
    string Output = "084C2A6E195D3B7F5D3B7F";
    output_string = s1 + s2;
    string odd_str, even_str;
    for (int i = 0; i < output_string.size(); i++) {
        if (i % 2 == 0) {
            odd_str += output_string[i];
        } else {
            even_str += output_string[i];
        }
    }
    sort(odd_str.begin(), odd_str.end());
    sort(even_str.begin(), even_str.end());
    int j = 0, k = 0;
    for (int i = 0; i < output_string.size(); i++) {
        if (i % 2 == 0) {
            output_string[i] = odd_str[j];
            j++;
        } else {
            output_string[i] = even_str[k];
            k++;
        }
    }

    for (int i = 0; i < output_string.size(); i++) {
        if (output_string[i] >= '0' && output_string[i] <= '9') {
            output_string[i] = Output[output_string[i] - '0'];
        } else if (output_string[i] >= 'a' && output_string[i] <= 'f') {
            output_string[i] = Output[output_string[i] - 'a' + 10];
        } else if (output_string[i] >= 'A' && output_string[i] <= 'F') {
            output_string[i] = Output[output_string[i] - 'A' + 16];
        }
    }

    cout<<output_string<<endl;
    return;

}


int main() {
    string s1,s2,output;
    while (cin >> s1 >> s2) { // 注意 while 处理多个 case
        Processing_string(s1, s2, output);
    }
    return 0;
}