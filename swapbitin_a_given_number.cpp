#include <bits/stdc++.h>
using namespace std;

int swapBits(int x, int p1, int p2, int n)
{
    /* xor contains xor of two sets */
    int xor = ((x >> p1) ^ (x >> p2)) & ((1U << n) - 1);
    /* To swap two sets, we need to again XOR the xor with
     * original sets */
    return x ^ ((xor << p1) | (xor << p2));
}
