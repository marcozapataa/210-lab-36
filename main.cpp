#include <iostream>
#include "IntBinaryTree.h"
using namespace std;
int main() {
    IntBinaryTree tree;

    // insert strings
    tree.insertNode("ABC123");
    tree.insertNode("DEF456");
    tree.insertNode("GHI789");
    tree.insertNode("JKL012");

    // display the tree
    cout << "\nInorder Traversal: " << endl;
    tree.displayInOrder();

    cout << "\nSearching for DEF456: ";
    
    if (tree.searchNode("DEF456")) {
        cout << "Found!" << endl;
    }
    else {
        cout << "Not found." << endl;
    }

    cout << "\nSearching for XYZ999: ";

    if (tree.searchNode("XYZ999")) {
        cout << "Found!" << endl;
    }
    else {
        cout << "Not found." << endl;
    }

    cout << "\nRemoving DEF456..." << endl;
    tree.remove("DEF456");

    cout << "\nInorder Traversal After Deletion: " << endl;
    tree.displayInOrder();
    
	return 0;
}
