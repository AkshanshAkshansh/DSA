#include <iostream>
#include <vector>
using namespace std;

int main(){    
    vector<int> arr{1,2,3,4,5};
    
    for(int i=1;i<arr.size();i++){
        swap(arr[i-1],arr[i]);
    }

    for(auto val:arr){
        cout << val << " ";
    }
    
    return 0;
}