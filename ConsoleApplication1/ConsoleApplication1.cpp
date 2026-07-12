

#include <iostream>

int main()
{
    int num;
    int num1;
    char oper;
    std::cout << "welcome in calculator \n";
    std::cout << "print first number \n";
    std::cin >> num;
    std::cout << "print second number \n";
    std::cin >> num1;
    std::cout << "print  operation (+,-,/,*) \n";
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


