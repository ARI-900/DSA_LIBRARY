
# 🌟 **C++ DSA Library** 🌟

[![C++](https://img.shields.io/badge/C%2B%2B-DSA_Library-blue?style=for-the-badge&logo=cplusplus&logoColor=white)](https://github.com/ARI-900/DSA-LIBRARY)
[![Contributions](https://img.shields.io/badge/Contributions-Welcome-orange?style=for-the-badge)](CONTRIBUTING.md)

> **Your one-stop solution for learning and implementing Data Structures and Algorithms (DSA) in C++!**  
This modular and extensible library is designed for developers who want clean, reusable, and well-documented DSA implementations.

---

### **📒NOTE:** Compile using a C++11 or later-compatible compiler.
#


## 🚀 **Features**
- 📦 **Modular Design**: Independent modules for each data structure.
- 🔧 **Template-Based**: Generic implementation supports various data types.
- 🌐 **Scalable**: Extensible architecture allows easy addition of new data structures.
- 🛠️ **Ready to Use**: Simply include the module or the main library file in your project.

---

## 📂 **Folder Structure**
#

```
DSA_Library/
│
├── LinkedList/
│   ├── LinkedList.h         # Header file for LinkedList
│   └── LinkedList.tpp       # Implementation file for LinkedList
│
├── BinarySearchTree/        # (Planned for future versions)
│   ├── BinarySearchTree.h   # Header file for Binary Search Tree
│   └── BinarySearchTree.tpp # Implementation file for Binary Search Tree
│
└── MainLibrary.h            # Convenience header for importing all modules
```

#

---
#
## 🛠️ **How to Use**

### 🗂️ **Include a Single Module**
If you only need a specific data structure, include its header file in your project:
```cpp
#include "MAINHEADER/LinkedList/LinkedList.h"
#include "MAINHEADER/BinarySearchTree/BinarySearchTree.h"
```
### 📚 **Include the Entire Library**
To use all available data structures, include AlgoSmith++.h:
```cpp
#include "MAINHEADER/AlgoSmith++.h"
```

#

### 🔍 **Example Usage**
Here’s an example of how to use the Linked List module:
``` cpp
#include<bits/stdc++.h>
#include "MAINHEADER/AlgoSmith++.h"

// #include "MAINHEADER/BinarySearchTree/BinarySearchTree.h"
// #include "MAINHEADER/LinkedList/LinkedList.h"

using namespace std;

int main() {

  // BinarySearchTree
  BinarySearchTree<int> *bst = new BinarySearchTree<int>();

  bst -> insertBST(100);
  bst -> insertBST(50);
  bst -> insertBST(150);
  bst -> insertBST(25);
  bst -> insertBST(75);

  vector<int> ans = bst -> inOrderBST();

  cout << "\nBST elements are: ";
  for(int it : ans) cout << it << "\t";
  cout << endl;

  // Linkedlist 
  
  LinkedList<int> *ll = new LinkedList<int>();

  ll -> insertAtHead(100);
  ll -> insertAtHead(80);
  ll -> insertAtHead(60);
  ll -> insertAtHead(40);
  ll -> insertAtTail(1000);
  ll -> insertAtTail(50000);
  ll -> insertAtTail(108108);

  ll -> printList();
  
  bool isPresent = ll -> searchInList(100);
  if(isPresent) 
    cout << "Element is present in the list" << endl;
  else
    cout << "Element is not present in the list" <<endl;
    
  return 0;
}
```

#
#

---

## 📖 **Modules**

### 1️⃣ **Linked List**
The **LinkedList** module implements a singly linked list with the following features:
- **Insert at Head**: Add a node to the beginning of the list.
- **Insert at Tail**: Add a node to the end of the list.
- **Delete by Value**: Remove a node based on its value.
- **Search for an Element**: Check if an element exists in the list.
- **Print the List**: Display the contents of the linked list.

#### Example:
```cpp
#include "LinkedList/LinkedList.h"
#include <iostream>
using namespace std;

int main() {
    LinkedList<int> list;

    // Insert elements
    list.insertAtHead(10);
    list.insertAtTail(20);
    list.insertAtTail(30);

    // Print the list
    list.printList(); // Output: 10 -> 20 -> 30 -> NULL

    // Delete an element
    list.deleteByValue(20);
    list.printList(); // Output: 10 -> 30 -> NULL

    // Search for an element
    cout << (list.search(30) ? "Found" : "Not Found") << endl; // Output: Found

    return 0;
}
```
#

### 2️⃣ **Binary Search Tree** 🌳

The **BinarySearchTree** module is a planned addition to the library. It will provide efficient implementations of binary search tree operations for handling hierarchical data.

#### 🛠️ **Features**:
- **Insert a Node**: Add a node to the binary search tree while maintaining its properties.
- **Delete a Node**: Remove a node from the tree and reorganize the structure as needed.
- **Search for a Node**: Efficiently locate a node based on its value.
- **Tree Traversals**:
  - **In-Order Traversal**: Visit nodes in sorted order (left, root, right).
  - **Pre-Order Traversal**: Visit nodes in root-first order (root, left, right).
  - **Post-Order Traversal**: Visit nodes in leaf-first order (left, right, root).

#### 📘 **Example Usage**:
The following example demonstrates how the **Binary Search Tree** module will work once available:
```cpp
#include "BinarySearchTree/BinarySearchTree.h"
#include <iostream>
using namespace std;

int main() {
    BinarySearchTree<int> bst;

    // Insert nodes
    bst.insert(50);
    bst.insert(30);
    bst.insert(70);
    bst.insert(20);
    bst.insert(40);

    // Search for a node
    cout << (bst.search(30) ? "Found" : "Not Found") << endl; // Output: Found

    // In-Order Traversal
    bst.inOrderTraversal(); // Output: 20 30 40 50 70

    // Delete a node
    bst.deleteNode(30);
    bst.inOrderTraversal(); // Output: 20 40 50 70

    return 0;
}
```

#

### 🎯 **Why Choose This Library?**
- **For Developers:** Clean, modular design makes it easy to integrate with existing projects.
- **For Learners:** Well-documented and beginner-friendly implementations.
- **For Contributors:** Simple structure for adding new features or data structures.

#

### 💡  **Planned Enhancements**
- ✅ Binary Tree (BT) support
- ✅ Graph and Tri support
- ✅ Algorithms module (e.g., sorting and searching).

#
---
#

### 🤝 **Contributing**
##### We ❤️ contributions!
#
- Fork this repository.
- Create a new branch for your feature or bug fix.
- Submit a pull request with a detailed description of your changes.

#
---
#

## 💬 **Contact**
##### 🧑‍💻 Author: Arijit Chowdhury
##### 📧 Email: [arichowdhury900@gmail.com](mailto:arichowdhury900@gmail.com)
##### 🌐 GitHub: ARI-900

---