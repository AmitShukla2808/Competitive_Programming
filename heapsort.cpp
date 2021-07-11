// Heap Sort Algorithm , Time Complexity : O(nlogn)
//  Let us take an example how it works. (All indexing is level based (go horizontally))
//  Step 1 : Build a heap depending upon sorting you want. Let us take an array A = {4,10,3,5,1}.
//  We will build a heap for it. So originally it we can look at this array as
//                      4
//                    /   \
//                   10    3
//                  /  \ 
//                 5    1 
// Now for a heap the condition is that the parent node must have a greater value than its children
// So after building a heap it would look like :  {10,5,3,4,1}
//                                      10
//                                    /    \
//                                   5      3
//                                  / \
//                                 4   1
// Once the heap is created, now we can apply heapify on it. We can see that while creating heap
// automatically the algorithm shifted the highest element to top or 0th index. Now we can swap the first 
// and the last element and then again apply heapify on the array of size len-1 cause now the biggest 
// element is in its sorted order and thus in each iteration we find the biggest number left in len-1 sized 
// array starting from 0 upto len-1 where len everytime decreases by 1 in each iteration. So len value
// goes from +5 then 4 then 3 then 2 then 1 then 0. And thus the array gets sorted.
// The sorted array looks like : {1,3,4,5,10}
//                                          1
//                                        /   \
//                                       3     4
//                                      / \     
//                                     5   10

#include<bits/stdc++.h> 
using namespace std;
void heapify(vector<int> &A,int n, int i){
    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;
    if(l<n && A[l]>A[largest]){           // for descending order just reverse sign between A[l]
        largest = l;                      // and A[largest] and A[r] 
    }
    if(r<n && A[r]>A[largest]){
        largest = r;
    }
    if(largest!=i){
        swap(A[i],A[largest]);
        heapify(A,n,largest);
    }
}
void heapsort(vector<int> &A){
    int len = A.size();
    // creating heap
    for(int i=len/2-1; i>=0; i--){
        heapify(A,len,i);
    }
    // sorting heap
    for(int i=0; i<A.size(); i++){
        swap(A[0],A[len-1]);
        heapify(A,len-1,0);
        len-=1;
    }
}
void display(vector<int>A){
    cout<<"The sorted order is : ";
    for(int i=0; i<A.size(); i++){
        cout<<A[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    int n;
    cout<<"Enter the number of elements\n";
    cin>>n;
    vector<int>A(n);
    cout<<"Enter the elements in the vector\n";
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    heapsort(A);
    display(A);
    return 0;
}