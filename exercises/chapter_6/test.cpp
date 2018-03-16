#include "selection_sort.h"
#include "merge_sort.h"

void print(const vector<size_t>& v) {
    printf("--------------------------------------------\n");
    for (size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n--------------------------------------------\n");
}

inline size_t random(size_t s, size_t e) {
    return s + rand() % (e - s + 1);
}

vector<size_t> get(size_t n) {
    vector<size_t> v;
    for (size_t i = 0; i < n; ++i)
        v.push_back(random(1, 1000000));

    return v;
}

int main() {
    vector<size_t> v1 = get(10000);
    vector<size_t> v2 = v1;
    //print(v1);
    clock_t start = clock();
    selection_sort(v1);
    printf("Execution time == [%.08lf] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    //print(v1);

    start = clock();
    merge_sort(v2, 0, v2.size() - 1);
    printf("Execution time == [%.08lf] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    //print(v2);

    return 0;
}
