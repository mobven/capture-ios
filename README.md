# Capture iOS SDK

Capture makes reporting bugs easy, which increases the productivity of your test engineers; standardized reporting enables your developers to focus on fixing the bug instead of finding and reproducing it.

Capture greatly improves your mobile testing processes. Just shake the phone to report a bug and be amazed how easy it can be.

## Installation
### Note:
* iOS 9.0 and newer are supported
* Swift 3.0 and newer are supported

### CocoaPods
To install with CocoaPods, simply add the following line to your Podfile:

<code>pod 'MobvenBugKit', :git => 'https://github.com/mobven/capture-ios.git', :branch => 'development'</code>

### Swift
To use MobvenBugKit within your project, import and initialize framework into AppDelegate.swift
file as seen below.

```swift
import MobvenBugKit

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {

    var window: UIWindow?

    func application(application: UIApplication, didFinishLaunchingWithOptions launchOptions: [NSObject: AnyObject]?) -> Bool {

    	MBKReporter.start(withAppSecret: <APP_SECRET>, appId: <APP_ID>, projectId: <PROJECT_ID>, for: [.floatingButton, .shake, .screenshot])

    	return true
    }
}
```


### Objective C
To use MobvenBugKit with Objective C projects, add the following codes to AppDelegate.m file.

```objective-c
#import "AppDelegate.h"
#import <MobvenBugKit/MobvenBugKit.h>
@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {

	[MBKReporter startWithAppSecret:<APP_SECRET>
	appId:<APP_ID>
	projectId:<PROJECT_ID>
	forInvocationOption:MBKInvocationOptionScreenshot | MBKInvocationOptionFloatingButton | MBKInvocationOptionShake];

	return YES;
}
@end
```
