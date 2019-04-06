//
//  main.c
//  coins
//
//  Created by Ang Li on 3/19/19.
//  Copyright © 2019 Ang Li. All rights reserved.
//

#include <stdio.h>


#define maxn 10001
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

