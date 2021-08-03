#include <iostream>
#include <cstring>
#include "Eratosthenes.hpp"
using namespace std;

// using Sieve of Eratosthenes algorithm
void Eratosthenes(int n) 
{
// Create a boolean array 
// all entries it as true. A value in arr[i] will
// finally be false if i is Not a prime, else true.

bool arr[n+1];
  memset(arr,true,sizeof(arr));
  for (int p=2; p*p<=n;p++ ) {
	    // If arr[p] is not changed, then it is a prime
	  if (arr[p]==true) {
		  // Update all multiples of p
		  for (int i = p*2;i<=n;i +=p) 
			  arr[i] = false;
	  }
  }
   // Print all prime numbers
  for ( int p=2; p<=n;p++) 
	  if (arr[p]) 
		  cout<<p<<" ";
}


