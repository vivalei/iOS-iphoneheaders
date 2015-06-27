/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:40 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocs/BRItemNotificationReceiving.h>

@protocol OS_dispatch_queue, BRNotificationReceiverDelegate, OS_dispatch_source;
@class NSObject, BRNotificationQueue, NSMutableArray, NSMutableDictionary, NSString;

@interface BRNotificationReceiver : NSObject <BRItemNotificationReceiving> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _ipcQueue;
	NSObject*<OS_dispatch_queue> _invalidationQueue;
	BRNotificationQueue* _notifs;
	NSMutableArray* _senders;
	int _gatherDones;
	id<BRNotificationReceiverDelegate> _delegate;
	NSObject*<OS_dispatch_source> _source;
	NSObject*<OS_dispatch_source> _timer;
	unsigned _receivedChanges;
	unsigned _batchingChanges;
	double _batchingDelay;
	unsigned long long _lastBatchTime;
	NSMutableDictionary* _progressObserverByID;
	NSMutableDictionary* _itemInTransferByID;
	Ai _suspendCount;
	int _networkReachabilityToken;
	char _isNetworkReachable;

}

@property (nonatomic,readonly) unsigned pendingCount; 
@property (assign,nonatomic) unsigned batchingChanges;                                 //@synthesize batchingChanges=_batchingChanges - In the implementation block
@property (assign,nonatomic) double batchingDelay;                                     //@synthesize batchingDelay=_batchingDelay - In the implementation block
@property (nonatomic,retain) id<BRNotificationReceiverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id<BRNotificationReceiverDelegate>)arg1 ;
-(id)init;
-(id<BRNotificationReceiverDelegate>)delegate;
-(oneway void)invalidate;
-(void)flush;
-(void)suspend;
-(void)resume;
-(void)_signalSourceIfNeeded;
-(id)_getSender;
-(void)networkDidChangeReachabilityStatusTo:(char)arg1 ;
-(void)invalidateAndNotify:(char)arg1 ;
-(void)_receiveUpdates:(id)arg1 ;
-(unsigned)pendingCount;
-(char)watchUbiquitousScopes:(id)arg1 bundleID:(id)arg2 predicate:(id)arg3 ;
-(oneway void)invalidateAndDontNotifyDelegate;
-(void)receiveStitchingUpdates:(id)arg1 ;
-(void)disableUpdatesFromIPCBeforeStitching;
-(void)enableUpdatesFromIPCAfterStitching;
-(unsigned)batchingChanges;
-(void)setBatchingChanges:(unsigned)arg1 ;
-(double)batchingDelay;
-(void)setBatchingDelay:(double)arg1 ;
-(void)receiveUpdates:(id)arg1 logicalExtensions:(id)arg2 physicalExtensions:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)dequeue:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(void)finalize;
@end
