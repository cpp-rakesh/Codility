/*
  https://app.codility.com/programmers
  Problem Nesting.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 18/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

int solution(string& s) {
    if (s.size() % 2)
        return 0;

    stack<int> brackets;
    for (size_t i = 0; i < s.size(); ++i) {
        if (s[i] == '(') {
            brackets.push(1);
        } else  {
            if (brackets.empty())
                return 0;
            brackets.pop();
        }
    }

    return brackets.empty();
}

int main() {
    string s = "";
    printf("%d\n", solution(s));
    s = "())";
    printf("%d\n", solution(s));
    s = "(()(())())";
    printf("%d\n", solution(s));
    s = "(()";
    printf("%d\n", solution(s));

    return 0;
}
