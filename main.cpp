#include <iostream>
#include <unordered_map>
using namespace std;

// Linked List Node definition
struct Node {
    int data;
    Node* next;
};

void insertAtBeginning(Node*& head, int x) {
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next = head;
    head = newNode;
}

int main() {
// 1. Data Types
/*
int       - Integer
float     - Floating-point number
double    - Double-precision floating-point number
char      - Character
bool      - Boolean (true or false)
string    - String (sequence of characters)
*/

// 2. Comments
// This is a single line comment
/* This is a multi-line
   comment */

    // 3. Variables
    int myInteger = 10;
    float myFloat = 3.14;
    char myChar = 'A';

    // 4. Printing
    cout << "Hello, world!" << endl;

    // 5. Conditionals
    if (myInteger > 5) {
        cout << "Integer is greater than 5" << endl;
    } else if (myInteger == 5) {
        cout << "Integer is equal to 5" << endl;
    } else {
        cout << "Integer is less than 5" << endl;
    }

    // 6. Loops
    // While Loop
    int i = 0;
    while (i < 5) {
        cout << i << endl;
        i++;
    }

    // For Loop
    for (int j = 0; j < 5; j++) {
        cout << j << endl;
    }

    // 7. Functions and Function Prototypes
    // The function insertAtBeginning is defined above main()

    // 8. Function with 1 Parameter
    // Demonstrated by insertAtBeginning()

    // 9. Function with 2 Parameters
    // Could be an extension of insertAtBeginning()

    // 10. Arrays
    int myArray[5] = {1, 2, 3, 4, 5};

    // 11. HashMap Implementation
    // Create an empty unordered_map
    unordered_map<string, int> fruitMap;

    // Add key-value pairs to the map
    fruitMap["apple"] = 1;
    fruitMap["banana"] = 2;
    fruitMap["cherry"] = 3;
    fruitMap["date"] = 4;

    // Print value associated with key "apple"
    cout << "Apple's value: " << fruitMap["apple"] << endl;

    // Print value associated with key "banana"
    cout << "Banana's value: " << fruitMap["banana"] << endl;

    // Print value associated with key "cherry"
    cout << "Cherry's value: " << fruitMap["cherry"] << endl;

    // Print value associated with key "date"
    cout << "Date's value: " << fruitMap["date"] << endl;

    // The line `cout << myMap[1];` from your original code would cause an error
    // because the key "1" is an integer, not a string. Keys must be of the same type
    // as specified in the unordered_map declaration.

    // Remove key-value pair with key "apple"
    fruitMap.erase("apple");

    // Attempt to print value associated with key "apple" (should not exist)
    // Note: Accessing a non-existent key like this will actually create it with a default value (0 for int).
    if(fruitMap.find("apple") == fruitMap.end()) {
        cout << "Apple not found!" << endl;
    } else {
        cout << "Apple's value: " << fruitMap["apple"] << endl;
    }

    // 12. Linked List Implementation
    Node* head = nullptr;

    // Linked List Operations
    insertAtBeginning(head, 5);
    insertAtBeginning(head, 10);

    // Print Linked List
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}
