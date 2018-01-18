//
//  MBKReporter.h
//  MobvenBugKit
//
//  Created by Tolga Bagci on 27.09.2017.
//  Copyright © 2017 Mobven. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MBKInvocationOptions.h"

@interface MBKReporter : NSObject

/**
 @param appSecret N/A at this time. Use "1" for now.
 @param appId N/A at this time. Use "1" for now.
 @param projectId The token that identifies the app provided by Mobven Technology.
 @param invocationOption The event types that invoke the bug reporter UI.
 */
+ (void)startWithAppSecret:(NSString *)appSecret
                     appId:(NSString *)appId
                 projectId:(NSString *)projectId
       forInvocationOption:(MBKInvocationOption)invocationOption;

/**
 @param endpoint The address of the endpoint.
 @param appSecret N/A at this time. Use "1" for now.
 @param appId N/A at this time. Use "1" for now.
 @param projectId The token that identifies the app provided by Mobven Technology.
 @param invocationOption The event types that invoke the bug reporter UI.
 */
+ (void)startWithEndpoint:(NSString *)endpoint
                appSecret:(NSString *)appSecret
                    appId:(NSString *)appId
                projectId:(NSString *)projectId
      forInvocationOption:(MBKInvocationOption)invocationOption;

@end
