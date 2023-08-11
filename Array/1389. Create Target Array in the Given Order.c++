class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n=nums.size();
        vector<int>target(n, 0);
        for (int i = 0; i < n; ++i) 
        {
            if (index[i] == i) 
            {
                target[index[i]] = nums[i];
            }
            else 
            {
                int temp;
                for (int j = index[i]; j < i+1; ++j) 
                {
                    temp = target[j];
                    target[j] = nums[i];
                    nums[i] = temp;
                }
            }
        }
        return target;
    }
};
