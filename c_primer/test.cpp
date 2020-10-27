#include<iostream>

using namespace std;

#define max 10

int main()
{
    #ifdef max
    #pragma message("undefing marco max" __FILE__)
    #undef max
    #endif // max
    
    //cout<<max<<endl;
    return 0;
} // namespace std;

