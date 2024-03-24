#include "CharStack.h"
#include "test/Test.h"

void nElemente()
{
    int n;
    std::cout << "'n' value:";
    std::cout << "\n";
    std::cin >> n;
    std::cout << "\n";

    //pentru primul obiect
    CharStack stiva;
    std::cin.ignore() >> stiva;
    std::cout << stiva << "\n";

    //pentru celelalte obiecte
    for(int i = 1; i <= n-1; i++)
    {
        CharStack stiva;
        std::cin >> stiva;
        std::cout << stiva << "\n";
    }
}

int main() {
    //TestNode();
    //TestStack();
    //TestStack2();
    //InversareSir();
    //nElemente();
}
