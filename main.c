//
//  main.c
//  function4
//
//  Created by Eun Jae Lee on 22/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//
//  argument, no return value

#include <stdio.h>
void add(int,int);


int main() {

    int a,b;
    printf("Enter two numbers: \n");
    scanf("%d%d", &a,&b);
    
    add(a, b);
    
    getchar();
    
}

void add(int a, int b) {
    int sum;
    sum = a+b;
    printf("Addition is %d \n", sum);
    
}
