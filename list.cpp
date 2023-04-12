#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){

    //List is implemented on the basis of doubly linked list

    list <int> l;   //Initialising list data structure

    //Declaring Value in list
    // l.push_front(1);
    // l.push_front(4);
    // l.push_back(3);
    // l.push_back(2);
    // l.push_front(7);
    
    //Taking input
    cout<<"Enter elements in list --> "<<endl;
    for(int i=0 ; i<6 ; i++){
        int x;
        cin>>x;
        l.push_front(x); //Elements are entered and proint in reverse order as the lastr element will be inseretd at first position
    }

    // Printing values in list
    cout<<"Original List --> ";
    for(int i:l){
        cout<<i<<" ";
    } 
    cout<<endl;

    //Copying list in another list
    list<int>copy_list(l);
    //Printing copy list
    cout<<"Copied list --> ";
    for(int i:copy_list) cout<<i<<" ";
    cout<<endl;

    //Removing elements using pop function
    copy_list.pop_back();
    copy_list.pop_front();
    cout<<"Updated copied list --> ";
    //Updated copied list
    for(int i:copy_list)cout<<i<<" ";
    cout<<endl;

    //Finding value at begin and back
    cout<<"value at front -->  " << l.front() << endl; 
    cout<<"value at back -->  " << l.back() << endl; 
    //cout<<"value at back -->  " << l.at(2) << endl;  //We cant find the value randomly we have to traverse and go to that element 
    
    cout<<"Size of list before erase --> " << l.size() <<endl;
    //Erase in list
    l.erase(l.begin());
    cout<<"Size of list after erase --> " << l.size() <<endl;

    //printing updated list
    for(int i:l) cout<<i<<" ";
    

    return 0;
}