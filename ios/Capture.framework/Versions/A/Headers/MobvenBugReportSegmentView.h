//
//  MobvenBugReportSegmentView.h
//  MobvenBugKit
//
//  Created by Ahmet Kazim Günay on 04/11/15.
//  Copyright © 2015 Ahmet Kazim Günay. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MobvenBugReportSegmentView : UIView

- (void)segmentViewWithFrame:(CGRect)frame
                       items:(NSArray *)items
                      toView:(UIView *)view
                        font:(UIFont *)font
                initialIndex:(NSInteger)initialIndex
               selectedColor:(UIColor *)selectedColor
             unselectedColor:(UIColor *)unselectedColor
                clickHandler:(void (^)(NSInteger selectedIndex))clickHandler;

@end
