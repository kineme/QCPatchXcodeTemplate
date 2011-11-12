#!/bin/sh

cp -R sdk/Project\ Templates /Developer/Library/Xcode/
cp -R sdk/File\ Templates /Developer/Library/Xcode/
mkdir -p /Library/Frameworks/SkankySDK.framework
cp -R include /Library/Frameworks/SkankySDK.framework/Headers
cp -R resource /Library/Frameworks/SkankySDK.framework/Resources
