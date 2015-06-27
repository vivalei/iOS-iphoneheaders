/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:07 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSCalendar, NSObject;

@interface TSCECalendar : NSObject {

	NSCalendar* mCalendar;
	NSObject*<OS_dispatch_semaphore> mSem;

}
-(void)dealloc;
-(id)init;
-(void)setTimeZone:(id)arg1 ;
-(id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned)arg3 ;
-(id)components:(unsigned)arg1 fromDate:(id)arg2 ;
-(id)dateFromComponents:(id)arg1 ;
-(id)components:(unsigned)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned)arg4 ;
-(id)initWithCalendarIdentifier:(id)arg1 ;
@end
