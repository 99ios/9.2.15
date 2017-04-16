//
//  DestinationViewController.h
//  9.2.15 使Block逆传数据
//
//  Created by 李维佳 on 2017/4/4.
//  Copyright © 2017年 Liz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DestinationViewController : UIViewController
//声明一个名为PassDataBlock的block，无返回值，有一个NSString类型的参数
typedef void (^PassDataBlock)(NSString * dataText);
//供内部调用block
@property (copy) PassDataBlock block;
@property(nonatomic,copy)NSString *dataText;
@end
