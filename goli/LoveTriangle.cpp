#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

long long base9(long long n){
if(n<9)
return n;
else{
return(n%9 + 10*base9(n/9));
}
}

int main()
{
string str;
long long n;
while(getline(cin,str)){
n = strtoll(str.c_str(),NULL, 0);
cout<<base9(n)<<"\n";
}
return 0;
}
