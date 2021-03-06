/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKitLegacy/NSURLDownloadDelegate.h>

@class NSString;

@interface WebDownloadInternal : NSObject <NSURLDownloadDelegate> {

	id realDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRealDelegate:(id)arg1 ;
-(void)download:(id)arg1 didFailWithError:(id)arg2 ;
-(void)downloadDidBegin:(id)arg1 ;
-(id)download:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)download:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)download:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)download:(id)arg1 didReceiveDataOfLength:(unsigned long long)arg2 ;
-(BOOL)download:(id)arg1 shouldDecodeSourceDataOfMIMEType:(id)arg2 ;
-(void)download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 ;
-(void)download:(id)arg1 didCreateDestination:(id)arg2 ;
-(void)downloadDidFinish:(id)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)download:(id)arg1 didCancelAuthenticationChallenge:(id)arg2 ;
@end

