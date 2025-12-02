#include<iostream>
using namespace std;

int main()
{
    int t,c=0,k;
    cin >> t;
    
    int n;
   while(t--)
   {
    cin >> n;
    if(n%2==0)
    {
        /*
        2 legs of chicken + 4 legs of cows = total legs
        
        ==> 2 * Chicken + 4 * Cows = n Legs
        ==> chickens =0 , cows = n Legs/4
        ==> cows = 0,1,2,3,4,... , chickens = n Legs - (0,1,2,3,4,...)  
                            OR  
            chickens = 0,1,2,3,4,... ,  cows = n Legs -(0,1,2,3,4...)
        
        note: if we use chickens no. of iteration will increase
         */


        while(c<=n/4)
        {
            k=n-4*c;// fo find no. of chickens 
            c++;
        }cout<<c<<endl;
    }
    else cout<<"0"<<endl;

   }

        

    return 0;
}


//time complexity: O(t x n)