//
//  MobvenNotificationView.h
//  TestDemoFramework
//
//  Created by Ahmet Kazim Günay on 09/11/15.
//  Copyright © 2015 Ahmet Kazım Günay. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MobvenNotificationView : UIView

- (void)showNotificationViewWithData:(NSDictionary *)data
             didHideNotificationView:(void (^)(void))didHideNotificationView
                          tapHandler:(void (^)(void))tapHandler;

- (void)hideNotificationViewWithCompletion:(void(^)())completion;

@end
