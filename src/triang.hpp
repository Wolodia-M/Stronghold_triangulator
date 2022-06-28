namespace triang
{
    void getcord(int x1, int z1, float f1, int x2, int z2, float f2);
    int round(float f);
    float cot(float i);
}
void triang::getcord(int x1, int z1, float f1, int x2, int z2, float f2)
{
    static const float p = M_PI / 180;
    if (abs(f1 - f2) < 1)
    {
        cout << "ERROR: Angles can not be equal!\n";
        return;
    }
    if ((((f1 < 0) && (f2 > 0)) || ((f1 > 0) && (f2 < 0))) && (abs(abs(abs(f1) - 180) - abs(f2)) < 1))
    {
        cout << "ERROR: Angles can not be opposite!";
        return;
    }
    switch (triang::round(f1))
    {
    case -180:
        [[fallthrough]];
    case 0:
        [[fallthrough]];
    case 180:
        cout << " x: " << triang::round(x1) << " y z: " << triang::round(triang::cot(-f2 * p) * x1 - (x2 * triang::cot(-f2 * p) - z2)) << "\n";
        break;
    case 90:
        [[fallthrough]];
    case -90:
        cout << " x: " << triang::round(triang::round(x2 * triang::cot(-f2 * p) - z2 + z1) / triang::cot(-f2 * p)) << " y z: " << triang::round(z1) << "\n";
        break;
    default:
        switch (triang::round(f2))
        {
        case -180:
            [[fallthrough]];
        case 0:
            [[fallthrough]];
        case 180:
            cout << " x: " << triang::round(x2) << " y z: " << triang::round(triang::cot(-f1 * p) * x2 - (x1 * triang::cot(-f1 * p) - z1)) << "\n";
            break;
        case -90:
            [[fallthrough]];
        case 90:
            cout << " x: " << triang::round(z2) << " y z: " << triang::round((x1 * triang::cot(-f1 * p) - z1 + z2) / triang::cot(-f1 * p)) << "\n";
            break;
        default:
            int x = triang::round(((x1 * triang::cot(-f1 * p) - z1) - (x2 * triang::cot(-f2 * p) - z2)) / (triang::cot(-f1 * p) - triang::cot(-f2 * p)));
            cout << " x: " << x << " y z:" << triang::round(triang::cot(-f1 * p) * x - (x1 * triang::cot(-f1 * p) - z1)) << "\n";
        }
    }
}
int triang::round(float f)
{
    if (f == 0)
        return 0;
    if (f > 0)
    {
        return int(f);
    }
    if (f < 0)
    {
        return int(f);
    }
}
float triang::cot(float i)
{
    return 1 / tan(i);
}