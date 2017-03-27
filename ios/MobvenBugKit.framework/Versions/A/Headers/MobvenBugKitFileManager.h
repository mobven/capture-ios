//
//  MobvenBugKitFileManager.h
//  TestDemoFramework
//
//  Created by Ahmet Kazim Günay on 13/11/15.
//  Copyright © 2015 Ahmet Kazım Günay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MobvenBugKitFileManager : NSObject

+ (void)writeCrashReport:(NSString *)report
                 success:(void(^)(void))success
                 failure:(void(^)(void))failure;

+ (void)readCrashReportWithSuccess:(void(^)(NSString *report))success
                           failure:(void(^)(void))failure;

+ (void)deleteExistingCrashReportWithSuccess:(void(^)(void))success
                                     failure:(void(^)(NSError *err))failure;

+ (NSURL *)getFileUrl;

@end
