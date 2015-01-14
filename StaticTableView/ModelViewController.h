//
//  ModelViewController.h
//  StaticTableView
//
//  Created by wangsl-iMac on 15/1/14.
//  Copyright (c) 2015年 chengtz-iMac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "InfoTableViewController.h"
@interface ModelViewController : UIViewController
- (IBAction)cancleBtn:(id)sender;
@property(nonatomic, weak)id<protocolPlayer> delegate;
@end
