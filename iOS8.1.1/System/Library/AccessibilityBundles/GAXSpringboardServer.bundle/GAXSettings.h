/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:25:48 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/AccessibilityBundles/GAXSpringboardServer.bundle/GAXSpringboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSDictionary, NSString, NSDate;

@interface GAXSettings : NSObject

@property (nonatomic,retain) NSArray * userConfiguredAppIDs; 
@property (nonatomic,retain) NSDictionary * savedAccessibilityFeatures; 
@property (nonatomic,retain) NSArray * savedAccessibilityTripleClickOptions; 
@property (assign,nonatomic) long long activeAppOrientation; 
@property (nonatomic,copy) NSString * activeAppID; 
@property (assign,nonatomic) BOOL timeRestrictionHasExpired; 
@property (assign,getter=isActiveAppSelfLocked,nonatomic) BOOL activeAppSelfLocked; 
@property (assign,nonatomic) BOOL systemDidRestartDueToLowBattery; 
@property (nonatomic,copy) NSString * deviceID; 
@property (nonatomic,copy) NSString * productBuildVersion; 
@property (nonatomic,retain) NSDate * lastActivationDate; 
@property (nonatomic,retain) NSDate * lastPasscodeSetDate; 
@property (nonatomic,retain) NSDictionary * userAppProfile; 
@property (nonatomic,retain) NSDictionary * userGlobalProfile; 
+(id)sharedInstance;
-(NSString *)activeAppID;
-(void)setActiveAppID:(NSString *)arg1 ;
-(NSDictionary *)savedAccessibilityFeatures;
-(void)setSavedAccessibilityFeatures:(NSDictionary *)arg1 ;
-(void)setSavedAccessibilityTripleClickOptions:(NSArray *)arg1 ;
-(NSArray *)savedAccessibilityTripleClickOptions;
-(long long)activeAppOrientation;
-(BOOL)isActiveAppSelfLocked;
-(BOOL)systemDidRestartDueToLowBattery;
-(NSDate *)lastActivationDate;
-(NSDate *)lastPasscodeSetDate;
-(NSDictionary *)userAppProfile;
-(BOOL)timeRestrictionHasExpired;
-(NSDictionary *)userGlobalProfile;
-(NSArray *)userConfiguredAppIDs;
-(id)mutableUserAppProfile;
-(id)mutableUserGlobalProfile;
-(void)setUserGlobalProfile:(NSDictionary *)arg1 ;
-(void)setUserAppProfile:(NSDictionary *)arg1 ;
-(void)setSystemDidRestartDueToLowBattery:(BOOL)arg1 ;
-(void)setActiveAppSelfLocked:(BOOL)arg1 ;
-(void)setTimeRestrictionHasExpired:(BOOL)arg1 ;
-(void)setLastActivationDate:(NSDate *)arg1 ;
-(void)setUserConfiguredAppIDs:(NSArray *)arg1 ;
-(void)setLastPasscodeSetDate:(NSDate *)arg1 ;
-(void)setActiveAppOrientation:(long long)arg1 ;
-(id)description;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)productBuildVersion;
-(void)setProductBuildVersion:(NSString *)arg1 ;
@end
