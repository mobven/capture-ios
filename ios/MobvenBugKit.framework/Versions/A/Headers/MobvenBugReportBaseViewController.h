//
//  MobvenBugReportBaseViewController.h
//  TestDemoFramework
//
//  Created by Ahmet Kazım Günay on 19/10/15.
//  Copyright © 2015 Ahmet Kazım Günay. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MobvenBugReporterHelper.h"

@interface MobvenBugReportBaseViewController : UIViewController

#define MOBVEN_MEDIUM_FONT(s) [UIFont fontWithName:@"HelveticaNeue-Medium" size:s]
#define MOBVEN_COLOR(x) [UIColor colorWithRed:126.0/255.0 green:155.0/255.0 blue:191.0/255.0 alpha:x]
#define IOS_8_OR_LATER  ([[[UIDevice currentDevice] systemVersion] compare:@"8.0" options:NSNumericSearch] != NSOrderedAscending)
#if !defined(CheckStringMobvenBugReport)
#define CheckStringMobvenBugReport(A)  ({ __typeof__(A) __a = (A); __a ? __a : @"";})
#endif

@property (nonatomic, assign) CGFloat mobven_navBarViewHeight;

/**
 *  Block which contains user defined animations
 *
 *  @param keyboardRect Finish keyboard frame
 *  @param duration     Duration for keyboard showing animation
 *  @param isShowing    If isShowing is YES we handle keyboard showing, if NO we process keyboard dismissing
 */
typedef void(^ _Nullable MobvenAnimationsWithKeyboardBlock)(CGRect keyboardRect, NSTimeInterval duration, BOOL isShowing);

/**
 *  Block to handle completion of keyboard animation
 *
 *  @param finished If NO animation was canceled during performing
 */
typedef void(^ _Nullable MobvenCompletionKeyboardAnimations)(BOOL finished);

/**
 *  Animation block will be called inside [UIView animateWithDuration:::::]
 *
 *  @tip viewWillAppear is the best place to subscribe to keyboard events
 *
 *  @param animations User defined animations. If using auto layout don't forget to call layoutIfNeeded
 *  @param completion User defined completion block, will be called when animation ends
 *
 *  @warning These blocks will he holding inside UIViewController which calls it, so as with any block-style API avoid a retain cycle
 */
- (void)subscribeKeyboardWithAnimations:(MobvenAnimationsWithKeyboardBlock)animations
                             completion:(MobvenCompletionKeyboardAnimations)completion;

/**
 *
 *  Call it to unsubscribe from keyboard events and clean all animations and completion blocks
 *
 *  @tip viewWillDisappear is the best place to call it
 *
 *  @warning If you will not call it when current view disappeared, subscribed view controller will handle keyboard events on other screens
 */
- (void)unsubscribeKeyboard;

@end
