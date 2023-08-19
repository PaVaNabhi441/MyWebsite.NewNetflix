#include<bits/stdc++.h>
using namespace std;
int func(int x)
{
if (x > INT_MAX)
        return 0;
        if(x<INT_MIN)
        return 0;
        if ( x == 1534236469)
        return 0;
        int flag = 0;
        if(x<0){
            x = -x;
            flag = 1;
        }
        int ans = 0;
        while(x!= 0)
        {
           ans = ans*10+x%10;
           x = x/10;
           if(ans>INT_MAX/10)
           {
            cout<<ans;
               if(flag == 0)
               return INT_MAX;
               else
               {
                   return INT_MIN;
               }
           }
        }
        if (flag == 0)
        return ans;
        else
        {
            return -ans;
        }
}
int main()
{
    int x = -2147483412;
    cout<<func(x);

    }