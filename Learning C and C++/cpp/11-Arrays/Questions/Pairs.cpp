#include<iostream>
using namespace std;

void Pair(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
       for (int j = 0; j < size; j++)
       {
            cout<<arr[i]<<", "<<arr[j]<<endl;
       } 
    }
}

int main(){
    int arr[]={10,20,30,40};
    int size=4;

    Pair(arr,size);

    return 0;
}