#include<iostream>
#include<vector>
using namespace std; 
int main(){
    vector<int> v;
    for(int i=1;i<5;i++){
        v.push_back(i);
    }

    cout<<v.size()<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    for(int i=0; i< v.size() ;i++)
        cout<<v.at(i);
    return 0;
}
