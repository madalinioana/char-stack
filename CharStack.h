#include "Node.h"

class CharStack {
    Node* top;

public:
    //constructor
    CharStack();
    //constructor de copiere
    CharStack(const CharStack &stack);
    //destructor
    ~CharStack();

    void Push(char character);
    char Pop();
    char Top();
    bool IsEmpty();

    //supraincarcarea operatorului de atribuire
    CharStack &operator=(const CharStack &stack);
    //supraincarcarea operatorului '<<'
    friend std::ostream& operator<<(std::ostream& os, const CharStack& stack);
    //supraincarcarea operatorului '<<'
    friend std::istream& operator>>(std::istream& is, CharStack& stack);
};