#include <bits/stdc++.h>
using namespace std;

double mat[12][12];

double solve(char opt) {
    double s = 0.0;
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            if (j < i) {
                s += mat[i][j];
            }
        }
    }
    if (opt == 'S') {
        return s;
    }
    return s / 66.0;
}

int main() {
    char opt;
    cin >> opt;
    memset(mat, 0.0, sizeof mat);
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            double v;
            cin >> v;
            mat[i][j] = v;
        }
    }
    printf("%.1f\n", solve(opt));
}
