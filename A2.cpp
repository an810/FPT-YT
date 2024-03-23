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
    vector<int> rank;
    while (1) {
        gets(data);
        if (!strcmp(data, "")) {
            if (flag) break;
            res = max(sum, res);
            rank.push_back(sum);
            sum = 0;
            flag = 1;
        }
        else {
            int num = converter(data);
            sum += num;
            flag = 0;
        }
    }
    sort(rank.begin(), rank.end());
    reverse(rank.begin(), rank.end());
    int top=0;
    for (int i=0; i<3; i++) top += rank[i];
    // for (int i=0; i<3; i++) cout << rank[i] << "\n";
    cout << top;
    return 0;
}