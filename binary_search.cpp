#include <bits/stdc++.h>
using namespace std;
int f=0,c=0;


int binarySearch(int arr[], int l, int n, int k)
{
    if (n >= l) {
        int m = (n+l) / 2;


        if (arr[m] == k)
           {
               f=1;
             c++;
             return c;
           }


        if (arr[m] > k)
            {
                 c++;
                return binarySearch(arr, l, m- 1, k);
            }
            c++;

        return binarySearch(arr, m + 1, n, k);
    }


    return c;
}

int main(void)
{
    int t,n,k;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
            cin>>a[j];
        cin>>k;
         int r = binarySearch(a, 0, n - 1, k);

        if(f==1)
            cout<<"Present "<<r<<endl;
        else
            cout<<"Not Present "<<r<<endl;

        f=0,c=0;
    }



    return 0;
}
