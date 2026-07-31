#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        int m = nums1.size();

        stack<int> st;

        vector<int> nextGreaterVal(10001, -1);

        for (int i = n - 1; i >= 0; i--) {
            int curr = nums2[i];

            while (!st.empty() && st.top() <= curr) {
                st.pop();
            }

            if (st.empty()) {
                nextGreaterVal[curr] = -1;
            } else {
                nextGreaterVal[curr] = st.top();
            }

            st.push(curr);
        }

        vector<int> result;
        for (int i = 0; i < m; i++) {
            int val = nums1[i];
            result.push_back(nextGreaterVal[val]);
        }

        return result;
    }
};