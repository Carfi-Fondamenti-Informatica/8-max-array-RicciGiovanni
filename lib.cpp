#include <iostream>
#include "lib.h"
using namespace std;
double vett( ) {

    int i,n, a[n], max, p;
    cin>>n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    max = a[0];
   
    for (i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
           
        }
    }
    return max;
}

