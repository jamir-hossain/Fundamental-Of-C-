#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int val){
        value = val;
        next = NULL;
    }
};

//Insert elements at the position of tail
void insertAtTail(Node* &head, int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node *temp = head;
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

//count length of linked list
int countLength(Node* &head){
    int length = 0;
    while(head != NULL){
        length++;
        head = head->next;
    }

    return length;
}

void insertAtPosition(Node* &head, int val, int pos){
    int i=0;
    Node* temp = head;

    while(i<pos-2){
        temp = temp->next;
        i++;
    }

    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
}

int searchValue(Node* &head, int val){
    Node* temp = head;
    int positon = 1;

    while(temp->value != val){
        if(temp->next == NULL){
            return -1;
        }
        temp = temp->next;
        positon++;
    }

    return positon;
}

int searchDuplicateValue(Node* &head, int val){
    Node* temp = head;
    int positon = 1;
    int flag = 0;

    while(temp != NULL){
        if(temp->value == val){
            cout<<positon<<" ";
            flag = 1;
        }
        temp = temp->next;
        positon++;
    }

    if(flag == 0)cout<<"Value not found"<<endl;
}

void displayList(Node *n)
{
    while(n != NULL)
    {
        cout<<n->value<<" ";
        n = n->next;
    }
}

int main()
{
    Node* head = NULL;

    char getInput = 'Y';
    while(getInput == 'Y'){
        string choise;
        cout<<"Insert At Head/Tail : ";
        cin>>choise;

        //Getting elements
        cout<<"How many element do you insert : ";
        int n;
        cin>>n;
        cout<<"Enter the "<<n<<" elements"<<endl;

        if(choise == "Head"){
            for(int i=0; i<n; i++){
                int m;
                cin>>m;
                insertAtTail(head, m);
            }
        }
        else {
            for(int i=0; i<n; i++){
                int m;
                cin>>m;
                insertAtHead(head, m);
            }
        }

        cout<<"Insert Element Again Y/N : ";
        cin>>getInput;
    }

    //insertAtPosition(head, 500, 3);

    cout<<"The result is : "<<endl;
    displayList(head);
    cout<<endl;

    cout<<"Link list length : "<<countLength(head)<<endl;

    cout<<"Search Position Of Value : ";
    int value;
    cin>>value;
    cout<<"The result is : ";
    searchDuplicateValue(head, value);
    //int position = searchValue(head, value);
    //cout<<"The result is : "<<position<<endl;

    return 0;
}

