#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> st;
        queue<char> q;
        string reversed_w;
        bool b = true;
        for (auto c : word) {
            if (b) {
                st.push(c);
            } else {
                q.push(c);
            }
            if (c == ch) {
                b = false;
            }
        }
        while (!st.empty()) {
            reversed_w += st.top();
            st.pop();
        }
        while (!q.empty()) {
            reversed_w += q.front();
            q.pop();
        }
        if (b) {
            return word;
        }

        return reversed_w;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  string word = "xyxzxe";
  char ch = 'z';

  cout << S.reversePrefix(word, ch) << endl;

  return 0;
}
