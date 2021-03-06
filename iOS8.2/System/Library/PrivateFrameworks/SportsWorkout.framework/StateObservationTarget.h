/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:05 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SportsWorkout/ObservationTarget.h>

@class NSString;

@interface StateObservationTarget : ObservationTarget {

	NSString* _oldState;
	NSString* _currentState;

}

@property (nonatomic,retain) NSString * oldState;                  //@synthesize oldState=_oldState - In the implementation block
@property (nonatomic,retain) NSString * currentState;              //@synthesize currentState=_currentState - In the implementation block
+(id)targetWithOldState:(id)arg1 newState:(id)arg2 selector:(SEL)arg3 ;
-(void)dealloc;
-(id)description;
-(NSString *)currentState;
-(void)setCurrentState:(NSString *)arg1 ;
-(void)setOldState:(NSString *)arg1 ;
-(NSString *)oldState;
@end

