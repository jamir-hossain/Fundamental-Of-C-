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

//Insert elements at the position of tail
void insertAtTail(Node* &head, int val){
    Node *temp = head;
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        return;
    }

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
}

//Insert elements at the position of head
void insertAtHead(Node* &head, int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

//Insert element at any position
void insetItem(Node* &head, int value, int pos)
{
    //Insert at tail position
    if(pos == 1)
    {
        Node *prevHead = head;
        head = new Node(value);
        head->next = prevHead;
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

//Delete element from any position
void deleteItem(Node* &head, int pos)
{
    //Insert at tail position
    if(pos == 1)
    {
        Node *prevHead = head;
        head = head->next;
        delete prevHead;
        return;
    }

    Node *temp = head;
    for(int i=1; i<pos; i++)
    {
        temp = temp->next;
    }
    //The next node of deletable element
    Node *nextNode = temp->next->next;
    delete temp->next;
    temp->next = nextNode;
}

//Search element from uniqe list
void searchItem(Node* &head, int value)
{
    int position = 1;
    int flag = 0;
    Node *temp = head;

    while(temp != NULL)
    {
        if(temp->value == value){
            flag = 1;
            break;
        }
        temp = temp->next;
        position++;
    }
    if(flag == 0){
        cout<<"Value is not found"<<endl;
    }
    else {
        cout<<"Value "<<value<<" and Position is : "<<position<<endl;
    }
}

//Print the all item of linked list
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

//count length of linked list
int countLength(Node* &head){
    int length = 0;
    while(head != NULL){
        length++;
        head = head->next;
    }

    return length;
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
        cout<<"05. Delete from any position"<<endl;
        cout<<"06. Exit program"<<endl;
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
                cout<<"Insert value at specific position"<<endl;
                cout<<"Value : ";
                cin>>value;
                cout<<"Position : ";
                cin>>positon;
                insetItem(head, value, positon);
                break;

            case 4:
                cout<<"Search the position of value"<<endl;
                cout<<"Value : ";
                cin>>value;
                searchItem(head, value);
                break;

            case 5:
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

