//
//  MobvenImageLoader.h
//  TestDemoFramework
//
//  Created by Ahmet Kazım Günay on 20/10/15.
//  Copyright © 2015 Ahmet Kazım Günay. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MobvenImageLoader : NSObject

+ (void)mobvenSetImageToImageView:(UIImageView *)imgView
                           urlStr:(NSString *)urlStr
                          success:(void(^)())success
                          failure:(void(^)(NSError *error))failure;

@end
