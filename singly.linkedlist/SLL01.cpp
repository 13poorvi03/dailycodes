//INSET AT FIRST NODE

#include<iostream>
using namespace std;
class Node{

    public:
    int data;                            
    Node* next;                                  //pointer to next node //store memory address//access elementor node of LL using next 
    
    //constructor
    Node(int data){
         this->data=data;
         next=NULL;

    }
};

void addAfterNode(Node* &first , int d){

    //new node create
    Node* temp =new Node(d);                           //create new node
    temp -> next=first;                                //new node ka next purani first pointer ko point karega 
     first=temp;                                       // first ko update karo temp se jise new node value add hojaye  
}

void print(Node* &first){
    Node* temp= first;                                //temporary pointer liya jise og safe rhe
 
     while(temp != NULL ){                            //jab tak har node ka data print na hojaye tab tk loop chalega
        cout<<temp -> data<<" ";
        temp = temp -> next;                          //move pointer  to next node
    }
    cout<<endl;
}
int main(){
      
    //created a new node
    Node* node1= new Node(10);
    
    //first pointed too node1

    Node* first = node1;
    print(first);

      addAfterNode(first, 12);

       print(first);

         addAfterNode(first, 15);
            print(first);

    return 0;
}