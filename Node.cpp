#include "Node.h"

//constructor fara parametri
Node::Node() {
    info = ' ';
    next = NULL;
}

//constructor cu parametri
Node::Node(char character) {
    info = character;
    next = NULL;
}

//constructor de copiere
Node::Node(const Node &node) {
    info = node.info;
    next = node.next;
}

//destructor
Node::~Node() {
    //std::cout << "S-a apelat destructorul\n";
}

//supraincarcarea operatorului de atribuire
Node &Node::operator=(const Node &node) {
    info = node.info;
    next = node.next;
    return *this;
}

//gettere
char Node::GetCharacter() {
    return info;
}

Node* Node::GetNext() {
    return next;
}

//settere
void Node::SetCharacter(char character) {
    info = character;
}

void Node::SetNext(Node *next) {
    this->next = next;
}