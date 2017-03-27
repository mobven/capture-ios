//
//  MobvenBugReportDeviceModel.h
//  TestDemoFramework
//
//  Created by Ahmet Kazım Günay on 19/10/15.
//  Copyright © 2015 Ahmet Kazım Günay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MobvenBugReportMemoryModel.h"
#import "MobvenBugReportStorageModel.h"

@interface MobvenBugReportDeviceModel : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *os_name;
@property (nonatomic, copy) NSString *os_version;
@property (nonatomic, copy) NSString *device_id;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *battery;
@property (nonatomic, copy) NSString *connection;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, strong) MobvenBugReportMemoryModel *memory;
@property (nonatomic, strong) MobvenBugReportStorageModel *storage;

@end
