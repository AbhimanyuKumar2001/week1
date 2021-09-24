#include<iostream>
using namespace std;

int main(){
int t,n,k,f=0,c=1;
cin>>t;
for(int j=0;j<t;j++){
cin>>n;
int a[n];
for(int i=0;i<n;i++)
    cin>>a[i];
 cin>>k;

 for(int i=0;i<n;i++,c++)
    if(a[i]==k)
 {
     f=1;
     break;
 }
 if(f==1)
 {
     cout<<"Present "<<c<<endl;
 }
 else
    cout<<"Not Present"<<c<<endl;
}

 return 0;

}

