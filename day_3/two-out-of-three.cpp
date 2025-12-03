class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
    
    
    //remove duplicate entries in same array
    unordered_set<int> s1(nums1.begin(),nums1.end());
    unordered_set<int> s2(nums2.begin(),nums2.end());
    unordered_set<int> s3(nums3.begin(),nums3.end());

    unordered_map<int , int> freq;// declaring freq for counting similar no.
    for(int i: s1) freq[i]++; //freq[i]+=1  i.e. freq[1]=1 --> freq={1,1}
    for(int i: s2) freq[i]++; 
    for(int i: s3) freq[i]++; 
    
    vector<int> ans; // to store result

    for(pair <int , int> p : freq)  //p.first sotre the key and p.second store the value
        {
        if(freq.at(p.first)>1) 
        ans.push_back(p.first);
        }
    return ans; 
    }
};