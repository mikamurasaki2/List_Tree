#pragma once

struct Node {
    int value;
    Node* next; // Указатель, который указывает на структуру.
};


class List
{
private:
    Node* head;
    // int size;
public:
    void insert(int value); //Указатель, куда происходит добавление и значение, которое добавляем.
    void printAll();
    Node* insertElem(Node* node, int position);
    Node* deleteElem(Node* node, Node* root);
    List();
    ~List();
};