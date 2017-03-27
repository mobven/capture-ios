//
//  MobvenBugReportLogger.h
//  TestDemoFramework
//
//  Created by Ahmet Kazım Günay on 19/10/15.
//  Copyright © 2015 Ahmet Kazım Günay. All rights reserved.
//

#import <Foundation/Foundation.h>

#define IOS_8_OR_LATER  ([[[UIDevice currentDevice] systemVersion] compare:@"8.0" options:NSNumericSearch] != NSOrderedAscending)

@interface MobvenBugReportLogger : NSObject

+ (NSArray *)printSystemLogs;
+(NSArray *)printSystemLogsOnIOS7;
+ (NSString *)printCrashLogs;
+(NSString *)printCrashLogsOnIOS7;
@end
