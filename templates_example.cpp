// function template
#include <iostream>
using namespace std;

template <class T> 
T GetMax (T a, T b) {
  T result;
  result = (a>b)? a : b;
  return (result);
}

template <class T, class U> 
T addition (T a, U b) {
  T result;
  result = a+b;
  return (result);
}

int main () {
  int i=5, j=6, k;
  long l=10, m=5, n;
  float o=15.6, p=12.7, q;

  /* Run GetMax with int, long, float to show the <template T> works */
  cout << "Run GetMax with int, long, float to show the <template T> works:" << endl;

  k=GetMax(i,j);
  n=GetMax(l,m);
  q=GetMax(o,p);
  cout << "int GetMax(" << i << "," << j << ") == " << k << endl;
  cout << "long GetMax(" << l << "," << m << ") == " << n << endl;
  cout << "float GetMax(" << o << "," << p << ") == " << q << endl << endl;
  
  /* Run addition() that takes the same mixed parameters int/long/float and returns to int/long/float */
  cout << "Run addition() that takes the same mixed parameters int/long/float and returns to int/long/float:" << endl;
  k=addition(p, i);
  n=addition(p, i);
  q=addition(p, i);
  cout << "int addition(" << p << "," << i << ") == " << k << endl;
  cout << "long addition(" << p << "," << i << ") == " << n << endl;  
  cout << "float addition(" << p << "," << i << ") == " << q << endl;
  
  return 0;
}
