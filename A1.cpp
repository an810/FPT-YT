#include<bits/stdc++.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

#define ll long long

int converter(string s) {
    int res =0;
    for (int i=0; i<s.length(); i++) 
        res = res*10 + (s[i] - '0');
    return res;
}

int main()
{
    ll sum = 0;
    ll res = 0;
    int flag = 0;
    int stop = 0;
    char data[10];
    while (1) {
        gets(data);
        if (!strcmp(data, "")) {
            if (flag) break;
            res = max(sum, res);
            // cout << res << "\n";
            sum = 0;
            flag = 1;
        }
        else {
            int num = converter(data);
            sum += num;
            flag = 0;
        }
    }
    cout << res;
    return 0;
}