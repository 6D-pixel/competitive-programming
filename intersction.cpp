#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> temp;
    vector<int> nums1{1,2,2,1};
    vector<int> nums2{2,2};
        for(int i=0;i<nums1.size();i++){
        for(int j=0;j<nums2.size();i++){
            if(nums1.at(i)==nums2.at(j)){
                temp.push_back(nums1.at(i));
            }
            }
        }
    for(int i=0;i<temp.size();i++)
        cout<<temp.at(i)<<"\t";
    return 0;
}