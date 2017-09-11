#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {

        int n, cnt = 0, a, x = 0, y = 0;
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> a;
            if(a == 0) {
                ++cnt;
                y = 1;
            }
            else if(!y) {
                ++x;
            }
        }
        cout << cnt * 1000 + (n - x) * 100 << '\n';

    }


	return 0;
}

