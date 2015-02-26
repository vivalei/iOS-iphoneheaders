/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/NSCopying.h>

@interface EventMonitorEvent : NSObject <NSCopying> {

	double _lastOccurrenceCheckTime;
	long long _pollInterval;
	BOOL _shouldKeepDaemonAlive;

}

@property (nonatomic,readonly) BOOL hasOccurred; 
@property (assign,nonatomic) long long pollInterval;                                                                                           //@synthesize pollInterval=_pollInterval - In the implementation block
@property (assign,nonatomic) BOOL shouldKeepDaemonAlive;                                                                                       //@synthesize shouldKeepDaemonAlive=_shouldKeepDaemonAlive - In the implementation block
@property (assign,setter=_setLastOccurrenceCheckTime:,getter=_lastOccurrenceCheckTime,nonatomic) double _lastOccurrenceCheckTime;              //@synthesize lastOccurrenceCheckTime=_lastOccurrenceCheckTime - In the implementation block
-(void)_setLastOccurrenceCheckTime:(double)arg1 ;
-(BOOL)shouldKeepDaemonAlive;
-(double)_lastOccurrenceCheckTime;
-(long long)pollInterval;
-(BOOL)hasOccurred;
-(void)setPollInterval:(long long)arg1 ;
-(void)setShouldKeepDaemonAlive:(BOOL)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)performAction;
@end
