#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxsubarraySum(vector<int> & nums){
    int currsum=0;
    int maxsum=INT_MIN;

    for(int i=0;i<nums.size();i++){
        currsum+=nums[i];
        maxsum=max(currsum,maxsum);

        if(currsum<0){
            currsum=0;
        }
    }

    return maxsum;

}
int main()
{
    int n;
    cin>>n;

    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    cout<<maxsubarraySum(nums);

return 0;
}