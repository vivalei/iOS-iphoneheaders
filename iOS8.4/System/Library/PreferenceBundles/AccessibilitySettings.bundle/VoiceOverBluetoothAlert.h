/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@protocol VoiceOverBluetoothAlertDelegate;
@class UIAlertView, VoiceOverBluetoothDevice, NSString;

@interface VoiceOverBluetoothAlert : NSObject <UIAlertViewDelegate> {

	id<VoiceOverBluetoothAlertDelegate> _delegate;
	UIAlertView* _alert;
	VoiceOverBluetoothDevice* _device;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showAlertWithResult:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)dismiss;
@end
