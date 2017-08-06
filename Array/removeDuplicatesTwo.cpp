//
// Created by ydx00 on 2017/7/25.
// 2.1.2 Remove Duplicates from Sorted Array II
//
#include <iostream>
using namespace std;

class RemoveDuplicatesTwo{
public:
    int removeDuplicatesTwo(int A[],int n){
        if(n <= 2){
            return n;
        }
        int index = 2;
        for(int i = 2; i < n; i++){
            if(A[i] != A[index - 2]){
                A[index] = A[i];
                index ++;
            }
        }
        return index;
    }
};

//int main(){
//    RemoveDuplicatesTwo* solution = new RemoveDuplicatesTwo;
//    int A[] = {1,1,2,5,7,7,8,8,8,9,9,10};
//    int res = solution->removeDuplicatesTwo(A,12);
//    cout << res << endl;
//}