#include<iostream>
#include<deque>
using namespace std;

 int main(){
    
    //Declaring deque
    deque<int>deq;

    //Copying deque into another
    deque <int> copy_deque(deq);

    //Entering Elements
   //  deq.push_back(3);
   //  deq.push_back(2);    //Adding elements from back
   //  deq.push_front(1);   //Adding elements from front
   //  deq.push_front(4);   
   //  deq.push_back(5);

   //Taking input from user
   cout<<"Enter elements in deque --> "<<endl;
   for(int i=0 ; i<6 ; i++){
      int x;
      cin>>x;
      deq.push_back(x);  //Elements added at end and the last element will be added at the end.
      //deq.push_front(x);  //In case of push_front the last eleemnt will be at first posiiton and so on
   }

    //To access front element
    cout<<"Element at front position --> " << deq.front() << endl ;    
    //To access back element 
    cout<<"Element at end position -->  " << deq.back() <<endl;
    //To access random eleemnt at index i
    cout<<"Elemnt at index 1 --> "<< deq.at(1)<<endl;


    //Deleting elements from deque using pop function
    deq.pop_back();
    deq.pop_front();

    //Updated deque
    cout<<"Size of deque after deletion --> "<<deq.size()<<endl;
    //printing deque
    for(int i:deq) cout<<i<<" ";
    cout<<endl;

    //To cheeck deque empty or not
    cout<<"Deque is empty or not --> "<<deq.empty()<<endl;  //Return false not empty
    
   
    cout<<"Size Before erase function --> " << deq.size() << endl ;  
    //To erase elements
    deq.erase(deq.begin() , deq.begin()+1);  //Remove one element from starting
    //deq.erase(deq.end() , deq.end()+1);  //Remove one element from ending 
    cout<<"Size after erase function --> " << deq.size() << endl ;   //.size() gives number of elements in deque

    
   
    //Printing elements
    cout<<"Updated deque --> ";
    for(int i:deq)
    cout<<i<<" ";
  
    //Gives max size allocted to deque data structure
    cout<<"\nMax Size --> " << deq.max_size() ;


    return 0;
 }