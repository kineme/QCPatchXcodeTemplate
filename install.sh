#!/bin/sh

cp -R sdk/Project\ Templates /Applications/Xcode.app/Contents/Developer/Library/Xcode/Templates/File\ Templates
cp -R sdk/File\ Templates /Applications/Xcode.app/Contents/Developer/Library/Xcode/Templates/Project\ Templates
mkdir -p /Library/Frameworks/SkankySDK.framework
cp -R include /Library/Frameworks/SkankySDK.framework/Headers
cp -R resource /Library/Frameworks/SkankySDK.framework/Resources

