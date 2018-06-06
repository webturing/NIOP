#include <bits/stdc++.h>

void printIsoscelesTriangle(int x);

using namespace std;

int main(int argc, char const *argv[]) {

    int x;
    cin >> x;
    printIsoscelesTriangle(x);

    return 0;
}

void printIsoscelesTriangle(int x) {
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= x - i; j++)
            cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }

}
