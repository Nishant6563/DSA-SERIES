#include<bits/stdc++.h>
using namespace std;

/*int main()
{
    int arr[5];
    for (int i = 0; i <= 4; i++){
        cin >> arr[i];
    }
}*/

/*int main()
{
    char arr[5];
    for(int i=0;i<=4;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<=4;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}*/

/*int main()
{
    int n;
    cout<<"Enter the array size : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }

    int q;
    cout<<"Enter number of queries : ";
    cin>>q;

    cout<<"Enter the freqency number to count : ";
    while(q--)
    {
        int num;
        cin>>num;

        cout<<mp[num]<<" ";
    }
    return 0;
}*/


//Sum of elements of array
/*int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    
    cout<<sum;
    return 0;
}*/

/*int largestelement(int arr[],int n)
{
    int max=arr[0];

    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
}
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

    int max=largestelement(arr,n);
    cout<<"Largest elements in an array : "<<max<<endl;
    return 0;
}*/

/*int reversearray(int arr[],int n)
{
    int start=0;
    int end=n-1;

    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;
    }
}
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

    int reverse=reversearray(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}*/

/*int sumelement(int arr[],int n)
{
    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int res=sumelement(arr,n);

    cout<<"Sum : "<<res;
    return 0;
}*/

/*int twosumelement(int arr[],int n,int target)
{

    int found=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
        if(arr[i]+arr[j]==target)
        {
            cout<<"Element are : "<<arr[i]<<" "<<arr[j]<<endl;

            found=1;
        }
    }
    }
    return found;
}
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

    int target;
    cout<<"Enter the target : ";
    cin>>target;

    int result=twosumelement(arr,n,target);

    if(result==0)
    {
        cout<<"No pair found ! ";
    }
    return 0;
}*/


/*int main()
{
    int sz=5;
    int arr[]={1,2,3,4,5};

    for(int i=sz-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}*/


