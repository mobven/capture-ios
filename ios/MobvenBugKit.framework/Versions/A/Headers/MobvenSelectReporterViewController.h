//
//  MobvenSelectReporterViewController.h
//  TestDemoFramework
//
//  Created by Ahmet Kazım Günay on 19/10/15.
//  Copyright © 2015 Ahmet Kazım Günay. All rights reserved.
//

#import "MobvenBugReportBaseViewController.h"

@interface MobvenSelectReporterViewController : MobvenBugReportBaseViewController

@property (nonatomic, copy) void (^mobven_selectedReporterBlock)(NSDictionary *user);

@end
