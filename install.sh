#!/bin/sh

cd "$(dirname "$0")" # Allows this script to be run from any directory

./uninstall.sh

cp -R "sdk/Project Templates/Kineme SkankySDK" "/Applications/Xcode.app/Contents/Developer/Library/Xcode/Templates/Project Templates"
cp -R "sdk/File Templates/Kineme SkankySDK" "/Applications/Xcode.app/Contents/Developer/Library/Xcode/Templates/File Templates"

mkdir -p /Library/Frameworks/SkankySDK.framework/Headers
cp -R include /Library/Frameworks/SkankySDK.framework/Headers
cp -R resource /Library/Frameworks/SkankySDK.framework/Resources

mkdir -p "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.8.sdk/System/Library/Frameworks/SkankySDK.framework"
cp -R include "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.8.sdk/System/Library/Frameworks/SkankySDK.framework/Headers"
cp -R resource "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.8.sdk/System/Library/Frameworks/SkankySDK.framework/Resources"

mkdir -p "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.7.sdk/System/Library/Frameworks/SkankySDK.framework"
cp -R include "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.7.sdk/System/Library/Frameworks/SkankySDK.framework/Headers"
cp -R resource "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.7.sdk/System/Library/Frameworks/SkankySDK.framework/Resources"
