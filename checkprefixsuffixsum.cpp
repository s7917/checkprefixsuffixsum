//check if we can partition the array into subarray with equal sum . more formmally check that the prefix sum of a part of the array is equal to the suffix sym of the rest of the array

#include<iostream>
#include<vector>
using namespace std;
// 1 3 4 5 6 9 8
// totel sum = 36
// prefix sum= 1,4,8 ,13,19 ,27
//suffix sum = 35,32,28 ,23,17 ,9
bool checkprefixsufixsum(vector<int>&v){
    int totel_sum =0;
    for(int i=0 ; i<v.size(); i++){
        totel_sum+=v[i];
    }
    int prefix_sum =0;
    for(int i=0 ; i<v.size(); i++){
        prefix_sum+=v[i];

        int suffix_sum =totel_sum -prefix_sum;
        if(suffix_sum==prefix_sum){
            return true;
        }
        
    }
      return false;
  
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0 ; i<n ; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<checkprefixsufixsum(v)<<endl;
    
    return 0;
}
