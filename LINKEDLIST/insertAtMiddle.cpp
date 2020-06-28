// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
    
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// function to display the linked list
void display(Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout<<endl;
}

Node* insertInMiddle(Node* head, int x);

int main()
{
    int T, n, x;
    cin>>T;
    while(T--)
    {
        cin>> n >> x;
        
        struct Node *head = new Node(x);
        struct Node *tail = head;
        
        for (int i=0; i<n-1; i++)
        {
            cin>>x;
            tail->next = new Node(x);
            tail = tail->next;
        }
        
        cin>> x;
        head = insertInMiddle(head, x);
        display(head);
    }
    return 0;
}
// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// function should insert node at the middle
// of the linked list
Node* insertInMiddle(Node* head, int x)
{
    	Node *temp=new Node(x);

    if(head==NULL)
    return temp;
    Node * head1=head;
    Node * fast=head;
	while(head1!=NULL and fast->next!=NULL && fast->next->next!=NULL){
	    head1=head1->next;
	    fast= fast->next->next;
	}
	Node * end1= head1->next;
	head1->next=temp;
	temp->next=end1;
	return head;
}