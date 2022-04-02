#include <bits/stdc++.h>
using namespace std;
#define hue 1000000

int main()
{
    long t, x = 1;
    cin >> t;
    while (t--)
    {
        long c[4], m[4], y[4], b[4], f=hue, u=0, i=0, o=0, p=0, cmin, ymin, mmin, bmin;
        bool sanji = true;
        cin >> c[0] >> m[0] >> y[0] >> b[0] >> c[1] >> m[1] >> y[1] >> b[1] >> c[2] >> m[2] >> y[2] >> b[2];
        cmin = min(c[0], min(c[1], c[2]));
        mmin = min(m[0], min(m[1], m[2]));
        ymin = min(y[0], min(y[1], y[2]));
        bmin = min(b[0], min(b[1], b[2]));
        if (cmin+mmin+ymin+bmin<hue)
        {
            cout << "Case #" << x << ": IMPOSSIBLE\n";
            sanji = false;
        }
        else
        {
            if (cmin > hue) cmin = hue;
            u=cmin;
            f-=cmin;
            if (mmin >= f) i = f;
            else
            {
                i = mmin;
                f-=mmin;
                if (ymin >= f) o = f;
                else
                {
                    o = ymin;
                    f -= ymin;
                    if (bmin >= f) p = f;
                    else
                    {
                        cout << "Case #" << x << ": IMPOSSIBLE\n";
                        sanji = false;
                    }
                }
            }
        }
        if (sanji) cout << "Case #" << x << ": " << u << " " << i << " " << o << " " << p << endl;
        x++;
    }

    return 0;
}