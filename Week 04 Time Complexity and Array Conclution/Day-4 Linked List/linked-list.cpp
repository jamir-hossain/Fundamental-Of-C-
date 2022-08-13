#include <bits/stdc++.h>
using namespace std;

class List
{
public:
    int value;
    List *next;

    List(int value){
        this->value = value;
        this->next = NULL;
    }
};

void insertAtTail(List* &head, int value)
{
    List *newList = new List(value);
    if(head == NULL){
        head = newList;
        return;
    }

    List *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newList;
}

void displayList(List *n)
{
    while(n != NULL)
    {
        cout<<n->value<<" ";
        n = n->next;
    }
}

int main()
{
    List* head = NULL;

    char choise = 'Y';
    while(choise == 'Y'){
        cout<<"Enter Input Y/N : ";
        cin>>choise;
        if(choise == 'N')break;
        int n;
        cin>>n;
        insertAtTail(head, n);
    };

    //displayList(head);
    Sum = 0;
    Temp = Head;
    While ( Temp -> Next!= 1020){
            Sum += Temp-> value
            Temp = Temp -> Next
    };
    Sum -= Temp -> value;
    cout<<Sum;

    return 0;
}
