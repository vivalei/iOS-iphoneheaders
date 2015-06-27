/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:47:16 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EKAlarm;

@interface EKUIAlarm : NSObject {

	char _isLeaveNowAlarm;
	EKAlarm* _alarm;

}

@property (nonatomic,readonly) char isLeaveNowAlarm;              //@synthesize isLeaveNowAlarm=_isLeaveNowAlarm - In the implementation block
@property (nonatomic,readonly) EKAlarm * alarm;                   //@synthesize alarm=_alarm - In the implementation block
-(id)initWithAlarm:(id)arg1 ;
-(id)initLeaveNowAlarm;
-(id)localizedDescriptionAllDay:(char)arg1 ;
-(char)isLeaveNowAlarm;
-(EKAlarm *)alarm;
-(id)description;
@end
