/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
@interface DDURLifier : NSObject
+(BOOL)urlIfyNode:(id)arg1 phoneNumberTypes:(unsigned)arg2 ;
+(BOOL)urlIfyNode:(id)arg1 ;
+(void)initialize;
+(id)urlMatchesForString:(id)arg1 phoneNumberTypes:(unsigned)arg2 ;
+(BOOL)urlIfyTextNode:(id)arg1 inNode:(id)arg2 forMatches:(id)arg3 ;
+(id)urlIfyNode:(id)arg1 usingScanner:(DDScannerRef)arg2 phoneNumberTypes:(unsigned)arg3 withReferenceDate:(id)arg4 andTimeZone:(id)arg5 ;
+(id)urlMatchesForString:(id)arg1 usingScanner:(DDScannerRef)arg2 withPhoneNumberTypes:(unsigned)arg3 referenceDate:(id)arg4 timeZone:(id)arg5 storingResultsIn:(id)arg6 ;
+(id)urlIfyNode:(id)arg1 usingScanner:(DDScannerRef)arg2 phoneNumberTypes:(unsigned)arg3 ;
+(id)urlMatchesForString:(id)arg1 ;
+(id)urlMatchesForString:(id)arg1 includingTel:(BOOL)arg2 ;
@end

