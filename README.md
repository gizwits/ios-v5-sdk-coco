# Gizwits iOS SDK

Version 2.1.10 is distributed as `GizwitsiOSSDK/GizwitsiOSSDK.xcframework` with iOS arm64 and iOS Simulator arm64 / x86_64 variants and matching dSYMs.

```ruby
pod 'GizwitsiOSSDK', '~> 2.1.10'
```

When upgrading from the device-only framework, run `pod update GizwitsiOSSDK`, remove old Simulator arm64 exclusion settings in the app, and clean old build products. Xcode/CocoaPods chooses the appropriate framework variant. BLE and Wi-Fi provisioning still require physical-device validation.

Source: `iossdkv5`, build helper `scripts/build_xcframework.py`. Build metadata is included in the XCFramework.

For release: verify the binary version, architecture and dSYM UUIDs; validate the podspec; commit and push the distribution and version tag; verify that the podspec source URL resolves the tag; then run `pod trunk push GizwitsiOSSDK.podspec`.
