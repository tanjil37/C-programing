#include <stdio.h>
int main()
{
    int h, hh, m, mm, s, ss, d, dd;
    scanf("Dai %d", &d);
    scanf("%d : %d : %d", &h, &m, &s);
    scanf("Dai %d", &dd);
    scanf("%d : %d : %d", &hh, &mm, &ss);

    s = ss - s;
    m = mm - m;
    h = hh - h;
    d = dd - d;
    if (s < 0)
    {
        s += 60;
        m--;
    }
    if (m < 0)
    {
        m += 60;
        h--;
    }
    if (h < 0)
    {
        h += 60;
        d--;
    }
    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);

    return 0;
}