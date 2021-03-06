/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:01 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/AccessibilityBundles/CameraKit.axbundle/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/__CAMCaptureControllerAccessibility_super.h>

@interface CAMCaptureControllerAccessibility : __CAMCaptureControllerAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryTargetClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3 ;
-(void)_sessionStarted:(id)arg1 ;
-(void)cameraControllerVideoCaptureDidStart:(id)arg1 ;
-(void)_setCameraMode:(int)arg1 cameraDevice:(int)arg2 ;
-(void)_sessionStopped:(id)arg1 ;
-(char)capturePhotoUsingHDR:(char)arg1 ;
-(void)_capturedPhotoWithDictionary:(id)arg1 error:(id)arg2 HDRUsed:(char)arg3 ;
@end

