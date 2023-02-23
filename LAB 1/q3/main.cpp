#include <iostream>
using namespace std;
int count;

void swap(int *x,int *y)
{
    int temp=*x;count++;
    *x=*y;count++;
    *y=temp;count++;

}
void selectionsort(int *p, int n)
{
   count++;
    int i,j;
   for(i=0;i<n-1;i++)
   {
       count++;
      int min=i;count++;
      for(j=i+1;j<n;j++)
      {
          count++;
          count++;
        if(p[j]<p[min])
        {
           min=j;count++;
        }
        swap(p[min],p[i]);count++;
      }count++;
   }count++;

}
int main()
{
    int a[100], n;
    count=0;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    selectionsort(a, n);
    cout << "The sorted array is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    cout<<"\n number of steps in this function is:\n"<<count<<endl;

}
