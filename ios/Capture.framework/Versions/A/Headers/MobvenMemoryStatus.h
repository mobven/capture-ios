//
//  MobvenMemoryStatus.h
//  TestDemoFramework
//
//  Created by Ahmet Kazım Günay on 19/10/15.
//  Copyright © 2015 Ahmet Kazım Günay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MobvenMemoryStatus : NSObject

+ (NSString *)freeMemoryInMB;
+ (NSString *)usedMemoryInMB;

@end
