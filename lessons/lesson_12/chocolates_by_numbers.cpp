/*
  https://app.codility.com/programmers
  Problem Chocolate Numbers.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 17/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    if (a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}

int solution(int n, int m) {
    return n / gcd(n, m);
}

int main() {
    printf("%d\n", solution(10, 4));
    return 0;
}
