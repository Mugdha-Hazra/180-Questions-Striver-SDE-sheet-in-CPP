/*
#include<iostream>
using namespace std;
*/

void reverseArray(int a[], int n){
    int k=0,j=n-1;
    for(int i=0;i<n/2;i++)
    swap(a[k++],a[j--]);

    
}


/*
int main()  {
    int N;
    cin>>N;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin>>arr[i];
    }
    reverseArray(arr, N);
    for(int i = 0; i < N; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
*/
