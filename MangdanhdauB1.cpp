#include <bits/stdc++.h>
using namespace std;
int d1, d2, sum_chan, sum_le;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(auto &x : a) cin >>x;
    for(int i = 0; i < n; i++)
        if(a[i]%2 == 0)
            {
                d1 += 1;
                sum_chan += a[i];
            }
        else 
            {
                d2 += 1;
                sum_le += a[i];
            }
    cout << d1<<'\n'<<d2<<'\n'<<sum_chan<<'\n'<<sum_le;
    
}