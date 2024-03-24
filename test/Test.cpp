#include "../CharStack.h"

void TestNode() {
    Node c1; //constructor fara parametri
    Node c2('a'); //constructor cu un parametru
    Node c3(c2); //constructor de copiere
    Node c4('b');
    Node c5 = c4; //supraincarcarea operatorului de atribuire
    Node c6('c');
    c6.SetCharacter('d'); //setter
    Node c7 = c2.GetCharacter(); //getter

    std::cout << "c1: " << c1.GetCharacter() << "\n";
    std::cout << "c2: " << c2.GetCharacter() << "\n";
    std::cout << "c3: " << c3.GetCharacter() << "\n";
    std::cout << "c4: " << c4.GetCharacter() << "\n";
    std::cout << "c5: " << c5.GetCharacter() << "\n";
    std::cout << "c6: " << c6.GetCharacter() << "\n";
    std::cout << "c7: " << c7.GetCharacter() << "\n";
}

void TestStack() {
    CharStack stiva;
    stiva.Push('a'); //metoda Push
    stiva.Push('b');
    stiva.Push('c');
    std::cout << stiva.Top() << "\n"; //metoda Top
    stiva.IsEmpty(); //metoda IsEmpty
    stiva.Pop(); //metoda Pop
    std::cout << stiva.Top() << "\n";
    stiva.Pop();
    stiva.Pop();
    std::cout << stiva.Top() << "\n";
    std::cin >> stiva; //supraincarcarea operatorului '>>' prin push-uri succesive cu caracterele citite de la tastatura pe un singur rand
    std::cout << stiva; //supraincarcarea operatorului '<<' pentru afisarea stivei
    stiva.IsEmpty();
}

void InversareSir() {
    CharStack stiva;
    std::cin >> stiva; //citire sir de la tastatura
    std::cout << stiva; //afisarea sirului inversat

}

void TestStack2() {
    CharStack s1;
    s1.Push('a');
    s1.Push('b');
    s1.Push('c');
    std::cout << s1 << "\n";
    CharStack s2;
    s2 = s1; //supraincarcarea operatorului de atribuire
    std::cout << s2 << "\n";
    CharStack s3(s2); //constructorul de copiere
    std::cout << s3 << "\n";
}