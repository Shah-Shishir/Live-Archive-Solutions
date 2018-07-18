/***

            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir,
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define ssf sscanf
#define spf sprintf
#define fsf fscanf
#define fpf fprintf
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define vi vector <int>
#define pii pair <int,int>
#define mii map <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 35;

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

bool isPrime (lld n)
{
    if (n == 2)
        return true;

    if (n < 2 || !(n & 1))
        return false;

    for (int i=2; i*i<=n; i++)
        if (n % i == 0)
            return false;

    return true;
}

lld power (lld p)
{
    lld res = 1;

    while (p--)
        res <<= 1;

    return res;
}

int main (void)
{
    /*
    	freopen ("input.txt","r",stdin);
    	freopen ("output.txt","w",stdout);
    */

    int tc,pos;
    lld p,n;

    sf ("%d",&tc);

    for (pos=1; pos<=tc; pos++)
    {
        sf ("%lld",&p);

        if (pos < tc)
            sf (",");

        n = power(p)-1;

        if (isPrime(p) && isPrime(n))
            pf ("Yes");
        else
            pf ("No");

        pf ("\n");
    }

    return 0;
}
