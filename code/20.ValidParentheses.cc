#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else {
                if (!st.empty()) {
                    if (st.top() == '(' && s[i] == ')') {
                        st.pop();
                    } else if (st.top() == '{' && s[i] == '}') {
                        st.pop();
                    } else if (st.top() == '[' && s[i] == ']') {
                        st.pop();
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
            }
        }
        if (!st.empty()) return false;
        return true;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  string s = "()[]{}";

  cout << S.isValid(s) << endl;

  return 0;
}
