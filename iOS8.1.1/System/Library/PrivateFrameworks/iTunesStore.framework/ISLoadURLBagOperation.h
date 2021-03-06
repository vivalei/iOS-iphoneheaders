/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:03 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <iTunesStore/ISStoreURLOperationDelegate.h>

@class SSURLBagContext, ISURLBag, NSString;

@interface ISLoadURLBagOperation : ISOperation <ISStoreURLOperationDelegate> {

	SSURLBagContext* _context;
	ISURLBag* _outputBag;

}

@property (readonly) SSURLBagContext * context;                     //@synthesize context=_context - In the implementation block
@property (readonly) ISURLBag * URLBag; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(SSURLBagContext *)context;
-(void)run;
-(id)initWithBagContext:(id)arg1 ;
-(ISURLBag *)URLBag;
-(id)uniqueKey;
-(void)_setOutputURLBag:(id)arg1 ;
-(void)_postBagDidLoadNotificationWithURLBag:(id)arg1 ;
-(void)_sendPingsForURLBag:(id)arg1 ;
-(void)_addHeadersToRequestProperties:(id)arg1 ;
-(BOOL)_setURLBagWithDictionary:(id)arg1 response:(id)arg2 error:(id*)arg3 ;
-(void)operation:(id)arg1 willSendRequest:(id)arg2 ;
-(BOOL)operation:(id)arg1 shouldSetStoreFrontID:(id)arg2 ;
@end

