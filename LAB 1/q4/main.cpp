#include <iostream>
using namespace std;
int count;

void insertionSort(int arr[], int n)
{

    int key, j;    count++;
    for (int i = 1; i < n; i++)
    {        count++;

        key = arr[i];count++;
        j = i - 1;count++;

        while (j >= 0 && arr[j] > key)
        {            count++;
            arr[j + 1] = arr[j];count++;
            j--;count++;
        }
        count++;
        arr[j + 1] = key;count++;
    }
    count++;

}
int main() {
    int n;
    count=0;
    cout << "Enter the number of elements:";
    cin >>n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertionSort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout<<"\n Number of steps for this function \n "<<count<<endl;
    return 0;
}

