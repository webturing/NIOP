#include <bits/stdc++.h>

using namespace std;

const int TOTAL = (1 + 13) * 13;
const int N = 26;

int main(void) {
    int val, sum, i;

    sum = 0;
    for (i = 1; i < N; i++) {
        cin >> val;
        sum += val;
    }

    cout << TOTAL - sum << endl;

    return 0;
}