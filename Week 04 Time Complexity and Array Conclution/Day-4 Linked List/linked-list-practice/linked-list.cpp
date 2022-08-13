#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};

//Display the all element of list
void displayList(Node *head)
{
    cout<<"Display Items"<<endl;
    while(head != NULL)
    {
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl;
}

//Count the length of linked list
int listLength(Node *head)
{
    int lenght = 0;
    while(head != NULL)
    {
        lenght++;
        head = head->next;
    }
    return lenght;
}

//Insert element at the position of head
void insertAtHead(Node* &head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

//Insert elements at the position of tail
void insertAtTail(Node* &head, int val)
{
    Node *temp = head;
    Node *newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        return;
    }

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

//Insert element at any position
void insetItem(Node* &head, int value, int pos)
{
    //Insert at tail position
    if(pos == 1){
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        return;
    }
    if(pos > listLength(head)){
        cout<<"Invalid position"<<endl;
        return;
    }

    Node *temp = head;
    for(int i=1; i<pos-1; i++)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(value);
    Node *prevNode = temp->next;
    temp->next = newNode;
    newNode->next = prevNode;
}

//Search element from uniqe list
void searchItem(Node* head, int value)
{
    int position = 1;
    int flag = 0;

    while(head != NULL)
    {
        if(head->value == value){
            flag = 1;
            break;
        }
        head = head->next;
        position++;
    }
    if(flag == 0){
        cout<<"Value is not found"<<endl;
    }
    else {
        cout<<"Value "<<value<<" and Position is : "<<position<<endl;
    }
}

//Reverse list with recursive way
Node *reverseListRecursive(Node *&head)
{
    if(head == NULL || head->next == NULL){
        return head;
    }

    //Recursive call
    Node *newHead = reverseListRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

//Reverse list with non recursive way
Node *reverseListNonRecursive(Node *&head)
{
    Node *prev = NULL;
    Node *current = head;
    if(head == NULL) return head;
    Node *next = head->next;

    while(1){
        current->next = prev;
        prev = current;
        current = next;
        if(current == NULL) break;
        next = next->next;
    }

    return prev;
}

//Delete element from any position
void deleteItem(Node* &head, int pos)
{
    //Insert at tail position
    if(pos == 1)
    {
        head = head->next;
        return;
    }
    if(pos > listLength(head)){
        cout<<"Invalid position"<<endl;
        return;
    }

    Node *temp = head;
    for(int i=1; i<pos-1; i++)
    {
        temp = temp->next;
    }
    //The next node of deletable element
    Node *nextNode = temp->next->next;
    delete temp->next;
    temp->next = nextNode;
}

int main()
{
    Node *head = NULL;

    while(1){
        int choice;
        cout<<"Select choice"<<endl;
        cout<<"01. Insert at head"<<endl;
        cout<<"02. Insert at tail"<<endl;
        cout<<"03. Insert at any position"<<endl;
        cout<<"04. Search item from list"<<endl;
        cout<<"05. Reverse list recursive way"<<endl;
        cout<<"06. Reverse list non-recursive way"<<endl;
        cout<<"07. Delete from any position"<<endl;
        cout<<"08. Exit program"<<endl;
        cin>>choice;

        if(choice == 6) break;

        int n, value, positon;
        switch (choice){
            case 1:
                //Getting elements
                cout<<"How many element do you insert : ";
                cin>>n;
                cout<<"Enter the "<<n<<" elements"<<endl;

                for(int i=0; i<n; i++){
                    int m;
                    cin>>m;
                    insertAtHead(head, m);
                }
                break;

            case 2:
                //Getting elements
                cout<<"How many element do you insert : ";
                cin>>n;
                cout<<"Enter the "<<n<<" elements"<<endl;

                for(int i=0; i<n; i++){
                    int m;
                    cin>>m;
                    insertAtTail(head, m);
                }
                break;

            case 3:
                cout<<"Insert new element"<<endl;
                int value, position;
                cout<<"Value : ";
                cin>>value;
                cout<<"Position : ";
                cin>>position;
                insetItem(head, value, position);
                break;

            case 4:
                cout<<"Search the position of value"<<endl;
                cout<<"Value : ";
                cin>>value;
                searchItem(head, value);
                break;

            case 5:
                head = reverseListRecursive(head);
                break;

            case 6:
                head = reverseListNonRecursive(head);
                break;

            case 7:
                cout<<"Delete value from specific position"<<endl;
                cout<<"Position : ";
                cin>>positon;
                deleteItem(head, positon);
                break;
        }
        displayList(head);
    }

    displayList(head);

    return 0;
}

