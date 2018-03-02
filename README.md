# Capture iOS SDK

Capture makes reporting bugs easy, which increases the productivity of your test engineers; standardized reporting enables your developers to focus on fixing the bug instead of finding and reproducing it.

Capture greatly improves your mobile testing processes. Just shake the phone to report a bug and be amazed how easy it can be.

## Installation
### Note:
* iOS 9.0 and newer are supported
* Swift 3.0 and newer are supported
* Simulators are not supported, place an if statement checking the Build Architecture
* You need to accept requested permissions by MobvenBugKit. 


### CocoaPods
To install with CocoaPods, simply add the following line to your Podfile:

<code>pod 'MobvenBugKit', :git => 'https://github.com/mobven/capture-ios.git', :branch => 'development'</code>

To update version, run following command:

<code>pod update</code>

Add following lines to your project info.plist:

<code>\<key>NSCameraUsageDescription\</key></code>  
<code>\<string>Capture!\</string></code>  
<code>\<key>NSMicrophoneUsageDescription\</key></code>  
<code>\<string>Capture!\</string></code>  
<code>\<key>NSPhotoLibraryUsageDescription\</key></code>  
<code>\<string>Capture!\</string></code>  

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

#### Console Logs in Swift Projects
To enable console logs within your Swift project, just add the following code snippet in your AppDelegate file (outside of the class definition).

```swift
public func print(_ items: Any..., separator: String = " ", terminator: String = "\n") {

    let output = items.map { "\($0)" }.joined(separator: separator)

    Swift.print(output, terminator: terminator);

    MBKConsoleLogManager.log(output)
}
```


### Objective-C
To use MobvenBugKit with Objective-C projects, add the following codes to AppDelegate.m file.

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

#### Console Logs in Objective-C Projects
To enable console logs within your Objective-C projects, just add the following code snippet in your AppDelegate file (outside of the class definition).

```objective-c
inline void NSLog(NSString *format, ...) {

    va_list arg_list;
    va_start(arg_list, format);

    NSMutableString * message = [[NSMutableString alloc] initWithFormat:format arguments:arg_list];
    [MBKConsoleLogManager log:message];
    
    NSLogv(format, arg_list);
    va_end(arg_list);
}
```

