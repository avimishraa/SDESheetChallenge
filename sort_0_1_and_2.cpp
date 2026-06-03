#include<iostream>
#include<vector>
using namespace std;

void sort012(vector<int>& nums){
    int left=0,mid=0,right=nums.size()-1;

    while(mid<=right){
        if(nums[mid]==0){
            swap(nums[left],nums[mid]);
            left++;
            mid++;
        }

            else if(nums[mid]==1){
                mid++;
            }

            else{
                swap(nums[mid],nums[right]);
                right--;
            }
    }
}
int main()
{
    int n;
    cin>>n;

    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    sort012(nums);

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }


return 0;
}