#include<bits/stdc++.h>
using namespace std;
bool comp(int a,int b)
    {
        return __builtin_popcount(a)> __builtin_popcount(b);
    }
    void sortBySetBitCount(int arr[], int n)
    {
        stable_sort(arr,arr+n,comp);
    }
int main()
{
    int arr[]={5, 2, 3, 9, 4, 6, 7, 15, 32};
    int size=9;
    sortBySetBitCount(arr,size);

    for(auto i: arr)
    cout<<i<<" ";
}