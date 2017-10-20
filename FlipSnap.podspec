#
# Be sure to run `pod lib lint FlipSnap.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
s.name             = 'FlipSnap'
s.version          = '0.1.9'
s.platform         = :ios
s.ios.deployment_target = '11.0'
s.preserve_paths = 'FlipSnap/**/*.*'
s.pod_target_xcconfig = { 'OTHER_LDFLAGS' => '-ObjC' }
s.summary          = 'An image processing library for real time video effects called FlipSnap.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

s.description      = <<-DESC
FlipSnap is a framework for implementing algorithmic real time video effects for iOS. It's written in Objective C so it can be implmeneted on both the Swift and Objective C platforms. Video effects are currently video and image compositing through Depth and Color Spatial analysis.
DESC

s.homepage         = 'https://github.com/WhisteoCorp/FlipSnap-Library-Cocoapods'
# s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
s.license          = { :type => 'MIT', :file => 'LICENSE' }
s.author           = { 'robnewport' => 'rob@flipsnap.me' }
s.source           = { :git => 'https://github.com/WhisteoCorp/FlipSnap-Library-Cocoapods.git', :tag => s.version.to_s }
s.social_media_url = 'https://twitter.com/flipsnapapp'


s.source_files = 'FlipSnap/Classes/**/*'
s.vendored_libraries = 'FlipSnap/libFlipSnapLibrary.a'
s.public_header_files = 'FlipSnap/Classes/FSCamViewController.h'

s.resource_bundles = {
'FlipSnap' => ['FlipSnap/Assets/*.jpg','FlipSnap/Assets/*.png']
}

s.public_header_files = 'FlipSnap/Classes/*.h'
s.frameworks = 'UIKit'
end
