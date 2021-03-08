/*
 * @Author       : joeyxin
 * @Date         : 2021-03-08 21:26:29
 * @LastEditTime : 2021-03-08 21:44:13
 * @FilePath     : \Euclidean_Algo.cpp
 * @Description  : 欧几里得算法==辗转相除法 对于两个数x，y，假定x大于y 则x对y取余，x=y,y=r,循环计算直到余数r=0，则该次运算的除数，即y是最大公约数
 * 最大公约数：greatest common divisor
 */

#include<iostream>

using namespace std;

int gcd(int x,int y)
{
    int r=x%y;
    while(r!=0)
    {
        x=y;
        y=r;
        r=x%y;
    }

    return y;
}

int main()
{
    int x,y;
    int r;
    cout<<"input two numbers\n";
    cin>>x>>y;
    r=gcd(x,y);
    cout<<r;

    return 0;
}




