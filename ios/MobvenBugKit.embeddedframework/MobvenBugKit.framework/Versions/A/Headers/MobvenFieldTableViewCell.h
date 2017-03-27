//
//  MobvenFieldTableViewCell.h
//  MobvenBugKit
//
//  Created by Mobven Dev on 21/03/17.
//  Copyright © 2017 Ahmet Kazim Günay. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MobvenFieldTableViewCell : UITableViewCell
@property (nonatomic, strong) UIImageView *selectedImageView;
@property (nonatomic, strong) UILabel *lblField;

- (void)setCellContentWithItem:(NSDictionary *)item isSelected:(BOOL)isSelected;
@end
