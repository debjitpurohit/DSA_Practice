#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int ncr(int n, int r)
{
    int ans = ((factorial(n)) / (factorial(r) * factorial(n - r)));
    return ans;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int ans = ncr(a, b);
    cout << ans << endl;

    return 0;
}