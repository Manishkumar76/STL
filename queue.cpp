#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    //Queues are based on first in and first out FIFO

    queue <int> q ; // Declaring queue

    //Entering values in queue
    cout<<"Enter elements in queue --> " << endl;
    for(int i=0 ; i<6 ; i++){
        int x;
        cin>>x;
        q.push(x);
    }

    //Size of queue
    cout<<"Size of queue before pop function --> "<<q.size()<<endl;

    //Front element and last element 
    cout<<"Front element before pop in queue --> "<<q.front()<<endl;
    cout<<"Back element before pop in queue --> "<<q.back()<<endl;

    //Pop function
    q.pop();

    //Size of queue
    cout<<"Size of queue after pop function --> "<<q.size()<<endl;

    //Front element 
    cout<<"Front element after pop in queue --> "<<q.front()<<endl;
    cout<<"Back element after pop in queue --> "<<q.back()<<endl;

    //Queue empty or not
    cout<<"Queue empty or not --> "<<q.empty()<<endl;
    
    //Swapping of queues
    queue<int>q1;
    queue<int>q2;
    for(int i=0 ; i<6 ; i++){
        q1.push(i);
        q2.push(6-i);
    }

    swap(q1,q2);

    //Printing queues

    cout<<"Printing elements of q1 after swapping --> "<<endl;
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<endl;

    cout<<"Printing elements of q2 after swapping --> "<<endl;
    while(!q2.empty()){
        cout<<q2.front()<<" ";
        q2.pop();
    }

    return 0;
}