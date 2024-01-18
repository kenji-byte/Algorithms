#include<iostream>
using namespace std;

void bubbleSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Array Sorted By Bubble Sort"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int arr[],int size){
    for(int i=0;i<size;i++){
        int temp=arr[i];
        int j=i-1;
        while(temp<arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    cout<<"Array Sorted By Insertion Sort"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"Array Sorted By Selection Sort"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int size;
    cout<<"Enter Your Array Size:";
    cin>>size;
	int arr[size];
    for(int i=0;i<size;i++){
    cout<<"Enter Your Array's "<<i+1<<" number input:";
    cin>>arr[i];
    }
    cout<<"Your Input Array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    bubbleSort(arr,size);
    insertionSort(arr,size);
    selectionSort(arr,size);

	return 0;
}