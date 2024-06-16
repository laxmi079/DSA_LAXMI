#include <bits/stdc++.h>
using namespace std;

using ld = long double;
using ll = long long int;

ld dp_r[105][105][105];
ld dp_s[105][105][105];
ld dp_p[105][105][105];

ld fr(int r, int s, int p)
{
    if (r == 0) return 0;
    if (s == 0) return 0;
    if (p == 0) return 1.0;
    if (dp_r[r][s][p] > -0.9) return dp_r[r][s][p];

    ld total = s * r + s * p + p * r;
    ld result = 0.0;
    result += fr(r - 1, s, p) * ((r * p) / total);
    result += fr(r, s - 1, p) * ((r * s) / total);
    result += fr(r, s, p - 1) * ((s * p) / total);

    return dp_r[r][s][p] = result;
}

ld fs(int r, int s, int p)
{
    if (s == 0) return 0;
    if (p == 0) return 0;
    if (r == 0) return 1.0;
    if (dp_s[r][s][p] > -0.9) return dp_s[r][s][p];

    ld total = s * r + s * p + p * r;
    ld result = 0.0;
    result += fs(r - 1, s, p) * ((r * p) / total);
    result += fs(r, s - 1, p) * ((r * s) / total);
    result += fs(r, s, p - 1) * ((s * p) / total);

    return dp_s[r][s][p] = result;
}

ld fp(int r, int s, int p)
{
    if (p == 0) return 0;
    if (r == 0) return 0;
    if (s == 0) return 1.0;
    if (dp_p[r][s][p] > -0.9) return dp_p[r][s][p];

    ld total = s * r + s * p + p * r;
    ld result = 0.0;
    result += fp(r - 1, s, p) * ((r * p) / total);
    result += fp(r, s - 1, p) * ((r * s) / total);
    result += fp(r, s, p - 1) * ((s * p) / total);

    return dp_p[r][s][p] = result;
}

int main()
{
    ll r, s, p;
    cin >> r >> s >> p;

    memset(dp_r, -1.0, sizeof dp_r);
    memset(dp_s, -1.0, sizeof dp_s);
    memset(dp_p, -1.0, sizeof dp_p);

    ld ans_r = fr(static_cast<int>(r), static_cast<int>(s), static_cast<int>(p));
    ld ans_s = fs(static_cast<int>(r), static_cast<int>(s), static_cast<int>(p));
    ld ans_p = fp(static_cast<int>(r), static_cast<int>(s), static_cast<int>(p));

    cout << fixed << setprecision(9) << ans_r << " " << ans_s << " " << ans_p << endl;
    return 0;
}
