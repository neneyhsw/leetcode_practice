#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convertDateToBinary(string date) {
        string ans, temp;
        for (int i = 0; i < date.length(); i++) {
            if (date[i] == '-') {
                bitset<16> bs(stoi(temp));
                temp = bs.to_string();
                ans += (temp.substr(temp.find('1')) + '-');
                temp = "";
            } else {
                temp += date[i];
            }
        }
        bitset<8> bs(stoi(temp));
        temp = bs.to_string();
        ans += (temp.substr(temp.find('1')));
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  string date = "2080-02-29";
  cout << S.convertDateToBinary(date) << endl;

  return 0;
}
