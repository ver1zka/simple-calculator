

#include <iostream>

int main()
{
    int num;
    int num1;
    char oper;


    std::cin >> num;
    std::cin >> num1;
    std::cin >> oper;

    if (oper == '+')
        std::cout << num + num1;

    else if (oper == '-')
        std::cout << num - num1;

    else if (oper == '*')
        std::cout << num * num1;

    else if (oper == '/')
        std::cout << num / num1;


}


