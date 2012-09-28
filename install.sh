#!/bin/sh

cd "$(dirname "$0")"

cp -R "sdk/File Templates/Kineme SkankySDK" "/Applications/Xcode.app/Contents/Developer/Library/Xcode/Templates/File Templates"
cp -R "sdk/Project Templates/Kineme SkankySDK" "/Applications/Xcode.app/Contents/Developer/Library/Xcode/Templates/Project Templates"

mkdir -p /Library/Frameworks/SkankySDK.framework
cp -R include /Library/Frameworks/SkankySDK.framework/Headers
cp -R resource /Library/Frameworks/SkankySDK.framework/Resources
