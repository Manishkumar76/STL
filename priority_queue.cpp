#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    //Initialising priority queue
    priority_queue <int> max_heap ; //When we declare priority queue like this we always get maximum data first as output

    //Another Method
    priority_queue< int , vector<int> , greater<int> > min_heap; //When we declare like this we always get minimum value first as output
    
    //Entering values in priority queue
    cout<<"Enter elements to give input in priority queues --> "<<endl;
    for(int i=0 ; i<6 ; i++){
        int x ; 
        cin>>x;
        max_heap.push(x);
        min_heap.push(x);
    }

    //Getting output from priority queue we use top function..
    cout<<"The output from max_heap queue before pop function --> " << max_heap.top()<<endl;
    cout<<"The output from min_heap queue before pop function --> " << min_heap.top()<<endl;

    //Finding size of queues
    cout<<"The size of max_heap before pop function --> " << max_heap.size() <<endl;
    cout<<"The size of min_heap before pop function --> " << min_heap.size() <<endl;

    //Deleting element from queue then we use pop function
    max_heap.pop();
    min_heap.pop();


    //Getting output from priority queue we use top function..
    cout<<"The output from max_heap queue after pop function --> " << max_heap.top()<<endl;
    cout<<"The output from min_heap queue after pop function --> " << min_heap.top()<<endl;

    //Finding size of queues
    cout<<"The size of max_heap after pop function --> " << max_heap.size() <<endl;
    cout<<"The size of min_heap after pop function --> " << min_heap.size() <<endl;
    
    cout<<"Printing elements from max_heap queue --> "<<endl;
    while(!max_heap.empty()){
        cout<<max_heap.top()<<" ";
        max_heap.pop();
    }
    cout<<endl;

    cout<<"Printing elements from min_heap queue --> "<<endl;
    while(!min_heap.empty()){
        cout<<min_heap.top()<<" ";
        min_heap.pop();
    }

    cout<<endl;


    //Priority queue empty or not
    cout<<"max_heap queue empty or not --> " << max_heap.empty()<<endl;
    cout<<"min_heap queue empty or not --> " << min_heap.empty()<<endl;


    priority_queue <int> q1;
    priority_queue <int> q2;
    //priority_queue <int , vector<int> , greater<int> > q2; // We can't swap two different type of  priority queues they must be of same type.

    for(int i=0 ; i<6 ; i++){
        q1.push(i*2);
        q2.push(i*3);
    }

    swap(q1,q2);

    cout<<"Priority queue q1 after swapping --> "<<endl;
    while(q1.empty()!=1){
        cout<<q1.top()<<" ";
        q1.pop();
    }
    cout<<endl;

    cout<<"Priority queue q2 after swapping --> "<<endl;
    while(q2.empty()!=1){
        cout<<q2.top()<<" ";
        q2.pop();
    }
    cout<<endl;

   return 0;

}