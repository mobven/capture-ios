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
 @param appSecret N/A.
 @param appId N/A.
 @param projectId The token that identifies the app provided by Mobven Technology.
 @param invocationOption The event types that invoke the bug reporter UI.
 */
+ (void)startWithAppSecret:(NSString *)appSecret
                     appId:(NSString *)appId
                 projectId:(NSString *)projectId
       forInvocationOption:(MBKInvocationOption)invocationOption;

@end
