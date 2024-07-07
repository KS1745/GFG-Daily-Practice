//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        
        //reverse
        Node* prev = NULL;
        Node* curr = head;
        
        while(curr != NULL){
            Node* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        
        head = prev;
        
        
        //add1
        int carry = 1;
        Node* temp = head;
        while(temp->next != NULL){
            int totalSum = temp->data + carry;
            int digit = totalSum % 10;
            carry = totalSum / 10;
            
            temp->data = digit;
            temp = temp->next;
            
            if(carry == 0){
                break;
            }
        }
        
        //process last node
        if(carry != 0){
            int totalSum = temp->data + carry;
            int digit = totalSum % 10;
            carry = totalSum / 10;
            
            temp -> data = digit;
            if(carry != 0){
                Node* newNode = new Node(carry);
                temp->next = newNode;
            }
        }
        
        
        
        //reverse
        
        Node* prev1 = NULL;
        Node* curr1 = head;
        
        while(curr1 != NULL){
            Node* temp1 = curr1->next;
            curr1->next = prev1;
            prev1 = curr1;
            curr1 = temp1;
        }
        
        head = prev1;
        return head;

    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends