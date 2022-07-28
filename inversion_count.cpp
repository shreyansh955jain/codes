#include <iostream> 
#include <vector>
#include <algorithm> 
using namespace std; 
 
long long merge(vector<int>&arr, vector<int>&temp, int start, int mid, int end){
    int i = start;
    int j = mid+1;
    
    int k = start;
    long long invcount = 0;
    while(i<=mid && j<=end){
        if(arr[j] >= arr[i]){
            temp[k] = arr[i];
            k++;
            i++;
        }
        else{
            invcount += mid-i+1;
            temp[k] = arr[j];
            k++;
            j++;
        }
    }
    while(i <= mid){
        temp[k]=arr[i];
        k++;
        i++;
    }
    while(j <= end){
        temp[k] = arr[j];
        k++;
        j++;
    }
    for(int i=start; i<=end; i++){
        arr[i] = temp[i];
    }
    return invcount;
    
}
 
long long mergeSort(vector<int>&arr, vector<int>&temp, int start, int end){
    long long invcount = 0;
    if(start < end){
        int mid = start + (end-start)/2;
        // this is we used to get all the value in the range of integer,
        // otherwise chance of getting a unpredictable number likea negative number!!!.
        invcount += mergeSort(arr, temp, start, mid);
        invcount += mergeSort(arr, temp, mid+1, end);    
        invcount += merge(arr, temp, start, mid, end);
    }
    
    return invcount%1000000007;
}
 
int solve(vector<int> &arr){
    vector<int> temp(arr.size());
    long long ans = mergeSort(arr, temp, 0, arr.size()-1);
    return ans%1000000007;
}
 
 
int main(){
//  Given an array of integers A.
//If i < j and A[i] > A[j] then the pair (i, j) is called an inversion of A.
//Find the total number of inversions of A modulo (10^9 + 7).
//The sequence 12, 14, 11, 13, 15 has three inversions (12, 11), (14, 11), (14, 13).
    
    vector<int> data{12, 14, 11, 13, 15};
    cout<<solve(data)<<endl;
    
    return 0;
}