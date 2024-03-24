 #include<bits/stdc++.h>

using namespace std;
int subarray(vector<int> nums, int k){
    int n = nums.size();
    int cnt = 0;
    int temp = 0;
    for(int i = 0; i < n; i++){
    for(int j = i; j < n; j++){
        if(nums[i] + nums[j]== k){
            cnt++;
        }
        i++;
    }
    		temp = max(temp,cnt);


    }
    return temp;
}
int main(){
    vector<int> nums = {1,1,2,2,3,3,4,1};
    int k =5;
    cout<<subarray(nums,k)<<endl;
    
}