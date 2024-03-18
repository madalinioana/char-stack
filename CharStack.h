#include "Node.h"

class CharStack {
    Node* top;

public:
    //constructor
    CharStack();

    void Push(char character);
    char Pop();
    char Top();
    bool IsEmpty();

    //supraincarcarea operatorului '<<'
    friend std::ostream& operator<<(std::ostream& os, const CharStack& stack);
    //supraincarcarea operatorului '<<'
    friend std::istream& operator>>(std::istream& is, CharStack& stack);
};