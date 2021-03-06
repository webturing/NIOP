#include <bits/stdc++.h>

using namespace std;

struct BigInteger {
    vector<int> D;
    int len;

    friend istream &operator>>(istream &is, BigInteger &b) {
        string buf;
        is >> buf;
        b.len = buf.length();
        for (auto i = buf.rbegin(); i != buf.rend(); ++i)
            b.D.push_back(int(*i - '0'));
        return is;
    }

    friend ostream &operator<<(ostream &os, const BigInteger &b) {
        auto firstNonZero = b.D.rbegin();
        while (*firstNonZero == 0 && firstNonZero != b.D.rend() - 1)
            ++firstNonZero;
        copy(firstNonZero, b.D.rend(), ostream_iterator<int>(os, ""));
        return os;
    }

    int getDigitAt(int pos) const {
        if (pos >= len)
            return 0;
        return D[pos];
    }


    BigInteger operator+(const BigInteger &b) const {
        BigInteger c;
        c.len = max(len, b.len);
        int sc = 0;
        for (int i = 0; i < c.len; i++) {
            int temp = sc + getDigitAt(i) + b.getDigitAt(i);
            sc = temp / 10;
            c.D.push_back(temp % 10);
        }
        return c;
    }

    BigInteger operator*(const BigInteger &b) const {
        BigInteger c;
        c.len = len + b.len;
        c.D.resize(c.len);
        for (int i = 0; i < len; i++)
            for (int j = 0; j < b.len; j++) {
                c.D[i + j] += getDigitAt(i) * b.getDigitAt(j);

            }
        int sc = 0;
        for (int i = 0; i < c.len; i++) {
            int temp = sc + c.D[i];
            sc = temp / 10;
            c.D[i] = temp % 10;
        }
        if (sc) {
            c.D[c.len - 1] += sc;
        }
        return c;
    }
};


int main() {
    BigInteger a, b;
    cin >> a >> b;
    cout << a * b << endl;

    return 0;

}


