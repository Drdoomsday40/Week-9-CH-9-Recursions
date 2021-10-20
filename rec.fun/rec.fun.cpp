// FILE:            rec.fun.cpp
// Name:            Lucien Maurice
// Email:           luciencmaurice@gmail.com
//

#include <iostream> // Provides ostream class
#include <string> // Provides String class
//#include <cstdlib>

using namespace std;

void triangle(ostream& outs, unsigned int m, unsigned int n) {
    if (m <= n) {
        for (int i = 0; i < m; i++)
            outs << "*";
        outs << endl;
        triangle(outs, m + 1, n);
        for (int i = 0; i < m; i++)
            outs << "*";
        outs << endl;
    }
}

void numbers(ostream& outs, const string& prefix, unsigned int levels) {
    if (levels == 0) {
        outs << prefix << endl;
    }
    else {
        for (char i = '1'; i <= '9'; i++) {
            string s = (prefix + i);
            if (levels > 1)
                s += '.';
            numbers(outs, s, levels - 1);
        }
    }
}

bool bears(int n) {
    if (n == 42)
        return true;
    else if (n < 42)
        return false;
    else if ((n % 2 == 0) && bears(n / 2))
        return true;
    else if ((n % 5 == 0) && bears(n - 42))
        return true;
    else {
        int product = ((n % 100) / 10) * (n % 10);
        if (product != 0 && (n % 3 == 0 || n % 4 == 0) && bears(n - product))
            return true;
    }
    return false;
}


int main(int argc, const char* argv[]) {
    triangle(cout, 1, 5);
    cout << endl;
    string s = "COUNTDOWN ";
    numbers(cout, s, 2);
    cout << "\nbears(250) is " << (bears(250) ? "true" : "false") << endl;
    cout << "bears(42) is " << (bears(42) ? "true" : "false") << endl;
    cout << "bears(84) is " << (bears(84) ? "true" : "false") << endl;
    cout << "bears(53) is " << (bears(53) ? "true" : "false") << endl;
    cout << "bears(41) is " << (bears(41) ? "true" : "false") << endl;

    return 0;
}

/*


*
**
***
****
*****
*****
****
***
**
*

COUNTDOWN 1.1
COUNTDOWN 1.2
COUNTDOWN 1.3
COUNTDOWN 1.4
COUNTDOWN 1.5
COUNTDOWN 1.6
COUNTDOWN 1.7
COUNTDOWN 1.8
COUNTDOWN 1.9
COUNTDOWN 2.1
COUNTDOWN 2.2
COUNTDOWN 2.3
COUNTDOWN 2.4
COUNTDOWN 2.5
COUNTDOWN 2.6
COUNTDOWN 2.7
COUNTDOWN 2.8
COUNTDOWN 2.9
COUNTDOWN 3.1
COUNTDOWN 3.2
COUNTDOWN 3.3
COUNTDOWN 3.4
COUNTDOWN 3.5
COUNTDOWN 3.6
COUNTDOWN 3.7
COUNTDOWN 3.8
COUNTDOWN 3.9
COUNTDOWN 4.1
COUNTDOWN 4.2
COUNTDOWN 4.3
COUNTDOWN 4.4
COUNTDOWN 4.5
COUNTDOWN 4.6
COUNTDOWN 4.7
COUNTDOWN 4.8
COUNTDOWN 4.9
COUNTDOWN 5.1
COUNTDOWN 5.2
COUNTDOWN 5.3
COUNTDOWN 5.4
COUNTDOWN 5.5
COUNTDOWN 5.6
COUNTDOWN 5.7
COUNTDOWN 5.8
COUNTDOWN 5.9
COUNTDOWN 6.1
COUNTDOWN 6.2
COUNTDOWN 6.3
COUNTDOWN 6.4
COUNTDOWN 6.5
COUNTDOWN 6.6
COUNTDOWN 6.7
COUNTDOWN 6.8
COUNTDOWN 6.9
COUNTDOWN 7.1
COUNTDOWN 7.2
COUNTDOWN 7.3
COUNTDOWN 7.4
COUNTDOWN 7.5
COUNTDOWN 7.6
COUNTDOWN 7.7
COUNTDOWN 7.8
COUNTDOWN 7.9
COUNTDOWN 8.1
COUNTDOWN 8.2
COUNTDOWN 8.3
COUNTDOWN 8.4
COUNTDOWN 8.5
COUNTDOWN 8.6
COUNTDOWN 8.7
COUNTDOWN 8.8
COUNTDOWN 8.9
COUNTDOWN 9.1
COUNTDOWN 9.2
COUNTDOWN 9.3
COUNTDOWN 9.4
COUNTDOWN 9.5
COUNTDOWN 9.6
COUNTDOWN 9.7
COUNTDOWN 9.8
COUNTDOWN 9.9

bears(250) is true
bears(42) is true
bears(84) is true
bears(53) is false
bears(41) is false

C:\Users\drdoo\Desktop\Current Classes\C++ Data Structures and 
Algorithms\Week 9 (10_26) CH 9 Recursions\rec.fun\Debug\rec.fun.exe 
(process 5744) exited with code 0.
 */
