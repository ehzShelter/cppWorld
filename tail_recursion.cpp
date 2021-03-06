#include <iostream>

unsigned helperTailRecursion(unsigned int n, unsigned int a)
{
    if (n == 0) {
        return a;
    }

    return helperTailRecursion(n - 1, n * a);
}

unsigned int fact(unsigned int n)
{
    if (n == 0) {
        return 1;
    }
    return n * fact(n - 1);
}

int main(void)
{
    std::cout << fact(33);
}
