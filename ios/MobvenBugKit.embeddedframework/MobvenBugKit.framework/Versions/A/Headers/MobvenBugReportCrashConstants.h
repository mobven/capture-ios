//
//  MobvenBugReportCrashConstants.h
//  TestDemoFramework
//
//  Created by Ahmet Kazim Günay on 16/11/15.
//  Copyright © 2015 Ahmet Kazım Günay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MobvenBugReportCrashConstants : NSObject

#pragma mark - Static constants

extern NSString *const MobvenUncaughtExceptionHandlerSignalExceptionName;
extern NSString *const MobvenUncaughtExceptionHandlerSignalKey;

extern volatile int32_t MobvenUncaughtExceptionCount;
extern const int32_t MobvenUncaughtExceptionMaximum;

@end
