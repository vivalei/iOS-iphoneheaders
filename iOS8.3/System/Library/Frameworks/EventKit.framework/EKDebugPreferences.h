/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:46:18 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CalPreferences;

@interface EKDebugPreferences : NSObject {

	CalPreferences* _preferences;

}

@property (assign,nonatomic) double travelLookaheadInterval; 
@property (assign,nonatomic) double availabilityFreshnessWindow; 
+(id)shared;
-(double)availabilityFreshnessWindow;
-(double)travelLookaheadInterval;
-(void)setTravelLookaheadInterval:(double)arg1 ;
-(void)setAvailabilityFreshnessWindow:(double)arg1 ;
-(id)init;
@end
