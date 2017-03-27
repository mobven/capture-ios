//
//  MobvenBugReporterTimerManager.h
//  TestDemoFramework
//
//  Created by Ahmet Kazım Günay on 23/10/15.
//  Copyright © 2015 Ahmet Kazım Günay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MobvenBugReporterTimerManager : NSObject

+ (MobvenBugReporterTimerManager *)sharedManager;

@property (nonatomic, assign) int timeCount;

- (void)startTimer;
- (void)stopTimer;
- (void)resetTimer;

- (NSString *)prettyTimeCount;

@end
