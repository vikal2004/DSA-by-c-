#include<bits/stdc++.h>
using namespace std;
struct Node
{
   public:
   int data;
   Node* next;

//constructor 
   public:
   Node(int data1, Node* next1){
    data=data1;
    next=next1;
   }
   //construtor
   public:
   Node(int data1){
    data=data1;
    next=nullptr;
   }
};
//constructor -This is the special type of method,
// used to initialize the object.
int main(){
vector<int> arr={2,5,8,7};
Node* y=new Node(arr[0],nullptr);
cout<<y->data<<endl;
}
