
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int pivot(int n){
    
    int start = 0;
    int end = n;
    int suml = 0, sumr = 0;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        for (int i = 1; i <= mid; i++)
        {
            suml = suml + i;
       //     cout<<"Sum l is "<<suml<<endl;
        }
        for (int i = mid; i < n; i++)
        {
            sumr = sumr + i;
        //    cout<<"Sum r is "<<sumr<<endl;
        }
        if (suml == sumr)
        {
         //   cout<<"When equal "<<mid<<endl;
            return mid;
        }
        else if (suml < sumr)
        {
            start = mid;
        }
        else
        {
            end = mid;
        }
        mid = (start + end) / 2;
    }
    return mid;
}
int main()
{
    int n = 8;
    cout<<"Pivot is "<<pivot(n);
}