//
// Created by ydx00 on 2017/7/25.
// 2.1.1 Remove Duplicates from Sorted Array
//

#include <iostream>
using namespace std;

class RemoveDuplicates {
public:
    int removeDuplicates(int A[], int n){
        if(n == 0) return 0;
        int index = 0;
        for(int i = 1; i < n; i ++){
            if(A[index] != A[i]){
                index ++;
                A[index] = A[i];
            }
        }
        return index + 1;
    }
};

//int main(){
//    RemoveDuplicates* solution = new RemoveDuplicates;
//    int A[] = {1,1,2,5,7,7,8,8,8,9,9,10};
//    int res = solution->removeDuplicates(A,12);
//    cout << res << endl;
//}