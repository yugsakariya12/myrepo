#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        // Your implementation here
        int sum=0;int temp=0;int no=n;
       while(temp!=n||temp!=1){
          
          
           while(no!=0){
               sum=no%10;
               no=no/10;
               temp+=sum*sum;
           }
       } 
       return temp==1?true:false;
    }
};

int main() {
    Solution obj;

    int n = 4;   // Test case

    if (obj.isHappy(n))
        cout << "Happy Number";
    else
        cout << "Not a Happy Number";

    return 0;
}