#include <iostream>
using namespace std;
int count;

void bubblesort(int *p, int n)

{

    int flag=1;count++;
    for (int i = 0; i < n; i++)
    {
        count++;
        if(p[i]>p[i+1]){

           flag=0;count++;
           break;count++;
        }
    }count++;
    if(flag==1){
      count++;
      count++;
      return;
    }

    for (int i = 0; i < n; i++)
    {
        count++;
        for (int j = 0; j < n - i - 1; j++)
        {
            count++;
            count++;
            if (p[j] > p[j + 1])
            {
                int temp = p[j + 1];count++;
                p[j + 1] = p[j];count++;
                p[j] = temp;count++;
            }
        }count++;
    }count++;

}
int main()
{
    int a[100], n;
    count=0;
    cout << "Enter the size of the array"<< endl;
    cin >> n;
    cout << "Enter the elements"<< endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bubblesort(a, n);
    cout << "The sorted array is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<endl;
    }
    cout<<"\n number of steps in this function is:\n"<<count<<endl;

}
