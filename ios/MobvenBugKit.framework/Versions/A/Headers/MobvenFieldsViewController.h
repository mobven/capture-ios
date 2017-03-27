//
//  MobvenFieldsViewController.h
//  MobvenBugKit
//
//  Created by Mobven Dev on 21/03/17.
//  Copyright © 2017 Ahmet Kazim Günay. All rights reserved.
//

#import "MobvenBugReportBaseViewController.h"

@interface MobvenFieldsViewController : MobvenBugReportBaseViewController

@property (nonatomic, copy) void (^mobven_selectedFieldsBlock)(NSArray *fields);
@property (nonatomic, strong) NSMutableArray *selectedFields;
@end
