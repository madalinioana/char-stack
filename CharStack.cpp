#include "CharStack.h"

//constructor
CharStack::CharStack() {
    top = NULL;
}

void CharStack::Push(char character) {
    Node* element = new Node;
    element->SetCharacter(character);
    if(top == NULL) {
        element->SetNext(NULL);
        top = element;
    } else {
        element->SetNext(top);
        top = element;
    }
}

char CharStack::Pop() {
    //nu se poate face pop daca stiva este goala
    if(top == NULL) {
        return NULL;
    }

    Node* copy = top;
    if(top->GetNext() == NULL) {
        top = NULL;
        char character = copy->GetCharacter();
        delete copy;
        return character;
    } else {
        top = top->GetNext();
        char character = copy->GetCharacter();
        delete copy;
        return character;
    }
}

char CharStack::Top() {
    if(top == NULL) {
        return NULL;
    } else {
        return top->GetCharacter();
    }
}

bool CharStack::IsEmpty() {
    return top == NULL;
}

//supraincarcarea operatorului '<<'
std::ostream& operator<<(std::ostream& out, const CharStack& stack) {
    Node* element = stack.top;
    while(element != NULL) {
        out << element->GetCharacter() << "";
        element = element->GetNext();
    }
    return out;
}

//supraincarcarea operatorului '>>'
std::istream& operator>>(std::istream& in, CharStack& stack) {
    char character;
    while(in.get(character) && character != '\n') {
        stack.Push(character);
    }
    return in;
}