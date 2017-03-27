//
//  MobvenBugReporterHelper.h
//  TestDemoFramework
//
//  Created by Ahmet Kazım Günay on 23/10/15.
//  Copyright © 2015 Ahmet Kazım Günay. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MobvenBugReportDeviceModel.h"

@interface MobvenBugReporterHelper : NSObject

+ (UIViewController *)mobven_getParentViewControllerOfResponder:(UIResponder *)responder;
+ (UIImage *)mobven_takeFullScreenshot;
+ (NSString *)mobven_getVariableNameOfProperty:(id)property vc:(UIViewController *)vc;
+ (BOOL)mobven_isMobvenBugReportFrameworksViewController:(UIViewController*)sender;
+ (NSString *)mobven_base64forData:(NSData*)theData;
+ (BOOL)mobven_mainStr:(NSString *)mainStr containsStr:(NSString *)str;

+ (MobvenBugReportDeviceModel *)mobven_prepareDeviceModel;
+ (NSArray *)mobven_getClassNames;

+ (UIView *)mobven_roundCornersOnView:(UIView *)view onTopLeft:(BOOL)tl topRight:(BOOL)tr bottomLeft:(BOOL)bl bottomRight:(BOOL)br radius:(float)radius;

+ (CGFloat)mobven_calculateLabelHeightWithMaxHeight:(NSInteger)maxHeight
                                             string:(NSString *)string
                                            andFont:(UIFont *)font
                                              width:(float)width;

+ (BOOL)isPortrait_Mobven;

@end
