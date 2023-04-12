#include<bits/stdc++.h>
using namespace std;

int main(){

    map< int , string > m;

    //In map the element is added accoridng to its key value

    //Inserting element
    m[1]="Luck_";                      //First Method
    m[2]="is_with_you";                //First Method
    m.insert( {3 , "Just_do_it_!!"} ); //Second method
    m.insert({4 , "keep_it_simple"});  //Second method 

    //Printing element
    cout<<"Before Erase"<<endl;

    //First way to print using auto keyword
    for(auto i : m){
        cout<<i.first<<" "<<i.second;
        cout<<endl;
    }
    
    //Erase 
    m.erase(4);  //Only key is entered to delete the element

    cout<<"After Erase"<<endl;
    
    //Second way to print using proper datatype
    for(pair<int , string> i : m){  //Instead of pair<int , string> auto will also be used
                                    //In i the value of pair is copied
        cout<<i.first<<" "<<i.second<<endl;
    }
    

    cout<<"Printing using iterator --> "<<endl;
    auto it= m.find(2);        //Third way to print using iterator
    for(auto i = it ; i!=m.end() ; i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;
    } 


    //Founding element
    cout<<"Element 2 is present or not --> " << m.count(2)<<endl;

}