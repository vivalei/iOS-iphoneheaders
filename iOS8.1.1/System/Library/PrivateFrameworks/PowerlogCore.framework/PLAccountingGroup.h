/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PowerlogCore-Structs.h>
#import <PowerlogCore/PLOperator.h>
#import <PowerlogCore/PLQLAccountingGroupProtocol.h>

@class NSString, NSArray;

@interface PLAccountingGroup : PLOperator <PLQLAccountingGroupProtocol> {

	BOOL _eventCacheOn;
	short _accountingGroupType;
	NSString* _accountingGroupName;
	NSArray* _eventCacheResults;
	PLTimeIntervalRange _eventCacheTimeRange;

}

@property (retain,readonly) NSString * accountingGroupName;              //@synthesize accountingGroupName=_accountingGroupName - In the implementation block
@property (readonly) short accountingGroupType;                          //@synthesize accountingGroupType=_accountingGroupType - In the implementation block
@property (assign) BOOL eventCacheOn;                                    //@synthesize eventCacheOn=_eventCacheOn - In the implementation block
@property (retain) NSArray * eventCacheResults;                          //@synthesize eventCacheResults=_eventCacheResults - In the implementation block
@property (assign) PLTimeIntervalRange eventCacheTimeRange;              //@synthesize eventCacheTimeRange=_eventCacheTimeRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entryEventNoneDefinitionAccountingGroup;
+(id)accountingGroupFromAGName:(id)arg1 ;
+(id)entryEventNoneDefinitions;
+(id)getAccountingGroupEntryKey;
-(NSString *)accountingGroupName;
-(id)getLastOpenSnapshotForIdentifier:(id)arg1 forEntryKey:(id)arg2 ;
-(short)accountingGroupType;
-(void)cacheEventsForTimeInterval:(PLTimeIntervalRange)arg1 ;
-(NSArray *)eventCacheResults;
-(void)setEventCacheResults:(NSArray *)arg1 ;
-(id)getLastSnapshot;
-(double)timeOfLastSnapshot;
-(double)timeOfLastEndedSnapshot;
-(BOOL)eventCacheOn;
-(PLTimeIntervalRange)eventCacheTimeRange;
-(void)logEventCacheStats:(id)arg1 ;
-(void)setEventCacheTimeRange:(PLTimeIntervalRange)arg1 ;
-(void)setEventCacheOn:(BOOL)arg1 ;
-(double)safeTimeForAccounting;
-(id)initWithName:(id)arg1 withAccountingGroupType:(short)arg2 ;
-(void)closeLastOpenEventAtTime:(id)arg1 ;
-(BOOL)useCachedEventsForTimeInterval:(PLTimeIntervalRange)arg1 ;
-(void)clearEventCache;
-(void)closeAllOpenEventAtTime:(id)arg1 withForceClose:(BOOL)arg2 ;
-(id)getLastOpenSnapshot;
-(void)addAccountingEvent:(id)arg1 withStartDate:(id)arg2 withStopDate:(id)arg3 withWeight:(double)arg4 ;
-(void)initOperatorDependancies;
-(void)addEventToEvents:(id)arg1 withIdentifier:(id)arg2 withStartDate:(id)arg3 withStopDate:(id)arg4 withWeight:(double)arg5 ;
-(void)batchAddAccountingEvents:(id)arg1 ;
-(id)getEventsInRange:(PLTimeIntervalRange)arg1 ;
@end
