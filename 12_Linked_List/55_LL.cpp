#include <iostream>
using namespace std;

// LINKED LIST - Implementation of LL

//Indivisual Nodes
class Nodes{
public:
    int value; //stored data
    Nodes* nextPtr; //pointer to the subsequent node

    Nodes(int val){
        value = val;
        nextPtr = NULL;
    }
};

//Initiallized a Linked List
class LL{
    Nodes* Head;
    Nodes* Tail;
public:
    LL(){ //Constructor
        Head = Tail = NULL;
    }

    //Push Front in LL
    void push_front(int val){
        Nodes* newnode = new Nodes(val);
        if(Head == NULL){
            Head = Tail = newnode;
        }else{
            newnode->nextPtr = Head;
            Head = newnode;
        }
    }

    //Print
    void print(){
        Nodes* temp = Head;
        while(temp != NULL){
            cout << temp->value << "-->";
            temp = temp->nextPtr;
        }
        cout << "NULL" << endl;
    }

    //Push Back in LL
    void push_back(int val){
        Nodes* newnode = new Nodes(val);
        if(Head == NULL){
            Head = Tail = newnode;
        }else{
            Tail->nextPtr = newnode;
            Tail = newnode;
        }
    }

//deleting from the front
    void pop_front(){
        if(Head == NULL){
            return;
        }else{
            Nodes* temp = Head;
            Head = Head ->nextPtr;
            temp->nextPtr = NULL;
            delete temp;
        }
    }

    //deleting from the back
    void pop_back(int val) {
        if(Head == NULL){
            return;
        }else{
            Nodes* temp = Head;
            while(temp->nextPtr == Tail){
                temp = temp->nextPtr;
                delete Tail;
                Tail = temp;
            }
        }
    }

void insert(int val, int index) {
        // Negative index is invalid
        if (index < 0) return;

        Nodes* newnode = new Nodes(val);

        // Case 1: Insert at Head (Index 0)
        if (index == 0) {
            newnode->nextPtr = Head;
            Head = newnode;
            if (Tail == NULL) {
                Tail = newnode; // List was empty
            }
            return;
        }

        // Case 2: Traverse to the node at (index - 1)
        Nodes* temp = Head;
        for (int i = 0; i < index - 1; i++) {
            if (temp == NULL) {
                // Index out of bounds (too large)
                // Option A: Return error. Option B: Append to end.
                // Here we append to end to be forgiving.
                break; 
            }
            temp = temp->nextPtr;
        }

        // If temp is NULL here, the index was way out of bounds on an empty list
        if (temp == NULL) {
            delete newnode; 
            return;
        }

        // Insert the node
        newnode->nextPtr = temp->nextPtr;
        temp->nextPtr = newnode;

        // Update Tail if we inserted at the end
        if (newnode->nextPtr == NULL) {
            Tail = newnode;
        }
    }

};

int main() {
    LL list;
    
    // Testing functions
    list.push_back(99);
    list.push_back(45);
    list.push_front(10);
    list.push_front(20);
    list.pop_front();
    list.print();
    
    return 0;
}