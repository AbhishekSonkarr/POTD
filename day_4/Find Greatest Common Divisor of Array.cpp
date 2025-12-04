class Solution {
public:
    int findGCD(vector<int>& nums) 
    {
    int n=0;
/* to find the max value */
     int maxx=0;
     for (int i =0; i<nums.size();i++) 
     {
        if(maxx<nums[i])
        maxx=nums[i];
     }
    
/* to find the min value */
     int min_value=maxx;
     for (int i : nums) if (min_value>i) min_value = i;
    
/* alogrithm */
    if (maxx == min_value) return maxx;

    for (int i =2 ; i<=min_value;i++)
    {
        if (maxx % i == 0) 
        {
            if(min_value % i == 0) n=i;
        }
    }
    if (n==0) return 1;

    else return n;
    }
};