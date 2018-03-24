/*
  https://app.codility.com/programmers
  Chapter 10 Example 1
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 25/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

void print(const vector<bool>& h) {
    printf("----------------------------------------------------------\n");
    for (size_t i = 1; i < h.size(); ++i)
        printf("%d ", h[i]);
    printf("\n----------------------------------------------------------\n");
}

int heads(int n, vector<int>& p) {
    vector<bool> h(n + 1, true);

    print(h);

    for (size_t i = 0; i < p.size(); ++i)
        for (size_t j = p[i]; j < h.size(); j += p[i])
            h[j] = !h[j];

    int c = 0;
    for (size_t i = 1; i < h.size(); ++i)
        if (h[i])
            ++c;

    print(h);

    return c;
}

int main() {
    const int n = 100;
    vector<int> p = {2, 4};
    printf("Number of heads == [%d]\n", heads(n, p));

    return 0;
}
