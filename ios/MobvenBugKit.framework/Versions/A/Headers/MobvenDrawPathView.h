//
//  MobvenDrawPathView.h
//  TestDemoFramework
//
//  Created by Ahmet Kazım Günay on 19/10/15.
//  Copyright © 2015 Ahmet Kazım Günay. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol MobvenDrawPathViewDelegate <NSObject>

@optional
- (void)viewStartedDrawing;
- (void)viewEndedDrawing;
@end

@interface MobvenDrawPathView : UIView

@property (nonatomic, assign) id<MobvenDrawPathViewDelegate> delegate;

- (instancetype)initWithImage:(UIImage *)image;

- (void)clearDraws;
- (void)changeStrokeColor:(UIColor *)color;

/// After the user lifts their finger and the line has been finished the same line is rendered to an image and the UIBezierPath is cleared to prevent performance degradation when lots of lines are on screen
@property (nonatomic, strong) UIImage *incrementalImage;

@end
