#include <iostream>

int main()
{
    int chislo;
    int del = 2;
    std::cin >> chislo;
    while (del <= chislo)
    {
        if (chislo % del == 0)
        {
            std::cout << del;
            break;
        }
        del = del + 1;
    }
}
