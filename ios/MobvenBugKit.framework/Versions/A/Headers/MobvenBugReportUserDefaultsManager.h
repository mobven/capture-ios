//
//  MobvenBugReportUserDefaultsManager.h
//  TestDemoFramework
//
//  Created by Ahmet Kazım Günay on 23/10/15.
//  Copyright © 2015 Ahmet Kazım Günay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MobvenBugReportUserDefaultsManager : NSObject

+ (void)setLatestSelectedUser:(NSDictionary *)user;
+ (NSDictionary *)getLatestSelectedUser;

@end
