spec.name         = "GizwitsiOSSDK"
spec.version      = "1.0.0"
spec.summary      = "GizwitsiOSSDK"
spec.description  = <<-DESC
    机智云设备接入iOS SDK，用于和设备的连接和通讯
                   DESC
                   
spec.homepage     = "https://github.com/gizwits/ios-v5-sdk"
spec.license      = "MIT"
spec.author       = { "Owner" => "rbwang@gizwits.com" }
spec.platform     = :ios, "13.0"
spec.source       = { :git => "https://github.com/gizwits/ios-v5-sdk.git", :tag => "#{spec.version}" }
#在上传之前可以进行本地测试,稍后另起文章写
spec.source = {:path=> '.'}
# 开放的头文件，从工程根目录下开始写起
spec.source_files  = "GizwitsiOSSDK/GizwitsiOSSDK.framework/Headers/*.{h,m}"

# 排除文件，没有排除文件可不写
# spec.exclude_files = "Example"

spec.vendored_frameworks = 'GizwitsiOSSDK/GizwitsiOSSDK.framework'

# 依赖系统静态库，省略其名称的lib前缀，以及.后缀
# spec.library   = "z"

# 第三方依赖 有几个就写几个，
s.dependency 'Sentry', '~> 8.0'
s.dependency 'CryptoSwift', '~> 1.8.0'

# 项目配置，注意这里的SDK不支持模拟器
# 如果多个字段就用逗号分开 { 'VALID_ARCHS' => 'x86_64 armv7 arm64', 'ENABLE_BITCODE' => 'NO' }
spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'arm64' }