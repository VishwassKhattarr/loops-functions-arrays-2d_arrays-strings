#include<iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    //write your code here
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
     while(j>=0 && arr[j]>key){
         arr[j+1]=arr[j];
         arr[j]=key;



                j--;
     }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}