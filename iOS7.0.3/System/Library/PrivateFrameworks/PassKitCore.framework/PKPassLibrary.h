/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPassLibraryExportedInterface.h>

@protocol PKPassLibraryDelegate;
@class NSXPCConnection, PKImageSetCache, PKPassLibraryExportedProxy;

@interface PKPassLibrary : NSObject <PKPassLibraryExportedInterface> {

	NSXPCConnection* _connection;
	PKImageSetCache* _imageSetCache;
	PKPassLibraryExportedProxy* _exportedProxy;
	<PKPassLibraryDelegate>* _delegate;

}

@property (assign,nonatomic) <PKPassLibraryDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)isPassLibraryAvailable;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)catalogChanged:(id)arg1 withNewPasses:(id)arg2 ;
-(void)passAdded:(id)arg1 ;
-(void)passUpdated:(id)arg1 ;
-(void)passRemoved:(id)arg1 ;
-(void)_registerForApplicationLifeCycleNotifications;
-(void)_establishPassLibraryConnection;
-(void)_tearDownPassLibraryConnection;
-(void)_unregisterForApplicationLifeCycleNotifications;
-(/*^block*/ id)_errorHandlerWithSemaphore:(id)arg1 ;
-(void)_registerPass:(id)arg1 ;
-(void)removePassWithUniqueID:(id)arg1 ;
-(void)getContainmentStatusAndSettingsForPass:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(/*^block*/ id)_errorHandlerWithCompletion:(/*^block*/ id)arg1 ;
-(void)_sendResumed;
-(void)_sendSuspended;
-(void)_registerPasses:(id)arg1 ;
-(void)_postLibraryChangeWithUserInfo:(id)arg1 ;
-(id)_passesWithRetries:(unsigned)arg1 ;
-(void)getPassesAndCatalog:(BOOL)arg1 withRetries:(unsigned)arg2 withHandler:(/*^block*/ id)arg3 ;
-(void)getPassesAndCatalog:(BOOL)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)sendUserEditedCatalog:(id)arg1 ;
-(void)_getPassWithUniqueID:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)_getArchivedPassWithUniqueID:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)updateSettings:(int)arg1 forPassWithUniqueID:(id)arg2 ;
-(void)nukeDatabaseAndExit;
-(void)addFakeBulletin;
-(void)introduceDatabaseIntegrityProblem;
-(void)noteAccountChanged;
-(void)shuffleGroups:(int)arg1 ;
-(void)logDelayExitReasons;
-(void)clearBulletinRecordsForPassTypeID:(id)arg1 beforeDate:(id)arg2 ;
-(id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 ;
-(void)removePass:(id)arg1 ;
-(BOOL)containsPass:(id)arg1 ;
-(BOOL)replacePassWithPass:(id)arg1 ;
-(void)addPasses:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(id)passes;
-(id)passWithUniqueID:(id)arg1 ;
-(id)archivedPassForUniqueID:(id)arg1 ;
-(void)ingestPassData:(id)arg1 settings:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)notePassShared:(id)arg1 ;
-(void)updatePassWithUniqueID:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)getRouteRelevantPassesFromLocation:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)fetchContentForUniqueID:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(void)fetchImageSet:(int)arg1 forUniqueID:(id)arg2 displayProfile:(id)arg3 withCompletion:(/*^block*/ id)arg4 ;
-(void)flushReferencedUniqueID:(id)arg1 forCachedImageSet:(int)arg2 withDisplayProfile:(id)arg3 ;
-(BOOL)migrateData;
-(id)bulletinDictsForPassTypeID:(id)arg1 count:(unsigned)arg2 sinceDate:(id)arg3 ;
-(id)bulletinDictWithRecordID:(id)arg1 ;
-(id)bulletinSectionInfoForRecordID:(id)arg1 ;
-(id)diffForBulletinRecordID:(id)arg1 ;
@end

