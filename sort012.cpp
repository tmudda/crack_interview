/***
Write a program to sort 0s,1s and 2s in O(n) time without using sorting techniques.

Given an array arr[] consisting of only 0s, 1s, and 2s. The task is to sort the array, i.e., put all 0s first, then all 1s and all 2s in last.

Input: arr[] = {0, 1, 2, 0, 1, 2}
Output: {0, 0, 1, 1, 2, 2}

Input: arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1}
Output: {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2}
**/

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int j=0,k=0,m=0;
   unordered_map<int,int> myMap;
   for(int i = 0; i < n; i++)
   {
      myMap[arr[i]]++;
   }
   m = myMap[0];
   while(k < m)
   {
      arr[j++] = 0;
      k++;
   }
   k=0;
   m=myMap[1];
   while(k < m)
   {
      arr[j++] = 1;
      k++;
   }
   k=0;
   m=myMap[2];
   while(k < m)
   {
      arr[j++] = 2;
      k++;
   }
}

int main()
{
    int arr[] = { 0, 1, 2, 0, 1, 2 };
    sort012(arr);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}
