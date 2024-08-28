//
// Created by prokash on 8/26/25.
//

#include "Howmany.hpp"
#include <bits/stdc++.h>
using namespace std;

string num;
long long dp[20][2][2][20];
// dp[pos][tight][started][balance+10]
// balance = (#even - #odd), shifted by +10 to avoid negative index

long long solveDP(int pos, bool tight, bool started, int balance) {
    if (pos == (int)num.size()) {
        return (started && balance == 0); // valid fair number
    }
    long long &res = dp[pos][tight][started][balance+10];
    if (res != -1) return res;
    res = 0;

    int limit = tight ? (num[pos] - '0') : 9;

    for (int dig = 0; dig <= limit; dig++) {
        bool nstarted = started || dig != 0;
        int nbal = balance;
        if (nstarted) {
            if (dig % 2 == 0) nbal++; // even digit
            else nbal--;              // odd digit
        }
        res += solveDP(pos+1,
                       tight && (dig == limit),
                       nstarted,
                       nbal);
    }
    return res;
}

long long countFair(long long x) {
    if (x < 0) return 0;
    num = to_string(x);
    memset(dp, -1, sizeof(dp));
    return solveDP(0, true, false, 0);
}

long long countFairInRange(long long L, long long R) {
    return countFair(R) - countFair(L-1);
}

int NBofFair_main() {
    long long L, R;
    cout << "Enter range L R: ";
    cin >> L >> R;
    cout << "Fair numbers in [" << L << "," << R << "] = "
         << countFairInRange(L, R) << "\n";
}
