//
//  OrderTravel.c
//  2subtreeDemo
//
//  Created by maoqiang on 2020/3/26.
//  Copyright © 2020 maoqiang. All rights reserved.
//

#include "OrderTravel.h"



/**先序遍历  根左右**/
void PreOrderTravel(struct BiTree *T)
{
    if(T==NULL)
        return;
    printf("%s ",T->data);
    PreOrderTravel(T->left);
    PreOrderTravel(T->right);
}
 
/**中序遍历 左根右**/
void InOrderTravel(struct BiTree *T)
{
    if(T==NULL)
        return;
    InOrderTravel(T->left);
    printf("%s ",T->data);
    InOrderTravel(T->right);
}
 
/**后序遍历 左右根**/
void TailOrderTravel(struct BiTree *T)
{
    if(T==NULL)
        return;
    TailOrderTravel(T->left);
    TailOrderTravel(T->right);
    printf("%s ",T->data);
}

