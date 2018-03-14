/*
  https://app.codility.com/programmers
  Problem Count Div.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 14/03/2018
*/

#include <bits/stdc++.h>

int solution(int a, int b, int k) {
    return (b / k) - ((a - 1) / k);
}

int main() {
    printf("%d\n", solution(0, 11, 2));

    return 0;
}
