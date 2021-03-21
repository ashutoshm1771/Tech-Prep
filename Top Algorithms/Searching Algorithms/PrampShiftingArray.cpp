// Author : Ashutosh Mishra

#include <iostream>
#include <vector>

using namespace std;

/* min element 
int l=0,r=ar.size();
while(l<=r)
{
  int m=(l+r)/2;
  if(l==r)return l;
  if(a[m]<a[r])r=m;
  else l=m+1;
}
return -1; // 
*/

/*
  l=0,r=ar.size();
  int bin(vec a,int l,int r,int num){ --> O(logN) --> O(logN) --> O(1) space
    
    while(l<=r){
      m=(r+l)/2;
      if(ar[m]==num)return mid;
      if(ar[m]>a[l]){ // left sorted
        if(a[l]<=num<=a[mid])
            return bin(a,l,mid,num); // r=mid;
         else
            return bin(a,mid+1,r,num); // l=mid+1;
      }
      else{ // right sorted
        if(a[mid+1]<=num<=a[r])
            return bin(a,mid+1,r,num); // l=mid+1;
      }
    }
    return -1;
  }
*/
int shiftedArrSearch( const vector<int>& shiftArr, int num ) 
{
  // find the minimum O(logn)
  // 9 12 17 2 4 5
  // num = 12
  // if num==a[0] return 0;
  // if num > a[0]
  //      binsearch(num) --> 0 and index(min)-1
  // else binsearch(num) --> index(min) and last index 
             m   
  // 9 1  2  3  4  5  6 7
  // 9 12 17 2  4  5  6 7
  // 9 12 17 18 19 20 6 7 ///    2,   6,   17
  // s        m        e  
  
  /*
    
  */
}

int main() {
  return 0;
}
