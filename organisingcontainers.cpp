//Constraints: 1<=q<=10, 1<=n<=100, 1<=container[i][j]<=10^9
//Time Complexity: O(n^2)
//Algorithm: The sort among different containers is only possible when capacity of container equals
//           the total number of balls of one type i.e suppose we have a container that has total k
//           balls.There are n type of balls(0 to n-1) in all. Now if the number of balls of one type 
//           is equal to k then sort can be done. If this condition is true for all containers and each 
//           type of balls then sort can be done(POSSIBLE) else its IMPOSSIBLE.Lets take an example.
//Example: Let n = 3 let container matrix be like 
//              ________________________________
//             | * *   |   0   |    1   |   2   |  (Type of balls)
//             |__*____|_______|________|_______|
//  (Container |    0  |  1    |  3     |   0   |
//   Number)   |_______|_______|________|_______|  
//             |    1  |  2    |  1     |   1   |
//             |_______|_______|________|_______|
//             |    2  |  1    |  0     |   2   |
//             |_______|_______|________|_______|

// Now container 0 contains total 1 + 3 + 0 = 4 balls          
//     container 1 contains total 2 + 1 + 1 = 4 balls
//     container 2 conatins total 1 + 0 + 2 = 3 balls
//  Now idea is that for each container to get sorted there should be exact number of balls of each type
//  i.e the number of balls in all types should match with capacities of containers
//   Total number of 0 balls = 1 + 2 + 1 = 4 balls
//   Total number of 1 balls = 3 + 1 + 0 = 4 balls
//   Total number of 2 balls = 0 + 1 + 2 = 3 balls
//  Thus for each container we have each type of balls in equal number such that they can be swiped
//  That is container 2 will have all balls of type 2
//          container 1 can have all balls of type 1 or type 0 and same is for container 0

#include <bits/stdc++.h>
using namespace std;
string organizingContainers(vector<vector<int>> container) {
    vector<int>A(container.size()); int w=0;
    vector<int>B(container.size());
    for(int i=0; i<container.size(); i++){
        for(int j=0; j<container.size(); j++){
            A[i]+=container[i][j];
            B[i]+=container[j][i];
        }
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    for(int i=0 ;i<A.size(); i++){
        if(A[i]!=B[i]){
            w=-1;
            break;
        } 
    }
    if(w==0){
        return "Possible";
    }
    else{ 
        return "Impossible";
    }
}
int main(int argc, char const *argv[])
{
    int n; int q; string ans=" "; 
    cin>>q>>n;
    while(q--){
        vector<vector<int>>A(n);
        for(int i=0; i<n; i++){
            A[i].resize(n);
            for(int j=0; j<n; j++){
                cin>>A[i][j];
            }
        }
            ans=organizingContainers(A);
            cout<<ans<<endl;
    }
    return 0;
}
