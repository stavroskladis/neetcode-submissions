class NumArray {
public:
    int total = 0;
    vector<int> prefix = {};

    NumArray(vector<int>& nums) {
        // Initialize once during construction the prefix vector
        for (auto n : nums) {
            total += n;
            prefix.push_back(total);
        }    
    }
    
    int sumRange(int left, int right) {
        int preRight = this->prefix[right];
        int preLeft = left > 0? this->prefix[left-1] : 0;
        return preRight - preLeft;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */