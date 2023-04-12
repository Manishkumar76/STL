#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<char> q;

    for(int i=0 ; i<5 ; i++){
        char x;
        cin>>x;
        q.push(x);
    }


    while(!q.empty()){
      cout<<q.top()<<"   ";
      q.pop();
    }

}

