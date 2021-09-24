#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int c=0;
int f=0;

int jumpsearch(int a[],int n,int key){
    int jump=sqrt(n);
    int steps=jump;
    int prev=0;

    while(a[int(min(steps,n)-1)]<key){
        prev=steps;
        steps+=jump;
        c++;
        if(prev>=n){
            return c;
        }

    }
    while(a[int(prev)]<key)
    {
        prev+=1;
        c++;
        if(prev==min(steps,n))
            return c;
    }
    if(a[int(prev)]==key)
    {
        c++;
        f=1;
        return c;
    }

}
int main()
{
    int t,n,k;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
            cin>>a[j];
        cin>>k;
        int r=jumpsearch(a,n,k);
        if(f==1)
            cout<<"Present "<<r<<endl;
        else
            cout<<"Not Present "<<r<<endl;
        c=0;
        f=0;
    }
    return 0;
}

