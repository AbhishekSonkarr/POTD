class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
    int count=0;
    for(int i =low; i<=high; i++)
    {
        string s;
        s=to_string(i);
        if(s.size()%2==0)
        {
            if(s.size()==2)
            {
                if(s[0]==s[1])
                count++; 
                continue;
            }
        /* to split string into half */
            int n = s.size();
            string left =s.substr(0,n/2);
            string right =s.substr(n/2);
        /* to split each half string into half */
            int m =left.size(), k=right.size();
            string left_1 = left.substr(0,m/2);
            string left_2 = left.substr(m/2);
            string right_1 = right.substr(0,k/2);
            string right_2= right.substr(k/2);

            if(stoi(left_1) + stoi(left_2) == stoi(right_1) + stoi(right_2)) count++;


        }
    }return count;
    }//time complexity O(M)
};



/*---------------ANOTHER SOLUTION-------------
 if(l%2 != 0) {
                continue;
            }

            int leftSum = 0;
            int rightSum = 0;

            for(int i = 0; i < l/2; i++) {
                leftSum += s[i] - '0';
            }

            for(int i = l/2; i < l; i++) {
                rightSum += s[i] - '0';
            }

            if(leftSum == rightSum) {
                count++;
            }
--------------------------------------------*/