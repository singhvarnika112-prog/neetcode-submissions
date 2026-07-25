class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //ans the the vector string that will store array of string answers
        vector<vector<string>>ans;
        //it's a hashmap that will store the key and value situation
        unordered_map<string, vector<string>>umap;
        for(auto x: strs)
        {
            string temp = x;
            sort(x.begin(),x.end());
            umap[x].push_back(temp);
        }
        //we only need the answers and not the sorted version
        for(auto x: umap)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};
