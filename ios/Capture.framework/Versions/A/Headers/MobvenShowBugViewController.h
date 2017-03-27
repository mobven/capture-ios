//
//  MobvenShowBugViewController.h
//  TestDemoFramework
//
//  Created by Ahmet Kazim Günay on 30/10/15.
//  Copyright © 2015 Ahmet Kazım Günay. All rights reserved.
//

#import "MobvenBugReportBaseViewController.h"

@interface MobvenShowBugViewController : MobvenBugReportBaseViewController

- (instancetype)viewControllerAtIndex:(NSUInteger)index
                            bugsCount:(NSInteger)bugsCount
                              bugInfo:(NSDictionary *)bugInfo;

@property (nonatomic, assign) NSInteger pageIndex;

@property (nonatomic, strong) UIPageViewController *pageViewController;
@property (nonatomic, strong) NSDictionary *currentBug;

@end
