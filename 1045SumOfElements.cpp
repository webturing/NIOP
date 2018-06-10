#include <bits/stdc++.h>

using namespace std;
const int ROWS = 4;
const int COLS = 4;

int main(int argc, char const *argv[]) {
    ifstream cin("input.txt");
    vector<vector<int> > A(ROWS); //这个m一定不能少
    for (int i = 0; i < A.size(); i++) {
        A[i].resize(COLS);
        for (auto &e:A[i])cin >> e;
    }
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < ROWS; i++) {
        sum1 += A[i][i];
        sum2 += A[ROWS - 1 - i][i];
    }
    cout << sum1 << " " << sum2 << endl;
    return 0;
}