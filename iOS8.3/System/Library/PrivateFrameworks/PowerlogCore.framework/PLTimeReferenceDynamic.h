/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:08:23 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLTimeReference.h>

@class NSMutableDictionary, NSDate, NSMutableArray;

@interface PLTimeReferenceDynamic : PLTimeReference {

	NSMutableDictionary* _timeChangeBlocks;
	NSDate* _lastQueryTime;
	NSMutableArray* _offsetHistory;
	double _tooFarInFutureDistance;
	double _tooFarInPastDistance;
	double _accumulatedError;

}

@property (retain) NSMutableDictionary * timeChangeBlocks;              //@synthesize timeChangeBlocks=_timeChangeBlocks - In the implementation block
@property (assign) double tooFarInFutureDistance;                       //@synthesize tooFarInFutureDistance=_tooFarInFutureDistance - In the implementation block
@property (assign) double tooFarInPastDistance;                         //@synthesize tooFarInPastDistance=_tooFarInPastDistance - In the implementation block
@property (retain) NSDate * lastQueryTime;                              //@synthesize lastQueryTime=_lastQueryTime - In the implementation block
@property (assign) double accumulatedError;                             //@synthesize accumulatedError=_accumulatedError - In the implementation block
@property (retain) NSMutableArray * offsetHistory;                      //@synthesize offsetHistory=_offsetHistory - In the implementation block
+(double)nearestDistanceFromDate:(id)arg1 toRegionWithStartDate:(id)arg2 andEndDate:(id)arg3 ;
-(void)setOffset:(double)arg1 ;
-(id)initWithTimeManager:(id)arg1 entryDefinitionKey:(id)arg2 timeReferenceType:(int)arg3 ;
-(void)setTooFarInFutureDistance:(double)arg1 ;
-(void)setTooFarInPastDistance:(double)arg1 ;
-(void)setLastQueryTime:(NSDate *)arg1 ;
-(void)checkForTimeChangeWithCurrentTime:(id)arg1 ;
-(void)registerForTimeChangedNotification;
-(void)registerForTimeChangedCallbackWithIdentifier:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)initializeOffsetWithEntry:(id)arg1 ;
-(id)removeTimeOffsetFromReferenceTime:(id)arg1 ;
-(void)unregisterForTimeChangedCallbackWithIdentifier:(id)arg1 ;
-(NSMutableDictionary *)timeChangeBlocks;
-(NSMutableArray *)offsetHistory;
-(id)newOffsetEntry;
-(double)accumulatedError;
-(void)setAccumulatedError:(double)arg1 ;
-(void)cleanupOffsetHistory;
-(void)notifyTimeChange:(double)arg1 ;
-(void)setOffsetHistory:(NSMutableArray *)arg1 ;
-(double)tooFarInFutureDistance;
-(double)tooFarInPastDistance;
-(char)shouldQueryCurrentTime;
-(NSDate *)lastQueryTime;
-(void)setTimeChangeBlocks:(NSMutableDictionary *)arg1 ;
@end

