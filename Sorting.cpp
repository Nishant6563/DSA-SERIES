#include<bits/stdc++.h>
using namespace std;
//BUBBLE SORT : O(n^2)
/*int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)   //Traverse
    {
        for(int j=0;j<=n-2;j++)  //Swap upto 2 last element
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}*/

//Insertion sort : O(n^2)

/*int main()
{
    int n;
    cout<<"Enter the size : ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=1;i<=n-1;i++)  //at i=0 only one element present 
    {
        for(int j=i;j>0;j--)   //j swap from i->0
        {
            if(arr[j]<arr[j-1])
            {
                swap(arr[j],arr[j-1]);
            }
        }

    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}*/

//Selection sort : O()

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<=n-1;i++)
    {
        int min_element_index=i;
        for(int j=i+1;j<=n-1;j++)
        {
            if(arr[j]<arr[min_element_index])
            {
                min_element_index=j;
            }

        }

        swap(arr[i],arr[min_element_index]);
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}