/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ABLECoreDuetUtils : NSObject
+(id)replaceNanWithNullInArray:(id)arg1 ;
+(id)makeAlignedHistoryWindowForMinutes:(unsigned long long)arg1 fromBefore:(id)arg2 andRecurrencePeriod:(double)arg3 ;
+(id)replaceNullWithNanInArray:(id)arg1 ;
+(id)makeAllTimeHistoryWindowWithRecurrencePeriod:(double)arg1 ;
+(id)makeHistoryWindowForDayDaysAgo:(unsigned long long)arg1 from:(id)arg2 andRecurrencePeriod:(double)arg3 ;
+(id)makeHistoryWindowForWholeDayDaysAgo:(unsigned long long)arg1 from:(id)arg2 ;
+(id)makeHistoryWindowForDays:(unsigned long long)arg1 andRecurrencePeriod:(double)arg2 ;
+(id)makeAlignedHistoryWindowForMinutes:(unsigned long long)arg1 from:(id)arg2 andRecurrencePeriod:(double)arg3 ;
+(id)makeHistoryWindowForMinutes:(unsigned long long)arg1 fromBefore:(id)arg2 andRecurrencePeriod:(double)arg3 ;
+(id)makeAlignedHistoryWindowForMinutes:(unsigned long long)arg1 andRecurrencePeriod:(double)arg2 ;
+(id)generateDateArrayFromHistoryWindow:(id)arg1 ;
@end

