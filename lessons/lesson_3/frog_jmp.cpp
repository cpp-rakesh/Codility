/*
  https://app.codility.com/programmers
  Problem Frog Jump.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 13/03/2018
*/

#include <bits/stdc++.h>

int solution(int x, int y, int d) {
    return (y - x) % d == 0 ? (y - x) / d : ((y - x) / d) + 1;
}

int main() {
    printf("%d\n", solution(2,  10, 2));
    printf("%d\n", solution(2,  11, 2));
    printf("%d\n", solution(10, 85, 30));

    return 0;
}
