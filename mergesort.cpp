//Merge Sort Algorithm (Implemented using Divide And Conquer technique)
//Time Complexity: O(nlog(n))

#include<bits/stdc++.h>
using namespace std;
void combine(vector<int>&A, int start,int mid, int end){
    vector<int>left;
    vector<int>right;
    int n1=mid-start+1; int n2=end-mid; int i=0,j=0;
    for(i=0; i<n1; i++){
        left.push_back(A[start+i]);
    }
    for(j=0; j<n2; j++){
        right.push_back(A[mid+1+j]);
    }
    int k=start; i=j=0;
    while(i<n1 && j<n2){
        if(left[i]<right[j]){
            A[k]=left[i]; i++;            // For descending order A[k]=right[j], j++;
        }
        else{
            A[k]=right[j]; j++;           // For descending order A[k]=left[i], i++;
        }
        k++;
    }
    while(i<n1){
        A[k]=left[i]; i++; k++;
    }
    while(j<n2){
        A[k]=right[j]; j++; k++;
    }

}
void mergesort(vector<int>&A,int start,int end){
    if(start>=end){
        return;
    }
    int mid = start+(end-start)/2;
    mergesort(A,start,mid);
    mergesort(A,mid+1,end);
    combine(A,start,mid,end);
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int>A(n);
    cout<<"Enter the elements in the vector"<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    mergesort(A,0,n-1);
    cout<<"The sorted vector is : ";
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}
