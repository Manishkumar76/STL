#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    stack <int> s;

    //Entering elements 
    cout<<"Enter elements in stack --> "<<endl;
    for(int i=0 ; i<5 ; i++){
        int x;
        cin>>x;
        s.push(x);
    }

    //To check size of stack
    cout<<"Size of stack --> " <<  s.size() << endl ; 

    //To acces top value
    cout<<"The top value of stack --> " << s.top() <<endl;

    //To delete value in stack 
    //We can delete only the last value entered 
    s.pop();
    cout<<"The top value after pop function --> " << s.top()<<endl ; 

    //Size of stack after deletion
    cout<<"Size of stack after pop operation --> "<< s.size() << endl;

    //To print stack
    cout<<"Entered values in stack --> "<<endl;
    while(s.empty()!=1){
        cout<<s.top()<<" ";  //Values will be printed in reverse order as last/top element will print first
        s.pop();
    }
    cout<<endl;

    //Check stack empty or not
    cout<<"Stack is empty or not --> " << s.empty() <<endl ;

    //Swap two stacks
    stack<int>s1;
    stack<int>s2;

    for(int i=0 ; i<5 ; i++){
        s1.push(i+1);   //Values in s1
        s2.push(i+100); //Values in s2
    }

    swap(s1,s2);

    //Printing stack values
    cout<<"Values in stack s1 after swapping with s2 --> "<<endl;
    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }

    cout<<"\nValues in stack s2 after swapping with s1 --> "<<endl;
    while(!s2.empty()){
        cout<<s2.top()<<" ";
        s2.pop();
    }


    //To add element in the stack
    cout<<"Enter the element you want to add --> ";
    int x;
    cin>>x;
    s.emplace(x);

    cout<<"Element after emplacing in stack s --> " << s.top()<<endl;

     
    return 0;
    

}