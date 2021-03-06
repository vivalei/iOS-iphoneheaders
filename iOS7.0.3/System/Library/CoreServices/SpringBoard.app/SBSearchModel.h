/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Search/SPSearchAgent.h>
#import <ChatKit/SPDaemonQueryDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSTimer, NSDate, CPLRUDictionary, NSObject, NSOperationQueue, NSOperation;

@interface SBSearchModel : SPSearchAgent <SPDaemonQueryDelegate> {

	NSTimer* _clearSearchTimer;
	NSDate* _clearSearchDate;
	CPLRUDictionary* _cachedResultImages;
	NSObject<OS_dispatch_semaphore>* _cacheResultLock;
	NSOperationQueue* _prefetchOperationQueue;
	NSOperationQueue* _loadOperationQueue;
	NSOperation* _waitOperation;
	void* _addressBook;

}
+(id)sharedInstance;
-(void)resetClearSearchTimer;
-(void)_updateClearSearchTimerFireDate;
-(void)_clearSearchTimerFired;
-(id)_customImageForPath:(id)arg1 ;
-(id)_uniqueKeyForResult:(id)arg1 withSearchDomain:(unsigned)arg2 ;
-(void)_cacheImage:(id)arg1 forKey:(id)arg2 withCompletionBlock:(/*^block*/ id)arg3 ;
-(id)_imageForResult:(id)arg1 inSection:(id)arg2 withCompletionBlock:(/*^block*/ id)arg3 ;
-(void)fetchImageForResult:(id)arg1 inSection:(id)arg2 withCompletionBlock:(/*^block*/ id)arg3 ;
-(void)startClearSearchTimer;
-(id)launchingURLForResult:(id)arg1 withDisplayIdentifier:(id)arg2 andSection:(id)arg3 ;
-(id)cachedImageForResult:(id)arg1 inSection:(id)arg2 ;
-(void)cancelPrefetchingAndStartNewBatch;
-(BOOL)prefetchImageForResult:(id)arg1 inSection:(id)arg2 ;
-(id)operationFetchingImageForResult:(id)arg1 inSection:(id)arg2 withCompletionBlock:(/*^block*/ id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)handleOptionsForNewSections:(id)arg1 ;
-(id)currentToken;
@end

