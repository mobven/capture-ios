//
//  MobvenBugReportModel.h
//  TestDemoFramework
//
//  Created by Ahmet Kazım Günay on 19/10/15.
//  Copyright © 2015 Ahmet Kazım Günay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MobvenBugReportDataModel.h"
#import "MobvenBugReportDeviceModel.h"

@interface MobvenBugReportModel : NSObject

@property (nonatomic, copy) NSString *user;
@property (nonatomic, copy) NSString *image;
@property (nonatomic, copy) NSString *logs;
@property (nonatomic, copy) NSString *crash_data;
@property (nonatomic, copy) NSString *app_version;
@property (nonatomic, copy) NSString *userEmail;
@property (nonatomic, strong) NSArray *fields;
@property (nonatomic, strong) MobvenBugReportDataModel *dataModel;
@property (nonatomic, strong) MobvenBugReportDeviceModel *device;

@end
