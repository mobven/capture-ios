//
//  MobvenCorePageViewController.h
//  TestDemoFramework
//
//  Created by Ahmet Kazim Günay on 30/10/15.
//  Copyright © 2015 Ahmet Kazım Günay. All rights reserved.
//

#import "MobvenBugReportBaseViewController.h"

@interface MobvenCorePageViewController : MobvenBugReportBaseViewController

- (instancetype)initWithBugs:(NSArray *)bugs;

@property (nonatomic, copy) void (^mobven_dismissCompletion)(void);

@end
