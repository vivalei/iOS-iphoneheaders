/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:44:22 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CMActivityManager : NSObject {

	id _internal;

}

@property (copy) id activityHandler; 
@property (getter=isActivityAvailable,nonatomic,readonly) char activityAvailable; 
-(char)isActivityAvailable;
-(int)overrideOscarSideband:(char)arg1 withState:(int)arg2 ;
-(void)setActivityHandler:(id)arg1 ;
-(id)activityHandler;
-(void)dealloc;
-(id)init;
@end
