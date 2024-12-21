#include<iostream>
using namespace std;
//reverse array function
void reverseArray(int arr[],int size){
	int temp;

	for(int i=0,j=size-1; i<j ; i++,j--){
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}
int main(){
  int arr[]={12,23,54,67,32,68,45};
  int size = sizeof(arr)/sizeof(int);

  //displaying original array 
  cout<<"Original Array : ";
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  
  //passing an array to reverse function
  reverseArray(arr,size);
  
  //displaying array after reverse it
  cout<<"\nReverse Array : ";
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }


  return 0;
}
