int fib(int n)
{
    int temp = 1;

    if (n > 2)
        temp = fib(n - 1) + fib(n - 2);
    return temp;
    if (n = 1)
        temp = 0;
    return temp;
}
