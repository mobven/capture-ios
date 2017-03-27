#
#  Be sure to run `pod spec lint MobvenBugKit.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

  s.ios.deployment_target = '8.0'
  s.name         = "MobvenBugKit"
  s.version      = "1.0.0"
  s.summary      = "Mobven Bug Kit Cocoapod Spec File"
  s.homepage = "https://github.com/mobven/bugtrackerIOS"

  s.description  = "MobvenBugKit"

  s.license      = { :type => "Proprietary" }


    s.author             = { "Caner Y. Tatar" => "tatar@mobven.com" }


  #  When using multiple platforms
   s.ios.deployment_target = "8.0"
  # s.osx.deployment_target = "10.7"
  # s.watchos.deployment_target = "2.0"
  # s.tvos.deployment_target = "9.0"


  s.source       = { :git => "https://github.com/mobven/bugtrackerIOS.git", :branch => "future/cocoapod" }
  s.source_files = "Sources/**/*.{h,m}"

  s.public_header_files = "Sources/**/*.{h}"
  s.resources = 'MobvenBugKit.bundle'
end
