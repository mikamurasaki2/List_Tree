#pragma once

struct Node {
    int value;
    Node* next; // ���������, ������� ��������� �� ���������.
};


class List
{
private:
    Node* head;
    // int size;
public:
    void insert(int value); //���������, ���� ���������� ���������� � ��������, ������� ���������.
    void printAll();
    Node* insertElem(Node* node, int position);
    Node* deleteElem(Node* node, Node* root);
    List();
    ~List();
};