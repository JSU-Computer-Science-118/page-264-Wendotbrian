# Page 264 - Prime Numbers

First 11 prime integers.

## Program Description:

The first 11 prime integers are `2, 3, 5, 7, 11, 13, 17, 19, 23, 29, and 31`. 
A positive integer between 1 and 1000 (inclusive), other than the first 11 prime integers, 
is prime if it is not divisible by **2, 3, 5, 7, 11, 13, 17, 19, 23, 29, and 31**. 
Write a program that takes positive integer between 1 and 1000 (inclusive) and that outputs whether the number is prime. 
If the number is out of bounds output `out of bound` but if the number is not prime, 
then output all the numbers, from the list of the first 11 prime integers, which divide the number.


```
Input: 2
Output: Number 2 is prime!

Input: 6
Output: 2 3

Input: 210
Output: 2 3 5 7

Input: 47
Output: Number 47 is prime!
```

## How to Submit:
1. Once you are in your private `repository`
2. Open up the `main.cpp` file
3. Click on the :pencil2: icon to edit the file and then write your program.
4. Scroll down to `Commit Changes` and give your commit a title.
5. Finally, Click `Commit Changes` to submit your code.

```
Every time you make a commit, your code gets graded based on the test cases. 
You are allowed to make as many commits as you like.
```

## Things To include:
- Make sure to include the following comment above your code.
```cpp
// Full Name J00123456 Date Done
```
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int num;
  
cin >> num;
if(num>=1&&num<=1000){
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
    cout << "Number " << num << " is prime!";}
  return 0;
}
