// Same behaviour as that of float data type.
#include<iostream>
using namespace std;
int main(){
    char ch = 97.92; // Here the integer part is only considered and hence 97 is the integer part which is the ASCII value of character a.
    cout<<ch<<endl;
    return 0;
}