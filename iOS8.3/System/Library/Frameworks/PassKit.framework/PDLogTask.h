/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:05:38 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <passd/passd-Structs.h>
#import <passd/PDWebServiceConnectionTask.h>

@class NSArray;

@interface PDLogTask : PDWebServiceConnectionTask {

	NSArray* _logs;

}

@property (nonatomic,retain) NSArray * logs;              //@synthesize logs=_logs - In the implementation block
+(id)taskWithWebService:(id)arg1 error:(id)arg2 ;
+(id)taskWithWebService:(id)arg1 warnings:(id)arg2 ;
-(char)coalescesWithTaskSubclass:(Class)arg1 ;
-(int)actionForInactiveTask:(id)arg1 ;
-(void)mergeWithNewerTask:(id)arg1 ;
-(int)actionForActiveTask:(id)arg1 ;
-(unsigned)numberOfBackoffLevels;
-(const SCD_Struct_PD2*)backoffLevels;
-(void)handleResponse:(id)arg1 data:(id)arg2 ;
-(id)endpointComponents;
-(void)setLogs:(NSArray *)arg1 ;
-(char)_matchesLogTask:(id)arg1 ;
-(char)_hasRoomForAdditionalLogs;
-(NSArray *)logs;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)method;
-(void)handleError:(id)arg1 ;
-(id)bodyDictionary;
@end

