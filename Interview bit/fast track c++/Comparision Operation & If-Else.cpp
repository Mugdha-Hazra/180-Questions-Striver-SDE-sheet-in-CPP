#include<iostream>

using namespace std;

int main()  {
    int num;
    cin>>num;
   if (num >= 90) cout<<"A\n";
else if (num >= 80)cout<<"B\n";
else if( num >= 70)cout<<"C\n";
else if( num >= 60)cout<<"D\n";
else if (num >= 50)cout<<"E\n";
else cout<<"F\n";
    
    return 0;
}
