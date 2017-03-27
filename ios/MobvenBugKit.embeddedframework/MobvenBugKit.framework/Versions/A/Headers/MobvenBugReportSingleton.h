//
//  MobvenBugReportSingleton.h
//  TestDemoFramework
//
//  Created by Ahmet Kazım Günay on 19/10/15.
//  Copyright © 2015 Ahmet Kazım Günay. All rights reserved.
//

#import "MobvenBugReportEventModel.h"
#import "MobvenRegisterModel.h"
#import "MobvenNotificationView.h"
#import "MobvenDraggableButton.h"

@interface MobvenBugReportSingleton : MobvenBugReportEventModel

+ (MobvenBugReportSingleton *)sharedInstance;

@property (nonatomic, strong) NSArray *reporters;
@property (nonatomic, assign, getter=isAuthenticated) BOOL authenticated;
@property (nonatomic, assign) BOOL hasFiredEvent;
@property (nonatomic, copy) NSString *authToken;
@property (nonatomic, copy) NSString *remainingTime;

@property (nonatomic, strong) MobvenRegisterModel *registerModel;
@property (nonatomic, strong) NSMutableURLRequest *reportRequest;

@property (nonatomic, strong) NSMutableArray *userSteps;
@property (nonatomic, assign) BOOL isInFrameworksControllers;

@property (nonatomic, strong) NSArray *classNames;

@property (nonatomic, strong) MobvenNotificationView *mobven_notifyView;

@property (nonatomic, strong) NSArray<NSNumber *> * eventTypes;
@property (nonatomic, assign) ReportType reportType;

@property (nonatomic, strong) UIImage *screenShot;

- (void)addFloatingButton;
- (void)hideFloatingButton;
- (void)showFloatingButton;
@property (nonatomic, strong) MobvenDraggableButton *floatingButton;

@property (nonatomic, strong) NSArray *fields;
@property (nonatomic, assign) BOOL showEmail;

@end
