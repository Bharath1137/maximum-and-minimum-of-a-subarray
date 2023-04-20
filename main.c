#include <bits/stdc++.h>
using namespace std;
int getMaxSum(int *arr, int n) {
   if (n < 2) {
      return -1;
   }
   int result = arr[0] + arr[1];
   for (int i = 1; i + 1 < n; ++i) {
      result = min(result, (arr[i] + arr[i + 1]));
   }
   return result;
}
int main() {
   int arr[] = {10, 5, 15, 7, 2, 1, 3};
   int n = sizeof(arr) / sizeof(arr[0]);
   cout << "Maximum sum = " << getMaxSum(arr, n) << endl;
   return 0;
}
