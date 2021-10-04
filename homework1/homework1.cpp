//
// Created by zyming on 2021/10/4.
//

/*
 * 设计算法求解𝑛!/𝑘!
(𝑛 > 𝑘,且均为整数)。
 */

#include "homework1.h"

int factorial_nk(int n,int k){
    if(n==k){
        return 1;
    }
    else return n*factorial_nk(n-1,k);
}


