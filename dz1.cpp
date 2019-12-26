
#include <iostream>

double f(double x) {
    double y = (x * x * x) + 3 * x;
    return y;
}

//Вот тут, конечно, признаю, прокол, потому что я понятия не имею, как вводить разные функции, поэтому взяла одну, но точно монотонную.

void findhole(double & x1, double & x2)
{ 
    x1 = -1;
    x2 = 1;
    double y1 = f(x1);
    double y2 = f(x2);
    if (y1 < y2)
    {
        while (y2 < 0)
        {
            x2 *= 2;
            y2 = f(x2);
        }
        while (y1 > 0)
        {
            x1 *= 2;
            y1 = f(x1);
        }
    }
    else
    {
        while (y2 > 0)
        {
            x2 *= 2;
            y2 = f(x2);
        }
        while (y1 < 0)
        {
            x1 *= 2;
            y1 = f(x1);
        }
    }
}

void danilacrazy(double x1, double x2)
{
    double b = 20;
    while ((b >= 0.000001) || (b <= -0.000001))
    {
        b = f((x2 - x1) / 2);
        if ((b < 0.000001) && (b > -0.000001)) { std::cout << "awnser " << b; }
        if (b >= 0.000001) { x2 = ((x1 - x2) / 2);}
        if (b <= -0.000001) { x1 = ((x1 - x2) / 2); }
    }
}

int main(int argc, const char* argv[])
{
    double x1, x2;
    findhole(x1, x2);
    std::cout << x1 << " " << x2 << std::endl;
    danilacrazy(x1, x2);
    return 0;
}

