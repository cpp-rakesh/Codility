/*
  https://app.codility.com/programmers
  Problem Fish.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 17/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

int solution(vector<int>& a, vector<int>& b) {
    int alive = 0;
    stack<int> battle;

    for (size_t i = 0; i < a.size(); ++i) {
        if (b[i] == 0) {
            if (battle.empty()) {
                ++alive;
            } else {
                while (battle.size() && a[i] > battle.top())
                    battle.pop();

                if (battle.empty())
                    ++alive;
            }
        } else {
            battle.push(a[i]);
        }
    }

    return alive + battle.size();
}

int main() {
    vector<int> a = {4, 3, 2, 1, 5};
    vector<int> b = {0, 1, 0, 0, 0};
    printf("%d\n", solution(a, b));

    return 0;
}
