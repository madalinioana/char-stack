#include <iostream>
#include <cstring>

class Node {
    char info;
    Node* next;

public:
    Node* top;
    //constructori de initializare
    Node();
    Node(char character);
    //constructor de copiere
    Node(const Node &node);
    //destructor
    ~Node();
    //supraincarcarea operatorului de atribuire
    Node &operator=(const Node &node);
    //gettere
    char GetCharacter();
    Node* GetNext();
    //settere
    void SetCharacter(char character);
    void SetNext(Node* next);
};