#
#  Be sure to run `pod spec lint GizwitsiOSSDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  These will help people to find your library, and whilst it
  #  can feel like a chore to fill in it's definitely to your advantage. The
  #  summary should be tweet-length, and the description more in depth.
  #

spec.name         = "GizwitsiOSSDK"
spec.version      = "1.9.9"
spec.summary      = "GizwitsiOSSDK"
spec.description  = <<-DESC
    机智云设备接入iOS SDK，用于和设备的连接和通讯
                   DESC
                   
spec.homepage     = "https://github.com/gizwits/ios-v5-sdk"
spec.license = { :type => 'MIT', :file => 'LICENSE.txt' }
spec.author       = { "Owner" => "rbwang@gizwits.com" }
spec.platform     = :ios, "13.0"
spec.source       = { :git => "https://github.com/gizwits/ios-v5-sdk.git", :tag => "#{spec.version}" }
#在上传之前可以进行本地测试,稍后另起文章写
# spec.source = {:path=> '.'}
# 开放的头文件，从工程根目录下开始写起
spec.source_files  = "GizwitsiOSSDK/GizwitsiOSSDK.framework/Headers/*.{h,m}"
spec.swift_versions= "5.0"
# 排除文件，没有排除文件可不写
# spec.exclude_files = "Example"

spec.vendored_frameworks = 'GizwitsiOSSDK/GizwitsiOSSDK.framework'

# 依赖系统静态库，省略其名称的lib前缀，以及.后缀
# spec.library   = "z"

spec.dependency 'CryptoSwift', '~> 1.8.0'

# 项目配置，注意这里的SDK不支持模拟器
spec.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
end
