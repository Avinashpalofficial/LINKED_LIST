#include<iostream>
using namespace std;
   class Node{
     public:
        int val;
        Node *next;
        Node(int val){
            this->val=val;
            this->next=NULL;
           // this->next=next;
        } 
   };
      void display(Node *head){
              
              Node *temp= head;
              while((temp)!=NULL){
                   
                   cout<<temp->val<<endl;
                   temp = temp->next;

             

              }
            //   cout<<endl;



      }


int main(){
             
           Node *a = new Node(2);
           Node *b = new Node(6);
           Node *c = new Node(5);
           Node *d = new Node(4);
           Node *e = new Node(3);

           a->next =b;
           b->next =c;
           c->next =d;
           d->next =e;
           
        Node *temp =a;

            while((temp)!=NULL){              

            cout<<temp->val<<endl;

                temp =(temp->next);
            }
          

            // Node a(2);
            // Node b(3);
            // Node c(4);
            // Node d(6);

            // a.next= &b;
            // b.next= &c;
            // c.next= &d;

        //    cout<< *(*(*(a.next).next).next).val;

        //    cout<<a.next->val;

        //  cout<< *(*(a.next).next).val;
            // Node temp =a;

            // while((temp.next)==NULL){              

            // cout<<temp.val<<endl;

            //     temp =*(temp.next);
            // }


         display(a);   


}