//
//  MBKConsoleLogManager.h
//  MobvenBugKit
//
//  Created by Tolga Bagci on 14.12.2017.
//  Copyright © 2017 Mobven. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MBKConsoleLogManager : NSObject

+ (NSArray *)consoleLogs;
+ (void)log:(NSString *)text;

@end
