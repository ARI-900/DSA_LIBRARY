#include "BinarySearchTree.h"

template <typename T>
void BinarySearchTree<T>::insertBST(T data) {
    // Create a new node
    Node *newNode = new Node(data); // Ensure you use Node<T> for templates.

    if (root == NULL) {
        // If the tree is empty, make the new node the root.
        root = newNode;
    } else {
        Node *temp = root;

        while (temp != NULL) {
            if (data < temp->data) {
                if (temp->left == NULL) {
                    temp->left = newNode;
                    break;
                  }
                else {
                  temp = temp->left;
                }
            }
            else if (data > temp->data) {
                // Traverse the right subtree.
                if (temp->right == NULL) {
                    
                    temp->right = newNode;
                    break;
                } 
                else {
                    temp = temp->right;
                }
            } 
            else {
                // Data already exists in the tree.
                cout << "Element already present in the tree" << endl;
                delete newNode; 
                break;
            }
        }
    }
}

template <typename T>
void BinarySearchTree<T>::searchBST(T data) {
  
}

template <typename T>
void BinarySearchTree<T>::removeBST(T data) {
  
}

template <typename T>
vector<T> BinarySearchTree<T>::preOrderBST() {
  vector<T> ans;
  preorder(root, ans);
  return ans;
}
template <typename T>
void BinarySearchTree<T>::preorder(Node *root, vector<T> &ans) {
  if (root == NULL)
    return;
  
  ans.push_back(root->data);
  preorder(root->left, ans);
  preorder(root->right, ans);
}



template <typename T>
vector<T> BinarySearchTree<T>::inOrderBST() {
  vector<T> ans;
  inorder(root, ans);
  return ans;
}
template <typename T>
void BinarySearchTree<T>::inorder(Node *root, vector<T> &ans) {
  if (root == NULL)
    return;

  inorder(root->left, ans);
  ans.push_back(root->data);
  inorder(root->right, ans);
}



template <typename T>
vector<T> BinarySearchTree<T>::postOrderBST() {
  vector<T> ans;
  postorder(root, ans);
  return ans;
}
template <typename T>
void BinarySearchTree<T>::postorder(Node *root, vector<T> &ans) {
  if (root == NULL)
    return;

  postorder(root->left, ans);
  postorder(root->right, ans);
  ans.push_back(root->data);
}
