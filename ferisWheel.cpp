#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    sort(a.begin(),a.end());
    int l = 0,r = n - 1;
    int ans = 0;
    while(l <= r)
    {
        int total = a[l] + a[r];
        if(total > k) ans++,r--;
        else l++,r--,ans++;
    }
    cout << ans;
}