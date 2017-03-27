//
//  MobvenBugReportEventHandler.h
//  TestDemoFramework
//
//  Created by Ahmet Kazim Günay on 27/10/15.
//  Copyright © 2015 Ahmet Kazım Günay. All rights reserved.
//

#import "MobvenBugReporter.h"

@interface MobvenBugReportEventHandler : MobvenBugReporter

+ (void)handleEventWithType:(InvocationType)invokeType;
+ (void)startAction;

@end
