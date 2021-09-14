/* Problem Statement
You are given an array of integers ARR[] of size N consisting of zeros and ones. You have to select a subset and flip bits of that subset. You have to return the count of maximum one’s that you can obtain by flipping chosen sub-array at most once.
A flip operation is one in which you turn 1 into 0 and 0 into 1.
For Example:
If you are given an array {1, 1, 0, 0, 1} then you will have to return the count of maximum one’s you can obtain by flipping anyone chosen sub-array at most once, so here you will clearly choose sub-array from the index 2 to 3 and then flip it's bits. So, the final array comes out to be {1, 1, 1, 1, 1} which contains five ones and so you will return 5.
Input Format :
The first line of input consists of a single integer T denoting the total number of the test case.

The first line of each test case contains an integer N, which represents the array's size.

The second line of each test case contains N space-separated integers representing the array elements accordingly.
Output Format :
For each test case, return a single integer representing the maximum number of 1's you can have in the array after at most one flip operation.
Note:
You don’t have to print anything; it has already been taken care of. Just implement the given function. 
Constraints:
1 <= T = 100
1 <= N <= 10^4
0 <= ARR[i] <= 1

Time Limit: 1 sec
Sample Input 1 :
3
5
1 0 0 1 0
4
1 1 1 0
5
0 0 1 0 0
Sample Output 1 :
4
4
4
Explanation For Sample Input 1:
For the first test case:
We can perform a flip operation in the range [1,2]. After the flip operation, the array is: 1 1 1 1 0
and so the answer will be 4

Similarly, in the second test case :
We can perform a flip operation in the range [3,3]. After the flip operation, the array is: 1 1 1 1 
and so the answer will be 4.

Finally for the third test case :
We can perform a flip operation in the range [0,4] 
After the flip operation, the array is: 1 1 0 1 1 
and so the answer will be 4
Sample Input 2 :
3
5
0 0 0 0 0
5
1 1 1 1 1
8
1 0 1 0 1 0 1 0
Sample Output 2 :
5
5
5 */


int flipBits(int* arr, int n) 
{
    int count0=0,maxcount=0,count1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count0++;
        }
        else{
            count1++;
            count0--;
        }
        if(count0 > maxcount){
            maxcount=count0;
        }
        if(count0 < 0){
            count0=0;
        }
    }
    return maxcount+count1;
}
