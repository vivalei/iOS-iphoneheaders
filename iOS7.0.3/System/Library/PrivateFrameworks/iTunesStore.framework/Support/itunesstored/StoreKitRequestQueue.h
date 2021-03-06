/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:08:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <itunesstored/RequestQueue.h>
#import <iTunesStore/ISSingleton.h>

@interface StoreKitRequestQueue : RequestQueue <ISSingleton>
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg1 ;
-(void)requestProductsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)addOperation:(id)arg1 forMessage:(id)arg2 connection:(id)arg3 replyBlock:(/*^block*/ id)arg4 ;
-(void)addOperation:(id)arg1 forClient:(id)arg2 withMessageBlock:(/*^block*/ id)arg3 ;
-(id)init;
@end

