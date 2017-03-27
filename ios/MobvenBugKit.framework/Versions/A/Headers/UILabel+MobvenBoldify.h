//
//  UILabel+MobvenBoldify.h
//  TestDemoFramework
//
//  Created by Ahmet Kazim Günay on 05/11/15.
//  Copyright © 2015 Ahmet Kazım Günay. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (MobvenBoldify)

- (void)mobven_boldSubstringForMany:(NSArray *)substrings color:(UIColor *)color font:(UIFont *)font;

- (void)mobven_boldSubstring:(NSString *)substring
                       color:(UIColor *)color
                        font:(UIFont *)font;

- (void)mobven_boldRange:(NSRange)range
                   color:(UIColor *)color
                    font:(UIFont *)font;

@end
