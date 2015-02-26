/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <FrontBoardServices/FBSMutableSceneClientSettings.h>
#import <UIKit/UIApplicationSceneClientSettings.h>

@class NSString;

@interface UIMutableApplicationSceneClientSettings : FBSMutableSceneClientSettings <UIApplicationSceneClientSettings>

@property (assign,nonatomic) long long statusBarStyle; 
@property (assign,nonatomic) BOOL statusBarHidden; 
@property (assign,nonatomic) long long defaultStatusBarStyle; 
@property (assign,nonatomic) BOOL defaultStatusBarHidden; 
@property (nonatomic,copy) NSString * defaultPNGName; 
@property (assign,nonatomic) double defaultPNGExpirationTime; 
@property (assign,nonatomic) long long compatibilityMode; 
@property (assign,nonatomic) BOOL idleTimerDisabled; 
@property (assign,nonatomic) BOOL orientationEnabled; 
@property (assign,nonatomic) unsigned long long proximityDetectionModes; 
@property (assign,nonatomic) long long controlCenterRevealMode; 
@property (assign,nonatomic) long long notificationCenterRevealMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIdleTimerDisabled:(BOOL)arg1 ;
-(BOOL)isUISubclass;
-(BOOL)statusBarHidden;
-(long long)statusBarStyle;
-(void)setStatusBarStyle:(long long)arg1 ;
-(void)setStatusBarHidden:(BOOL)arg1 ;
-(void)setDefaultStatusBarStyle:(long long)arg1 ;
-(void)setDefaultStatusBarHidden:(BOOL)arg1 ;
-(void)setDefaultPNGName:(NSString *)arg1 ;
-(void)setDefaultPNGExpirationTime:(double)arg1 ;
-(void)setCompatibilityMode:(long long)arg1 ;
-(unsigned long long)proximityDetectionModes;
-(void)setProximityDetectionModes:(unsigned long long)arg1 ;
-(long long)compatibilityMode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)defaultPNGName;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(void)setOrientationEnabled:(BOOL)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(long long)defaultStatusBarStyle;
-(BOOL)defaultStatusBarHidden;
-(double)defaultPNGExpirationTime;
-(BOOL)idleTimerDisabled;
-(BOOL)orientationEnabled;
-(long long)controlCenterRevealMode;
-(long long)notificationCenterRevealMode;
-(void)setControlCenterRevealMode:(long long)arg1 ;
-(void)setNotificationCenterRevealMode:(long long)arg1 ;
@end
