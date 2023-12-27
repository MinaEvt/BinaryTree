#include <iostream>

template<typename T>
struct Node {
    T data;
    Node *left;
    Node *right;

    //Node(T data, Node<T> *left = nullptr, Node<T> *right = nullptr) : data(data), left(left), right(right) {}
};

template<typename T>
class BinaryTree {
public:
    BinaryTree();
    ~BinaryTree();


    void insert(int data);

    Node<T> *search(int data);

    void destroyTree();

    void inorderPrint();

    void posotrderPrint();

    void preorderprint();

private:
    void destroyTree(Node<T> *leaf);

    void insert(int data, Node<T> *leaf);

    Node<T> *search(int data, Node<T> *leaf);

    void inorderPrint(Node<T> *leaf);

    void postorderPrint();

    void preorderPrint();

    Node<T> *root;
};
