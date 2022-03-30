#include <iostream>

/* this is just a test*/

int main(int argc, char **argv)
{
    int n, r, k;
    std::cin >> n;
    if (n < 1)
        std::cout << ("Error: n is not positive");
    else if (n > 0)
    {
        std::cout << ("0 ");
        for (int i = 1; i < n; i++)
        {
            r = fib(i);
            std::cout << ("%d ", r);
        }
    }
    return 0;
}
