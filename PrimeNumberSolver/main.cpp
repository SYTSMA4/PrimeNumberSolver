//
//  Created by Sam Sytsma on 9/21/22.
//

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int x = 1000;
    
    cout << "Please input a max value of 1000: ";
    cin >> x;
    
    for ( int m=2; m<x; m++)         //goes through numbers 2-1000
    for ( int n=2; n*n<=m; n++)      //tests all numbers for each previous numbers
    {
        if ( m % n == 0)
            break;
        else if ( n+1 > sqrt (m)) {
            cout << m << endl;
        }
    }
    
    return 0;
}
