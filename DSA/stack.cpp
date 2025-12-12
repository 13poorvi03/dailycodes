#include<iostream>
using namespace std;

class Stack{
  int capacity;
  int * arr;
  int top ;

  public :
  Stack(int c){
    this -> capacity = c;
    arr = new int[c];;
    this -> top = -1;
  }

  void push(int data){
    if(this-> top >= this -> capacity - 1){
        cout<<"Overflow";
        return ;

    }
  }
};
 int main(){

    return 0;
 }