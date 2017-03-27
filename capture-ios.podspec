Pod::Spec.new do |s|
  s.name = "capture-ios"
  s.version = "1.0.0"
  s.summary = "Capture iOS SDK Cocoapod Spec File"
  s.license = {"type"=>"Proprietary"}
  s.authors = {"Caner Y. Tatar"=>"tatar@mobven.com"}
  s.homepage = "https://github.com/mobven/capture-ios"
  s.description = "This is the static library of Mobven Capture iOS SDK."
  s.source = { :path => '.' }

  s.ios.deployment_target    = '8.0'
  s.ios.vendored_framework   = 'ios/MobvenBugKit.framework'
end
