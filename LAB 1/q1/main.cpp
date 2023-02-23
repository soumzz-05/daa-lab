#include<iostream>
using namespace std;
int count;

int binsearch(int a[],int n,int x)
{
    int low=0;count++;
    int high=n-1; count++;
   while(low<=high)
    {  count++;

        int mid=(low+high)/2;count++;
        count++;
        if(x==a[mid])
        {
            count++;
            return mid+1;
            count++;
            break;
        }
        else if(x>a[mid])
        {   count++;
            count++;
            low=mid+1;count++;
        }
        else if(x<a[mid])
        {count++;count++;
            high=mid-1;count++;
        }
        else{
            count+=3;
            return 0;
        }
    }count++;
    count++;
    return -1;
}
int main()
{
   int a[100];
   int n;
   cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cout<<"Enter the element to be searched"<<endl;
    cin>>x;
    int pos=binsearch(a,n,x);
    if(pos==-1)
    {
        cout<<"Element not found "<<endl;
    }
    else
    {
        cout<<"Element found at position "<<pos<<endl;
    }
     cout<<"\n Number of steps for this function \n "<<count<<endl;
    return 0;

}
