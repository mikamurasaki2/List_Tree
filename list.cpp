#include "list.h"
#include <iostream>

List::List()
{
    head = nullptr;
}

void List::insert(int value)
{
    if (head == nullptr) {
        head = new Node;
        head->value = value;
        head->next = nullptr;
        return;
    }

    Node* current = head;

    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = new Node;
    current = current->next;
    current->value = value;
    current->next = nullptr;
}

void List::printAll()
{
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->value << " ";
        current = current->next;
    }
    std::cout << "\n";
}

Node* List::insertElem(Node* node, int position)
{
    Node* newElem = new Node;
    Node* currElem = node->next;
    node->next = newElem;
    newElem->value = position;
    newElem->next = currElem;
    return newElem;
}

Node* List::deleteElem(Node* node, Node* root)
{
    Node* delElem = new Node;
    delElem = root;

    while (delElem->next != node)
    {
        delElem = delElem->next;
    }

    delElem->next = node->next;
    free(node); // освобождаем память
    return delElem;
}

List::~List()
{
    while (head != nullptr) {
        Node* current = head;
        head = head->next;
        delete current;
    }
}
