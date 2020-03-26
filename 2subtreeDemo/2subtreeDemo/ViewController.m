//
//  ViewController.m
//  2subtreeDemo
//
//  Created by maoqiang on 2020/3/26.
//  Copyright © 2020 maoqiang. All rights reserved.
//

#import "ViewController.h"
#import "OrderTravel.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    /**
                    root
                   /   \
                  /     \
               left     right
               /  \      /   \
              /    \    /     \
           left1 right1 left2 right2
     */
    
    struct BiTree leftTree2 = {"left2",nil,nil};
    struct BiTree rightTree2 = {"right2",nil,nil};
    
    struct BiTree leftTree1 = {"left1",nil,nil};
    struct BiTree rightTree1 = {"right1",nil,nil};
    
    struct BiTree leftTree = {"left",&leftTree1,&rightTree1};
    struct BiTree rightTree = {"right",&leftTree2,&rightTree2};
    
    struct BiTree rootTree = {"root",&leftTree,&rightTree};
    
    PreOrderTravel(&rootTree);
//    InOrderTravel(&rootTree);
//    TailOrderTravel(&rootTree);
    
}


@end
