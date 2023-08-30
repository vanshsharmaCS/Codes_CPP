////////////////////////////////////////
// THIS ALL ABOUT SINGLY LINKEDLIST ////
////////////////////////////////////////

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//    public:
//    int data;
//    Node * next=NULL;
//    Node(int data){
//     this->data=data;
//     Node* next=NULL;
//    }
//    ~Node(){
//     int val=this->data;
//     if(this->next!=NULL){
//         delete next;
//         this->next=NULL;
//     }
//    }
// };
// void print(Node *&head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//        temp=temp->next;
//     }
//     cout<<endl;
// }
// void insertathead(Node* &head,int d){
//     Node* temp=new Node(d);
//     temp->next=head;
//     head=temp;
// }
// void insertattail(Node* &head,Node* &tail,int d){
//     if(tail==NULL){
//         Node* temp=new Node(d);
//         tail=temp;
//         head=temp;
//         return;
//     }
//     else{
//     Node* temp=new Node(d);
//     tail->next=temp;
//     tail=tail->next;
// }
// }
// void insertatposition(Node* &head,Node* &tail,int d,int pos){
//     if(head==NULL||pos==1){
//         insertathead(head,d);
//         return;
//     }
//     Node* curr=head;
//     int cnt=1;
//     while(cnt!=pos-1){
//         curr=curr->next;
//         cnt++;
//     }
//     Node* forward=curr->next;
//     Node* temp=new Node(d);
//     curr->next=temp;
//     temp->next=forward;
// }
// void deleteNode(Node* &head,int pos){
//   if(pos==1){
//     Node*temp=head;
//     head=head->next;
//     temp->next=NULL;
//     delete temp;
//     return;
//   }
//   else{
//     Node*curr=head;
//     Node*prev=NULL;
//     int cnt=1;
//     while(cnt!=pos){
//         prev=curr;
//         curr=curr->next;
//         cnt++;
//     }
//     prev->next=curr->next;
//     curr->next=NULL;
//     delete curr;
//   }
// }
// int main(){
//     Node* newnode=new Node(10);
//     Node *head=newnode;
//     Node* tail=newnode;
//     print(head);
//     insertattail(head,tail,12);
//     print(head);
//     insertattail(head,tail,15);
//     print(head);
//     insertatposition(head,tail,22,2);
//     print(head);
//     deleteNode(head,4);
//     print(head);
// }

//////////////////////////////////////
////THIS ALL ABOUT DOUBLY LINKEDLIST//
//////////////////////////////////////
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//      public:
//       int data;
//       Node*prev=NULL;
//       Node*next=NULL;

//     Node(int data){
//         this->data=data;
//         Node*prev=NULL;
//         Node*curr=NULL;
//     }
// };
// void insertathead(Node*&head,int d){
//     Node* temp=new Node(d);
//     temp->next=head;
//     head->prev=temp;
//     head=temp;
// }
// void insertattail(Node*&tail,int d){
//     Node*temp=new Node(d);
//     tail->next=temp;
//     temp->prev=tail;
//     tail=temp;
// }
// void insertatpostion(Node*&head,Node*&tail,int pos,int d){
//     if(pos==1){
//         insertathead(head,d);
//         return;
//     }
//     Node*temp=head;
//     int cnt=1;
//     while(cnt<pos-1){
//        temp=temp->next;
//        cnt++;
//     }
//     if(temp->next=NULL){
//         insertattail(tail,d);
//         return;
//     }
//     Node*newnode=new Node(d);
//     newnode->next=temp->next;
//     temp->next->prev=newnode;
//     temp->next=newnode;
//     newnode->prev=temp;
// }
// void print(Node*&head){
//     Node*temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//     Node*newnode=new Node(10);
//     Node*head=newnode;
//     Node*tail=newnode;
//     print(head);
//     insertattail(tail,20);
//     print(head);
//     insertattail(tail,30);
//     print(head);
//     insertatpostion(head,tail,2,22);
//     print(head);
// }

/////////////////////////////////////////
// REVERSE A LINKEDLIST//////
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next=NULL;
//     Node(int data){
//         this->data=data;
//         Node*next=NULL;
//     }
// };
// void print(Node*&head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int getlength(Node*&head){
//     Node*temp=head;
//     int cnt=0;
//     while(temp!=NULL){
//         temp=temp->next;
//         cnt++;
//     }
//     return cnt;
// }
// void reverse(Node*&head){
//     Node*prev=NULL;
//     Node*curr=head;
//     Node*forward=NULL;
//     while(curr!=NULL){
//         forward=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=forward;
//     }
// }
// int main(){
    // Node * first=new Node(10);
    // Node* second=new Node(20);
    // Node* third=new Node(30);
    // Node* fourth=new Node(40);
    // Node* fivth=new Node(50);
    // Node* six=new Node(60);

    // // relation
    // first->next=second;
    // second->next=third;
    // third->next=fourth;
    // fourth->next=fivth;
    // fivth->next=six;
    // six->next=NULL;
    
//     print(first);
//     cout<<"getlength="<<getlength(first);
//     reverse(first);
//     cout<<endl;
//     print(first);
// }
//////////////////////
///CHECK LOOP ///////
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//       public:
//       int data;
//       Node*next=NULL;
//       Node(int data){
//           this->data=data;
//           Node*next=NULL;
//       } 
// };
// void print(Node*&head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// bool checklooppresent(Node*&head){
//     Node*slow=head;
//     Node*fast=head;
//     while(fast!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//             slow=slow->next;
//         }
//         if(slow==fast){
//             return 1;
//         }
//     }
//     return 0;
// }
// Node* getMiddle(Node*&head){
//     if(head==NULL){
//         cout<<"Your LL is empty"<<endl;
//         return head;
//     }
//     if(head->next==NULL){
//         return head;
//     }
//     Node*slow=head;
//     Node*fast=head;
//     while(slow!=NULL&&fast!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//             slow=slow->next;
//         }
//     }
//     return slow;
// }
// int main(){
//      Node * first=new Node(10);
//     Node* second=new Node(20);
//     Node* third=new Node(30);
//     Node* fourth=new Node(40);
//     Node* fivth=new Node(50);
//     Node* six=new Node(60);
//     Node* seven=new Node(70);
//     Node* eight=new Node(80);
//     Node* nine=new Node(90);

//     // relation
//     first->next=second;
//     second->next=third;
//     third->next=fourth;
//     fourth->next=fivth;
//     fivth->next=six;
//     six->next=seven;
//     seven->next=eight;
//     eight->next=nine;
//     nine->next=NULL;  
//     print(first);
//     cout<<"the middle node="<<getMiddle(first)->data<<endl;
// }

///*********/////////////////**************///////////
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next=NULL;
    Node(int data){
        this->data=data;
        Node*next=NULL;
    }
};
void print(Node*&head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertattail(Node*&tail,int d){
    if(tail==NULL){
        Node*temp=new Node(d);
        tail=temp;
        return;
    }
    else{
        Node*temp=new Node(d);
        tail->next=temp;
        tail=tail->next;
    }
}
Node*reverse(Node* head){
    if(head==NULL){
        return head;
    }
    if(head->next==NULL){
        return head;
    }
    Node*prev=NULL;
    Node*curr=head;
    Node*forward=curr->next;;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}
bool checkplaindrom(Node*&head){
    if(head==NULL){
        cout<<"Your LL is empty"<<endl;
    }
    if(head->next==NULL){
        return true;
    }
    //Step A find a middle node
    Node*slow=head;
    Node*fast=head->next;
    while(fast!=NULL&&slow!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    //slow give a middle node
    Node* MiddlekaHead=reverse(slow->next);
    Node* temp1=head;
    Node* temp2=MiddlekaHead;
    while(temp2!=NULL){
        if(temp1->data!=temp2->data){
            return false;
        }
        else{
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
    return true;
}
bool checkloop(Node*&head){
    if(head==NULL){
        return false;
    }
    if(head->next==NULL){
        return false; 
    }
    Node*fast=NULL;
    Node*slow=NULL;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(head==slow){
            return true;
        }

    }
    return true;
}
int main(){
    Node*node1=new Node(1);
    Node*head=node1;
    Node*tail=node1;
    int n;
    cout<<"Enter the size of LL=";
    cin>>n;
    while(n--){
        int ele;
        cin>>ele;
    insertattail(tail,ele);
    }
    print(head);
    if(checkplaindrom(head)){
        cout<<"Yes your LL is valid plaindrom"<<endl;
    }
    else{
         cout<<"Not valid plaindrom"<<endl;
    }
}