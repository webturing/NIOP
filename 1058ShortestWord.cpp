#include <bits/stdc++.h>

using namespace std;

bool cmp(const string &a, const string &b) {
    return a.length() < b.length();
}

int main(int argc, char const *argv[]) {
    ifstream cin("input.txt");
    vector<string> words((istream_iterator<string>(cin)), istream_iterator<string>());
    words.rbegin()->erase(words.rbegin()->end() - 1);
    auto idx = min_element(words.begin(), words.end(), cmp);
    cout << *idx << endl;
    return 0;
}