#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> mismatch(vector<int> nums){
    int n=nums.size();
    unordered_map<int,int> freq;
    vector<int> ans;

    for(int x:nums){
        freq[x]++;
    }

    for(int i=1;i<=n;i++){
        if(freq[i]>1){
            ans.push_back(i);
        }
        else if(freq[i]==0){
            ans.push_back(i);
        }
    }

    return ans;
}
int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    vector<int> ans = mismatch(nums);

    for(int x : ans){
        cout << x << " ";
    }

    return 0;
}