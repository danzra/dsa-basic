#include<bits/stdc++.h>
using namespace std;

int main(){
    //declare array
    int array[10];
    int n,i;
    int max=INT_MIN;
    cin>>n;
    //input array
    for(int i=0;i<n;i++)
    {
        cin>>array[i];



    }
//largest element in array
    for(int i=1;i<n;i++)
    {
        if(array[i]>max)
        {
            max=array[i];

        }

    }
    cout<<max<<endl;
    



   
}