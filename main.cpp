#include <iostream>
#include <fstream>
#include <string>
#include "IntBinaryTree.h"
using namespace std;
int main() {
    IntBinaryTree tree;
    string code;
    ifstream inputFile("codes.txt");

    if (!inputFile) {
        cout << "Error opening codes.txt" << endl;
        return 1;
    }

    while (getline(inputFile, code)) {
        tree.insertNode(code);
    }

    inputFile.close();

    cout << "\nSuccessfully loaded codes.txt into the BST." << endl;

    cout << "\nFirst traversal output: " << endl;
    tree.displayInOrder();
    
	return 0;
}
