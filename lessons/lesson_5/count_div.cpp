/*
  https://app.codility.com/programmers
  Problem Count Div.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 14/03/2018
*/

#include <bits/stdc++.h>

int solution(int a, int b, int k) {
    int p = 0;
    if (a > 0)
        p = ((a - 1) / k) + 1;

    int q = 0;
    if (b >= 0)
        q = (b / k) + 1;

    return q - p;
}

int main() {
    printf("%d\n", solution(6, 11, 2));

    return 0;
}
