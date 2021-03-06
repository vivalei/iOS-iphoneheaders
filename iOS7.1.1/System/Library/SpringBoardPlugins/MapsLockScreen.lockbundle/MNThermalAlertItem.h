/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@interface MNThermalAlertItem : SBAlertItem
-(id)localizedCoolDownString;
-(bool)shouldShowInLockScreen;
-(bool)shouldShowInEmergencyCall;
-(bool)reappearsAfterLock;
-(int)alertPriority;
-(void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2 ;
-(void)performUnlockAction;
@end

