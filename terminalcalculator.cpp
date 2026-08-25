
#include <iostream>

int main () {


    double x, y, n, i, ans;
    char op;

    std::cout << "========================" << std::endl;
    std::cout << "       CALCULATOR       " << std::endl;
    std::cout << "========================" << std::endl;

    std::cout << "   0   1   2   3   4    " << std::endl;
    std::cout << "   5   6   7   8   9    " << std::endl;
    std::cout << "========================" << std::endl;

    std::cout << "Type x: "; std::cin >> x;
    std::cout << "Type y: "; std::cin >> y;
    std::cout << "========================" << std::endl;

    std::cout << "    -    +    /    *    " << std::endl;
    std::cout << "Enter an operator: "; std::cin >> op;
    std::cout << "========================" << std::endl;

    switch (op) {
        case '+': 
            ans = x + y;
            std::cout << x << " + " << y << std::endl;
            std::cout << "========================" << std::endl;
            std::cout << "Ans: " << ans << std::endl;
            break;
        case '-': 
            ans = x - y;

            std::cout << ans << std::endl;
            break;
        case '*': 
            ans = x * y;
            std::cout << ans << std::endl;
            break;
        case '/': 
            ans = x / y;
            std::cout << ans << std::endl;
            break;

        default:
            std::cout << "Invalid" << std::endl;
        
    }
return 0;
}