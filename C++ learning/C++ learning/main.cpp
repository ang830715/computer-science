//
//  main.cpp
//  C++ learning
//
//  Created by Ang Li on 3/18/19.
//  Copyright © 2019 Ang Li. All rights reserved.
//

#include<cstdio>
#define maxn 100001
long long dp[maxn];
int main(void)
{
    int i,j,num[] = {5, 10, 20, 50, 100};
    for(i = 0; i < maxn; ++i)
        dp[i] = 1;
    for(i = 0; i < 5; ++i)
        for(j = num[i]; j < maxn; ++j)
            dp[j] += dp[j - num[i]];
    printf("%lld", dp[maxn - 1]);
    return 0;
}



//#include<iostream>
//using namespace std;
//int main()
//{
//    int a=0,s=0;
//    while (cin >> a)
//        s += a;
//    cout << s << endl;
//    return 0;
//}

//#include<iostream>
//using namespace std;
//int a = 0, b = 0;
//int main() {
//if (cin >> a)
//{
//    int n = 1;
//    while (cin >> b)
//    {
//        if (b == a)
//            ++n;
//        else
//        {
//            cout << a << ":" << n << endl;
//            a = b;
//            n = 1;
//        }
//    }
//    cout << a << ":"<<":" << n << endl;
//}
//    return 0; }
