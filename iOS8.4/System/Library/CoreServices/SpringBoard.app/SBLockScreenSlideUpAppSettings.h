/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBLockScreenSlideUpAppSettings : _UISettings {

	long long _slideUpAppSelection;

}

@property (assign) long long slideUpAppSelection;              //@synthesize slideUpAppSelection=_slideUpAppSelection - In the implementation block
+(id)settingsControllerModule;
-(void)setSlideUpAppSelection:(long long)arg1 ;
-(long long)slideUpAppSelection;
-(id)bundleIdentifierForCurrentSelection;
-(id)imageNameForCurrentSelection;
-(void)setDefaultValues;
@end
