//
// Created by ydx00 on 2017/7/25.
// 2.1.3 Search in Rotated Sorted Array
//
#include <iostream>
using namespace std;
class SearchClazz{
public:
    int search(int A[],int n,int target){
        int first = 0, last = n;
        while(first != last){
            int mid = (first + last) / 2;
            if(A[mid] == target){
                return mid;
            }
            if(A[first] < A[mid]){
                if(A[first] <= target && target < A[mid]){
                    last = mid;
                }
                else{
                    first = mid + 1;
                }
            }
            else{
                if(A[mid] < target && target <= A[last-1]){
                    first = mid + 1;
                }
                else{
                    last = mid;
                }
            }
        }
        return -1;
    }
};

