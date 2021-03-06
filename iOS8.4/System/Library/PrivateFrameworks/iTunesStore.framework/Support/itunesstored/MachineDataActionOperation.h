/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSMachineDataRequest, NSString;

@interface MachineDataActionOperation : ISOperation {

	BOOL _blocksPurchaseRequests;
	BOOL _hidesServerDrivenDialogs;
	SSMachineDataRequest* _request;
	/*^block*/id _resultBlock;
	NSString* _syncState;
	NSString* _userAgent;

}

@property (readonly) SSMachineDataRequest * machineDataRequest; 
@property (assign) BOOL blocksPurchaseRequests; 
@property (assign) BOOL hidesServerDrivenDialogs; 
@property (copy) id resultBlock; 
@property (copy) NSString * userAgent; 
@property (readonly) NSString * syncState; 
-(void)setBlocksPurchaseRequests:(BOOL)arg1 ;
-(void)setHidesServerDrivenDialogs:(BOOL)arg1 ;
-(BOOL)hidesServerDrivenDialogs;
-(BOOL)_provisionWithRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)_syncMachineWithRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)_eraseProvisioning;
-(BOOL)blocksPurchaseRequests;
-(BOOL)_shouldRetryAfterError:(id)arg1 ;
-(SSMachineDataRequest *)machineDataRequest;
-(void)dealloc;
-(void)run;
-(NSString *)syncState;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
-(void)setResultBlock:(id)arg1 ;
-(id)resultBlock;
-(id)uniqueKey;
-(id)initWithMachineDataRequest:(id)arg1 ;
@end

