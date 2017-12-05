//
//  MBKInvocationOptions.h
//  MobvenBugKit
//
//  Created by Tolga Bagci on 27.09.2017.
//  Copyright © 2017 Mobven. All rights reserved.
//

#ifndef MBKInvocationOptions_h
#define MBKInvocationOptions_h

/**
 The event types used to invoke the bug reporter.
 */
typedef NS_OPTIONS(NSUInteger, MBKInvocationOption) {
    MBKInvocationOptionShake               = 1 << 0,
    MBKInvocationOptionScreenshot          = 1 << 1,
    MBKInvocationOptionFloatingButton      = 1 << 2
};

#endif /* MBKInvocationOptions_h */
