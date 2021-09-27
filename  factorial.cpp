//
// Created by zyming on 2021/9/27.
//

#include " factorial.h"


int factorial(int n){
    if(n==0){
        return 1;
    }
    else return n*factorial(n-1);
}
