/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:08 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCHChartGridValue : NSObject
+(id)durationValueWithDouble:(double)arg1 ;
+(id)dateValueWithDouble:(double)arg1 ;
+(id)numberValueWithDouble:(double)arg1 ;
+(id)dateValueWithNSDate:(id)arg1 ;
+(id)NSDateFromGridValue:(id)arg1 ;
+(id)NSDateConvertedFromGridValue:(id)arg1 ;
+(id)instanceWithArchive:(const GridValue*)arg1 ;
+(void)saveGridValue:(id)arg1 toArchive:(GridValue*)arg2 ;
-(id)init;
-(id)initWithArchive:(const GridValue*)arg1 ;
@end
