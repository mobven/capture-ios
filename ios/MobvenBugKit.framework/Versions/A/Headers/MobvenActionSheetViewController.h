//
//  MobvenActionSheetViewController.h
//  TestDemoFramework
//
//  Created by Ahmet Kazım Günay on 19/10/15.
//  Copyright © 2015 Ahmet Kazım Günay. All rights reserved.
//

#import "MobvenBugReportBaseViewController.h"
#import "MobvenBugReportEventModel.h"

@interface MobvenActionSheetViewController : UIViewController

@property (nonatomic, strong) UIImage *bgImage;

@property (nonatomic, copy) void (^mobven_actionsheetCompletion)(ReportType type);

@end
