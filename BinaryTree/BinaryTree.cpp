#include "BinaryTree.h"

template<typename T>
BinaryTree<T>::BinaryTree(){
    root = nullptr;
}

template<typename T>
BinaryTree<T>::~BinaryTree(){
    destroyTree();
}

template<typename T>
void BinaryTree<T>::destroyTree(Node<T> *leaf){
    if(leaf != nullptr){
        destroyTree(leaf->left);
        destroyTree(leaf->right);
        delete leaf;
    }
}

template <typename T>
void BinaryTree<T>::insert(int data, Node<T> *leaf){
    if (data < leaf->data){
        if (leaf->left != nullptr){
            insert(data, leaf->left);
        } else {
            leaf->left = new Node<T>;
            leaf->left->data = data;
            leaf->left->left = nullptr;
            leaf->left->right = nullptr;
        }
    } else if(data > leaf->data){
        if (leaf->right != nullptr){
            insert(data, leaf->right);
        } else {
            leaf->right = new Node<T>;
            leaf->right->right = nullptr;
            leaf->right->left = nullptr;
        }
    }
}

template<typename T>
void BinaryTree<T>::insert(int data) {
    if (root != nullptr){
        insert(data, root);
    } else {
        root = new Node<T>;
        root->data = data;
        root->left = nullptr;
        root->right = nullptr;
    }
}



int main (){
    BinaryTree<int> tree;

    tree.insert(10);
    tree.insert(6);
    tree.insert(14);
    tree.insert(5);
    tree.insert(8);
    tree.insert(11);
    tree.insert(18);




    return 0;
}