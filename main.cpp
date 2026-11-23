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

    int choice;

    do {
        cout << "\n===== BINARY SEARCH TREE MENU =====\n";
        cout << "1. add a code\n";
        cout << "2. delete a code\n";
        cout << "3. search for code\n";
        cout << "4. modify a code\n";
        cout << "5. display all codes\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter code to add: ";
                cin >> code;
                tree.insertNode(code);
                cout << "Code added.\n";
                break;

            case 2:
                cout << "Enter code to delete: ";
                cin >> code;
                if (tree.searchNode(code)) {
                    tree.remove(code);
                    cout << "Code deleted.\n";
                }
                else {
                    cout << "Code not found.\n";
                }
                break;
            
            case 3:
                cout << "Enter code to search: ";
                cin >> code;
                if (tree.searchNode(code)) {
                    tree.remove(code);
                    cout << "Code deleted.\n";
                }
                else {
                    cout << "Code not found.\n";
                }
                break;

            case 4:
                string oldCode, newCode;
                cout << "Enter code to modify: ";
                cin >> oldCode;

                if (tree.searchNode(oldCode)) {
                    cout << "Enter new code: ";
                    cin >> newCode;

                    tree.remove(oldCode);
                    tree.insertNode(newCode);

                    cout << "Code modified.\n";
                }
                else {
                    cout << "Code not found.\n";
                }
                break;
        }

    }
    
	return 0;
}
