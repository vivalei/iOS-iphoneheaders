/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:19 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailServices/MSXPCService.h>
#import <MailServices/MSDSearchResultsProtocol.h>

@protocol MSSearchDelegate;
@class NSString;

@interface MSSearch : MSXPCService <MSDSearchResultsProtocol> {

	id<MSSearchDelegate> _delegate;

}

@property (assign,nonatomic) id<MSSearchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setUnitTestingResultsArray:(id)arg1 ;
+(id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 options:(unsigned long long)arg3 delegate:(id)arg4 ;
+(id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 shouldFetch:(BOOL)arg3 onServer:(BOOL)arg4 delegate:(id)arg5 ;
+(id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 shouldFetch:(BOOL)arg3 onServer:(BOOL)arg4 onlyInboxes:(BOOL)arg5 delegate:(id)arg6 ;
-(void)cancel;
-(void)dealloc;
-(void)setDelegate:(id<MSSearchDelegate>)arg1 ;
-(id<MSSearchDelegate>)delegate;
-(id)_initWithDelegate:(id)arg1 ;
-(void)_findMessageData:(id)arg1 matchingCriterion:(id)arg2 options:(unsigned long long)arg3 ;
-(id)newConnectionForInterface:(id)arg1 ;
-(void)foundResults:(id)arg1 error:(id)arg2 ;
-(void)_delegateDidFinishWithError:(id)arg1 ;
-(void)_delegateDidFindResults:(id)arg1 ;
-(BOOL)_unitTestsAreEnabled;
-(id)_generateUnitTestReplyForMethod:(id)arg1 arg:(id)arg2 error:(id*)arg3 ;
-(void)_generateUnitTestResponsesForResultArray:(id)arg1 ;
@end
