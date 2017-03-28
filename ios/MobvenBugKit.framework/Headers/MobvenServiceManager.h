//
//  MobvenServiceManager.h
//  MobvenBugKit
//
//  Created by Ahmet Kazım Günay on 19/10/15.
//  Copyright © 2015 Ahmet Kazım Günay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MobvenRegisterModel.h"
#import "MobvenBugReportModel.h"
#import "MobvenSendRecordModel.h"

@interface MobvenServiceManager : NSObject

+ (void)getTokenInfo:(MobvenRegisterModel *)registerModel
             success:(void(^)(NSDictionary *response))success
             failure:(void(^)(NSError *error))failure;

+ (void)reportBugWithReporter:(MobvenBugReportModel *)reportModel
                      success:(void(^)(NSDictionary *response))success
                      failure:(void(^)(NSError *error))failure;

+ (void)reportCrashWithReport:(NSString *)report
                      success:(void (^)(NSDictionary * response))success
                      failure:(void (^)(NSError *error))failure;

+ (void)sendRecordWithRecorder:(MobvenSendRecordModel *)recorder
                       success:(void (^)(NSDictionary *response))success
                       failure:(void (^)(NSError *error))failure;

+ (void)getReportsWithScreenKey:(NSString *)screenKey
                        success:(void (^)(NSDictionary *response))success
                        failure:(void (^)(NSError *error))failure;

+ (void)resolveIssueWithIssueId:(NSInteger)issueId
                        success:(void (^)(NSDictionary *response))success
                        failure:(void (^)(NSError *error))failure;

@end
