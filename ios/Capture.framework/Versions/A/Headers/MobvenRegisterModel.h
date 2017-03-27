//
//  MobvenRegisterModel.h
//  MobvenBugKit
//
//  Created by Ahmet Kazım Günay on 19/10/15.
//  Copyright © 2015 Ahmet Kazım Günay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MobvenRegisterModel : NSObject

@property (nonnull, nonatomic, copy) NSString *appId;
@property (nonnull, nonatomic, copy) NSString *secret;
@property (nonnull, nonatomic, copy) NSString *projectId;

+ (MobvenRegisterModel * _Nonnull)modelWithAppId:(NSString * _Nonnull)appId
                                          secret:(NSString * _Nonnull)secret
                                       projectId:( NSString * _Nonnull )projectId;

@end
