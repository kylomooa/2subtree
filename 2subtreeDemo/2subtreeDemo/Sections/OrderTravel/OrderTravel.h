//
//  OrderTravel.h
//  2subtreeDemo
//
//  Created by maoqiang on 2020/3/26.
//  Copyright © 2020 maoqiang. All rights reserved.
//  二叉树遍历Demo
//

#ifndef OrderTravel_h
#define OrderTravel_h

#include <stdio.h>

struct BiTree{
    char data[100];
    struct BiTree *left;
    struct BiTree *right;
};

/**先序遍历  根左右**/
void PreOrderTravel(struct BiTree *T);
/**中序遍历 左根右**/
void InOrderTravel(struct BiTree *T);
/**后序遍历 左右根**/
void TailOrderTravel(struct BiTree *T);

#endif /* OrderTravel_h */
