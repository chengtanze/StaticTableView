//
//  InfoTableViewController.h
//  StaticTableView
//
//  Created by wangsl-iMac on 15/1/14.
//  Copyright (c) 2015年 chengtz-iMac. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol protocolPlayer <NSObject>

-(void)didCanclePlayer;
-(void)didSavePlayer;

@end

@interface InfoTableViewController : UITableViewController<protocolPlayer>

@end
