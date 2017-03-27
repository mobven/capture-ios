//
//  MobvenSendRecordModel.h
//  TestDemoFramework
//
//  Created by Ahmet Kazim Günay on 27/10/15.
//  Copyright © 2015 Ahmet Kazım Günay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MobvenBugReportDeviceModel.h"

@interface MobvenSendRecordModel : NSObject

@property (nonatomic, copy) NSString *userKey;
@property (nonatomic, strong) MobvenBugReportDeviceModel *device;
@property (nonatomic, copy) NSString *image;
@property (nonatomic, copy) NSString *app_version;

@end
