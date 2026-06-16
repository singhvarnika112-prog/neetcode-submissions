class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        //it allows to store array with unique elemets
        //count() is a built-in fucntion
        //complexity is O(n)
        //;)
        for(int num : nums){
            if(seen.count(num)){
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};