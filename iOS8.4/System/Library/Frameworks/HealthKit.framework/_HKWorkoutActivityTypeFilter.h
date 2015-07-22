/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@interface _HKWorkoutActivityTypeFilter : _HKFilter {

	unsigned long long _workoutActivityType;
	unsigned long long _operatorType;

}

@property (nonatomic,readonly) unsigned long long workoutActivityType;              //@synthesize workoutActivityType=_workoutActivityType - In the implementation block
@property (nonatomic,readonly) unsigned long long operatorType;                     //@synthesize operatorType=_operatorType - In the implementation block
+(id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 ;
+(id)filterWithWorkoutActivityType:(unsigned long long)arg1 operatorType:(unsigned long long)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)predicateWithHealthDaemon:(id)arg1 ;
-(unsigned long long)operatorType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(unsigned long long)workoutActivityType;
@end
