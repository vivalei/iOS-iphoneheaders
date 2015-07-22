/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@class HKObject;

@interface _HDDataDeletionJournalEntry : HDJournalEntry {

	BOOL _restrictSource;
	HKObject* _dataObject;

}

@property (nonatomic,readonly) HKObject * dataObject;              //@synthesize dataObject=_dataObject - In the implementation block
@property (nonatomic,readonly) BOOL restrictSource;                //@synthesize restrictSource=_restrictSource - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)behavior;
+(void)applyEntries:(id)arg1 withDaemon:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDataObject:(id)arg1 restrictSource:(BOOL)arg2 ;
-(HKObject *)dataObject;
-(BOOL)restrictSource;
@end
