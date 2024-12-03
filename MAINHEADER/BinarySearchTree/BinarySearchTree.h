#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

#include<iostream>
#include<vector>
using namespace std;


template <typename T>
class BinarySearchTree {

  private:
    struct Node {
      T data;
      Node *left;
      Node *right;

      Node(T val) {
        data = val;
        left = NULL;
        right = NULL;
      }
    };
    // Node<T> *root;
    Node *root;

  public:
    BinarySearchTree() {
      root = NULL;
    }
    ~BinarySearchTree() {
      clear(root);
    }

    void insertBST(T val);
    void searchBST(T val);
    void removeBST(T val);
    vector<T> preOrderBST();
    vector<T> inOrderBST();
    vector<T> postOrderBST();


  private:
    void preorder(Node *root, vector<T> &ans);
    void inorder(Node *root, vector<T> &ans);
    void postorder(Node *root, vector<T> &ans);
};

#include "BinarySearchTree.tpp"

#endif