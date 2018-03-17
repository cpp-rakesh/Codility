/*
  https://app.codility.com/programmers
  Problem Fish.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 17/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

int solution(vector<int>& a, vector<int>& b) {
    int live = a.size();
    stack<int> = battle;

    for (size_t i = 0; i < a.size(); ++i) {
        if (b[i] == 1) {
            battle.push(a[i]);
        } else {
            
        }
    }

    return battle.size();
}

int main() {
    vector<int> a = {4, 3, 2, 1, 5};
    vector<int> b = {1, 1, 0, 1, 0};
    printf("%d\n", solution(a, b));

    return 0;
}
