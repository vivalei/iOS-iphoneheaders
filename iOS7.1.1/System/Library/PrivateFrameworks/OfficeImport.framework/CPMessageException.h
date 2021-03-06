/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSException.h>

@class CPMessageEntry;

@interface CPMessageException : NSException {

	CPMessageEntry* m_entry;

}
+(void)initialize;
+(void)raise:(CPTaggedMessageStructure*)arg1 ;
+(id)exceptionWithMessage:(CPTaggedMessageStructure*)arg1 ;
+(id)exceptionWithUntaggedMessage:(id)arg1 ;
+(void)raiseUntaggedMessage:(id)arg1 ;
+(id)nsError:(id)arg1 domain:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)getEntry;
-(id)initWithMessage:(CPTaggedMessageStructure*)arg1 ;
-(id)initWithUntaggedMessage:(id)arg1 ;
@end

