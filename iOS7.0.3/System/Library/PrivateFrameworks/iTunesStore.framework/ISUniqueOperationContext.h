/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary;

@interface ISUniqueOperationContext : NSObject {

	NSMutableSet* _operations;
	NSMutableDictionary* _uniqueOperations;

}
-(void)dealloc;
-(id)init;
-(void)addOperation:(id)arg1 ;
-(void)removeOperation:(id)arg1 ;
-(unsigned)countOfOperations;
-(id)uniqueOperationForKey:(id)arg1 ;
-(void)setUniqueOperation:(id)arg1 forKey:(id)arg2 ;
-(BOOL)containsOperation:(id)arg1 ;
@end

