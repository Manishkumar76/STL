#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    //In set the elements is stored only once either it repeats

    set <int> s;

    //Enteribg elements in set
    for(int i=0 ; i<6 ; i++){
        int x;
        cin>>x;
        s.insert(x);
    }

    //Printing values
    for(auto i:s) cout<< i << " ";
    cout<<endl;

    //TO create iterator of set
    set<int>::iterator itr;
    //to delete first element
    itr=s.begin();
    //To delete element next element 
    itr++;

    
    s.erase(itr);


    for(auto itr : s) cout<<itr <<" ";
    cout<<endl;

    //To find element iterator
    set<int>::iterator it=s.find(6);
    

    //printing element using iterator
    for(auto i=it ; i!=s.end() ; i++){
        cout<<*i<<" ";
    }
    cout<<endl;

    
    //To check element present or not
    cout<<"Is 5 present or not --> " << s.count(5)<<endl;

}
