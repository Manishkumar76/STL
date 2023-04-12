#include<iostream>
#include<bits/stdc++.h>
using namespace std;



 void print(vector <int> v){
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
 }
int main(){

vector <int> vec1;

int size;
cout<<"enter the size of vec1: ";
cin>>size;

int x;
for(int i=0;i<size;i++){
    cin>>x;
    vec1.push_back(x);
}
print(vec1);

vector<int> :: iterator itr=vec1.begin();
 vec1.insert(itr,2,4);
   print(vec1);

//code
return 0;
}