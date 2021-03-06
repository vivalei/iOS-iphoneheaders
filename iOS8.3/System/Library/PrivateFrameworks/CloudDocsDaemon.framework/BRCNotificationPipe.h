/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:03:15 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRItemNotificationSending.h>

@protocol BRItemNotificationReceiving, OS_dispatch_queue;
@class BRCNotificationManager, NSString, NSMutableSet, NSSet, BRNotificationQueue, NSObject, BRCRelativePath, BRCXPCClient, BRCItemID, NSNumber, BRCNotificationGatherer;

@interface BRCNotificationPipe : NSObject <BRItemNotificationSending> {

	BRCNotificationManager* _manager;
	int _watchKind;
	NSString* _watchNamePrefix;
	NSString* _watchForBundleID;
	NSMutableSet* _externalContainers;
	NSSet* _watchedContainers;
	NSSet* _watchedContainerIDs;
	unsigned _watchedContainersFlags;
	id<BRItemNotificationReceiving> _receiver;
	BRNotificationQueue* _notifs;
	NSObject*<OS_dispatch_queue> _queue;
	BRCRelativePath* _root;
	/*^block*/id _boostReply;
	BRCXPCClient* _client;
	unsigned short _watchItemOptions;
	BRCItemID* _oldWatchedAncestorItemID;
	BRCItemID* _watchedAncestorItemID;
	NSNumber* _watchedAncestorFileObjectID;
	NSString* _watchedAncestorFilenameToItem;
	BRCNotificationGatherer* _gatherer;
	char _hasUpdatesInFlight;
	char _volumeIsCaseSensitive;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(oneway void)invalidate;
-(void)close;
-(id)initWithXPCReceiver:(id)arg1 client:(id)arg2 root:(id)arg3 manager:(id)arg4 ;
-(id)initWithReceiver:(id)arg1 root:(id)arg2 manager:(id)arg3 ;
-(void)addNotification:(id)arg1 asDead:(char)arg2 ;
-(void)processUpdates:(id)arg1 ;
-(void)invalidateReceiverIfWatchingContainerID:(id)arg1 ;
-(void)addDequeueCallback:(/*^block*/id)arg1 ;
-(id)_initWithRoot:(id)arg1 manager:(id)arg2 ;
-(void)_addIntraContainerUpdatesFromInterContainerUpdate:(id)arg1 toArray:(id)arg2 ;
-(int)_isInterestingUpdate:(id)arg1 ;
-(void)watchItemAtURL:(id)arg1 container:(id)arg2 lookup:(id)arg3 options:(unsigned short)arg4 reply:(/*^block*/id)arg5 ;
-(void)_stopWatchingItems;
-(void)watchScopes:(unsigned short)arg1 trustedContainerIDs:(id)arg2 gatheringDone:(/*^block*/id)arg3 ;
-(void)watchItemInProcessAtURL:(id)arg1 options:(unsigned short)arg2 reply:(/*^block*/id)arg3 ;
-(void)watchScopes:(unsigned short)arg1 containerIDs:(id)arg2 gatheringDone:(/*^block*/id)arg3 ;
-(void)watchItemAtURL:(id)arg1 options:(unsigned short)arg2 reply:(/*^block*/id)arg3 ;
-(void)watchItemsNamesPrefixedBy:(id)arg1 inScopes:(unsigned short)arg2 containerIDs:(id)arg3 gatheringDone:(/*^block*/id)arg4 ;
-(void)watchScopes:(unsigned short)arg1 gatheringDone:(/*^block*/id)arg2 ;
-(void)boostPriority:(/*^block*/id)arg1 ;
-(void)_flush;
@end

