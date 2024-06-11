#include <bits/stdc++.h>
using namespace std;

long long binarySearch(vector<long long> a,long long key)
{
    //tra ve so lon nhat ma be hon key
    long long l = -1 , r = a.size();
    while(l < r - 1)
    {
        long long mid = (l + r)/2;
        if(a[mid] <= key) l = mid;
        else r = mid;
    }
    return l;
}

int main()
{
    long long n,m;
    cin >> n >> m;
    vector<long long> a(n);
    vector<long long> b(m);
    for(long long i = 0 ; i < n ; i++) cin >> a[i];
    sort(a.begin(),a.end());
    for(long long i = 0 ; i < m ; i++) cin >> b[i];
    for(long long i = 0 ; i < m ; i++)
    {
        long long res = binarySearch(a,b[i]);
        if(res == -1) cout << "-1 ";
        else cout << a[res] << " ",a.erase(a.begin() + res);
    }
}