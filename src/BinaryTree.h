//
// Created by Mina on 27.12.2023 г..
//
#include <iostream>

template<typename T>
struct Node {
    T data;
    Node *left;
    Node *right;

    Node(T data, Node<T> *left = nullptr, Node<T> *right = nullptr) : data(data), left(left), right(right) {}
};

template
template<T>
class BinaryTree {
public:
    BinaryTree();
    ~BinaryTree();


    void insert(int data);

    Node *search(int data);

    void destroyTree();

    void inorderPrint();

    void posotrderPrint();

    void preorderprint();

private:
    void destroyTree(Node *leaf);

    void insert(int data, Node *leaf);

    Node *search(int data, Node *leaf);

    void inorderPrint(Node *leaf);

    void postorderPrint();

    void preorderPrint();

    Node *root;
};
