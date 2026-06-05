#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals) {

    sort(intervals.begin(), intervals.end());

    int n = intervals.size();
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++) {

        int start = intervals[i][0];
        int end = intervals[i][1];

        if (!ans.empty() && end <= ans.back()[1]) {
            continue;
        }

        for (int j = i + 1; j < n; j++) {

            if (intervals[j][0] <= end) {
                end = max(end, intervals[j][1]);
            }
            else {
                break;
            }
        }

        ans.push_back({start, end});
    }

    return ans;
}

int main() {

    int n;
    cout << "Enter number of intervals: ";
    cin >> n;

    vector<vector<int>> intervals(n, vector<int>(2));

    cout << "Enter intervals (start end):\n";

    for (int i = 0; i < n; i++) {
        cin >> intervals[i][0] >> intervals[i][1];
    }

    vector<vector<int>> result = mergeIntervals(intervals);

    cout << "\nMerged Intervals:\n";

    for (auto &interval : result) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }

    cout << endl;

    return 0;
}