// Sample driver
// EE 312 Fall 2018
//
// The BST should work for any data type or object.
// Other user created objects must have the << operator overloaded for 
// output.
//

#include <iostream>
#include <fstream>
#include "BST312.h"

using namespace std;

template <typename T>
void print(vector<T> vec){
    for(int i = 0 ; i < vec.size() ; i++){
        cout << vec[i] << endl;;
    }
    delete(&vec);
}

int main() {

    ifstream inFile;
    inFile.open("test.txt");

    BST_312<string> bst;
   
    string s;
    inFile >> s;
    while (inFile) {;
        cout << "inserting ... " << s << endl;
        bst.insertItem(s);
        if(bst.isItemInTree(s)){
            cout << "item is now in tree " << s << endl;
        } else {
            cout << "item is NOT in tree " << s << endl;
        }
        inFile >> s;
    }
    cout << "postorder traversal is " << endl;
    print(bst.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(bst.inOrderTraversal());
    cout << endl;

    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bst.countNodes() << endl;
    s = "tree";
    bst.deleteItem(s);
    print(bst.postOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << bst.countNodes() << endl;
    cout << endl;
    if(bst.isItemInTree(s)){
        cout << "item is now in tree " << s << endl;
    } else {
        cout << "item is NOT in tree " << s << endl;
    }
    bst.makeEmpty();
    cout << "number of nodes in tree after empty is " << bst.countNodes() << endl;
    cout << endl;
    cout << "postorder traversal is " << endl;
    print(bst.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(bst.inOrderTraversal());
    cout << endl;
    if(bst.isItemInTree(s)){
        cout << "item is now in tree " << s << endl;
    } else {
        cout << "item is NOT in tree " << s << endl;
    }

    bst.insertItem(s);

    cout << "number of nodes in tree after insert is " << bst.countNodes() << endl;
    cout << endl;
    cout << "postorder traversal is " << endl;
    print(bst.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(bst.inOrderTraversal());
    cout << endl;
    if(bst.isItemInTree(s)){
        cout << "item is now in tree " << s << endl;
    } else {
        cout << "item is NOT in tree " << s << endl;
    }
}

