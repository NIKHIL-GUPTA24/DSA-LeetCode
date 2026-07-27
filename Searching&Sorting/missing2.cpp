#include <iostream>
#include <vector>
using namespace std;

int findMissing(vector<int> arr) {
    int s=0, e=arr.size()-1;
    while (s<=e) {
        int mid =s+(e-s)/2;
        if (arr[mid] == mid+1) {
            s=mid+1;  
        }
        else {
            e=mid-1; 
        }
    }
    return s+1;
}
int main() {
    vector<int>arr = {1, 2, 3, 5, 6}; 
    int missing = findMissing(arr);
    cout << "Missing number is: " << missing << endl;
    return 0;
}
