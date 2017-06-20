Pod::Spec.new do |s|
  s.name = "MobvenBugKit"
  s.version = "1.2.6"
  s.summary = "Mobven Bug Kit Cocoapod Spec File"
  s.license = {"type"=>"Proprietary"}
  s.authors = {"Caner Y. Tatar"=>"tatar@mobven.com"}
  s.homepage = "https://github.com/mobven/capture-ios"
  s.description = "MobvenBugKit"
  s.source = { :path => '.' }

  s.ios.deployment_target    = '8.0'
  s.ios.vendored_framework   = 'ios/MobvenBugKit.framework'
end
