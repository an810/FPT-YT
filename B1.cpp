#include<bits/stdc++.h>
using namespace std;

#define ll long long

int marker(char a1, char a2, char a3, char a4) {
    if (a1 == a2 || a1 == a3 || a1 == a4) return 0;
    if (a2 == a3 || a2 == a4) return 0;
    if (a3 == a4) return 0;
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);

    string s;
    cin >> s;
    int res;
    char a1=s[0], a2=s[1], a3=s[2], a4=s[3];
    for (int i=4; i<s.length(); i++) {
        if (marker(a1,a2,a3,a4)) {
            res = i + 3;
            break;
        }
        else {
            a4 = s[i];
            a1 = a2;
            a2 = a3;
            a3 = a4;
        }
    }
    cout << res;
    return 0;
}