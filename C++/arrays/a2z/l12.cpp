 #include<bits/stdc++.h>

using namespace std;

   int singleNumber(vector<int>& nums) {
        int n= nums.size();
        int temp = 0;
        
        for (int i = 0; i<n;i++){
            temp = temp^nums[i];
        }
        return temp;
    }
    int main(){
         vector<int> nums = {1,1,2,2,3,3,4};
        cout<<singleNumber(nums)<<endl;
    }