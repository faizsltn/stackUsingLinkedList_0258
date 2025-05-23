#include <iostream>
using namespace std;

//node class representing a single node in the linked list
class Node
{
public :
    int data;
    Node *next;
    
    Node()
    {
        next = NULL;
    }
};

//stack class
class Stack
{
private:
    Node *top; //pointer to the top node of the stuck

public:
    Stack()
    {
        top = NULL; //initialize the stuck with a null top pointer
    }

    //push operation: insert an element onto the top of the stack 
    int push(int value)
    {
        Node *newNode = new Node(); // 1. allocate memory for the new node
        newNode->data = value;      // 2. assing value
        newNode->next = top;        // 3. set the next pointer of the new node to....
        top = newNode;              // 4. update the top pointer to the new node
        cout << "Push value: " << value << endl;
        return value;
    }

    //pop operation : remove the topmost element from the stuck
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stuck is empty." << endl;
        }

        Node *temp = top; //create a temporary pointer to the top node
        top = top->next;  //update the top pointer to the next node
        cout << "Popped value: " << top->data << endl;
        delete temp;
    }

    void peek()
    {
        if (top == NULL)
        {
            cout << "List is empty." << endl;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        }// return the value of the top node
    }

    // isEmpty operation : check if the stack is Empty
    bool isEmpty()
    {
        return top == NULL;
    }
};

int main()
{
    
}