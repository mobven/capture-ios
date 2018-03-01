# Capture iOS SDK

Capture makes reporting bugs easy, which increases the productivity of your test engineers; standardized reporting enables your developers to focus on fixing the bug instead of finding and reproducing it.

Capture greatly improves your mobile testing processes. Just shake the phone to report a bug and be amazed how easy it can be.

## Installation
### Note:
* iOS 8.0 and newer are supported
* Swift 3.0 and newer are supported
* To use with iOS 11, please use ios11 branch.

### CocoaPods
To install with CocoaPods, simply add the following line to your Podfile:

<code>pod 'MobvenBugKit', :git => 'https://github.com/mobven/capture-ios.git'</code>

To update version, run following command:

<code>pod update</code>

### Swift
To use MobvenBugKit within your project, import and initialize framework into AppDelegate.swift
file as seen below. 

Also you need to accept requested permissions by MobvenBugKit. 

```swift
import MobvenBugKit

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {

    var window: UIWindow?

    func application(application: UIApplication, didFinishLaunchingWithOptions launchOptions: [NSObject: AnyObject]?) -> Bool {
      let types = [NSNumber(value:InvocationType.Shake.rawValue),
					NSNumber(value:InvocationType.FloatingButton.rawValue)]
	    MobvenBugReporter.initializeAppSecret(<APP_SECRET>, appId: <APP_ID>, projectId: <PROJECT_ID>, invokeTypes:types)

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
	// Override point for customization after application launch.

	[MobvenBugReporter initializeAppSecret:<APP_SECRET> appId:<APP_ID> projectId:<PROJECT_ID> invokeTypes:@[@(Shake), @(FloatingButton)]];
	return YES;
}
@end
```
