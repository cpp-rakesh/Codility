/*
  https://app.codility.com/programmers
  Problem Brackets.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 17/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

inline bool is_push(char c) {
    if (c == '[' || c == '{' || c == '(')
        return true;

    return false;
}

int solution(string& s) {
    if (s.size() % 2)
        return 0;

    unordered_map<char, char> dict;
    dict['['] = ']';
    dict['{'] = '}';
    dict['('] = ')';

    stack<char> st;
    for (size_t i = 0; i < s.size(); ++i) {
        if (is_push(s[i])) {
            st.push(s[i]);
        } else {
            if (st.size() == 0)
                return 0;

            const char c = st.top();
            if (s[i] != dict[c])
                return 0;
            st.pop();
        }
    }

    return st.size() == 0;
}

int main() {
    string s = "{[()()]}";
    printf("%d\n", solution(s));

    s = "{[()()]}{";
    printf("%d\n", solution(s));

    return 0;
}
