#include<iostream>
using namespace std;
int fisrtOcc(int arr[], int n, int key){
    int start=0;
    int end=n-1;
    int mid=start+(start-end)/2;
    int ans=-1;

    while(start<=end){
        if (arr[mid]==key)
        {
         ans=mid;
         end=mid-1;   
        }
        else if (key>arr[mid])//go right
        {
          start=mid+1;  
        }
        else if (key<arr[mid])//go left
        {
          end=mid-1;  
        }
        mid= start+(end-start)/2;//update mid
        
        
    }
    return ans;
}
//same as firstOcc only we have change name and condition of if as start=mid+1
int lastOcc(int arr[], int n, int key){
    int start=0;
    int end=n-1;
    int mid=start+(start-end)/2;
    int ans=-1;

    while(start<=end){
        if (arr[mid]==key)
        {
         ans=mid;
         start=mid+1;   
        }
        else if (key>arr[mid])//go right
        {
          start=mid+1;  
        }
        else if (key<arr[mid])//go left
        {
          end=mid-1;  
        }
        mid= start+(end-start)/2;
        
        
    }
    return ans;
}

    
int main(){
    int even[]={1,2,3,4,5};
    cout<<"first occurance of 3 is: "<<fisrtOcc(even, 5, 3)<<endl;
    cout<<"last occurance of 3 is: "<<lastOcc(even, 5, 3)<<endl;
    return 0;
    

}