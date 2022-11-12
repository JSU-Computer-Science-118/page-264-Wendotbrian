#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int num;
  
cin >> num;
if(num>=1&&num<=1000)
  if(num==1)
  { cout << "2 3 5 7 13 17 19 23 29 31";}
  else
  {
if(!(num%2==0||num%3==0||num%5==0||num%7==0||num%11==0||num%13==0||num%17==0||num%19==0||num%23==0||num%29==0||num%31==0))
{ cout << "Number " << num << " is prime!";}
  else
  {if(num!=2&&num%2==0)
  cout << "2 ";
if(num!=3&&num%3==0)
  cout << "3 ";
if(num!=5&&num%5==0)
  cout << "5 ";
if(num!=7&&num%7==0)
  cout << "7 ";
if(num!=11&&num%11==0)
  cout << "11 ";
if(num!=13&&num%13==0)
  cout << "13 ";
if(num!=17&&num%17==0)
  cout << "17 ";
if(num!=19&&num%19==0)
  cout << "19 ";
if(num!=23&&num%23==0)
  cout << "23 ";
if(num!=29&&num%29==0)
  cout << "29 ";
if(num!=31&&num%31==0)
  cout << "31 ";}
if (num==2)
    cout << "Number " << num << " is prime!";
if (num==3)
    cout << "Number " << num << " is prime!";
if (num==5)
    cout << "Number " << num << " is prime!";
if (num==7)
    cout << "Number " << num << " is prime!";
if (num==11)
    cout << "Number " << num << " is prime!";
if (num==13)
    cout << "Number " << num << " is prime!";
if (num==17)
    cout << "Number " << num << " is prime!";
if (num==19)
    cout << "Number " << num << " is prime!";
if (num==23)
    cout << "Number " << num << " is prime!";
if (num==29)
    cout << "Number " << num << " is prime!";
if (num==31)
    cout << "Number " << num << " is prime!";
  }
  return 0;
}
