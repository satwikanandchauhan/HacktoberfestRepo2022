#include <iostream>
using namespace std;
int pivot(int arr[],int n){
    int s=0;
    int e=n-1;
     int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s+=1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
        return e;
    }
}

int main(){
      int arr[5]={7,9,1,2,3};
      cout<<"the pivot element is at index  "<<pivot(arr,5);

    return 0;
}