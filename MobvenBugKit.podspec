Pod::Spec.new do |s|

  s.name         = "MobvenBugKit"
  s.version      = "2.0.0"
  s.summary      = "Shake your device and report the bugs!"

  s.description  = "MobvenBugKit enables seamless bug reporting functionality with fantastic features in your iOS app."

  s.homepage     = "https://github.com/mobven/bugtrackerIOS"

  s.license      = { :type => "Proprietary" }

  s.author             = { "Tolga Bagci" => "t.bagci@mobven.com" }

  s.ios.deployment_target    = "9.0"
  s.ios.vendored_framework   = 'ios/MobvenBugKit.framework'

  s.source       = { :git => "https://github.com/mobven/capture-ios.git", :branch => "development" }

end