//
//  UIViewController+MobvenShakeDetector.h
//  TestDemoFramework
//
//  Created by Ahmet Kazım Günay on 20/10/15.
//  Copyright © 2015 Ahmet Kazım Günay. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MobvenNotificationView.h"

@interface UIViewController (MobvenShakeDetector)

@property (nonatomic, strong) UIScreenEdgePanGestureRecognizer *mbvn_sepgr;
@property (nonatomic, strong) UIPinchGestureRecognizer *mbvn_pinch;

@property (nonatomic, strong) NSNumber *mbvn_showNotification;


@end
