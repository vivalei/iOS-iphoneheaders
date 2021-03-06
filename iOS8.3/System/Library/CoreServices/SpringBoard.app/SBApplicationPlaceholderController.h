/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:39 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBIconObserver.h>
#import <SpringBoard/SBApplicationPlaceholderLifecycleObserver.h>

@class SBApplicationController, SBApplicationLibraryObserver, NSMutableDictionary, NSMutableSet, NSString;

@interface SBApplicationPlaceholderController : NSObject <SBIconObserver, SBApplicationPlaceholderLifecycleObserver> {

	SBApplicationController* _appController;
	SBApplicationLibraryObserver* _lsWorkspaceObserver;
	NSMutableDictionary* _placeholdersByBundleID;
	NSMutableSet* _pendingAdded;
	NSMutableSet* _pendingInstalled;
	NSMutableSet* _pendingCancelled;
	NSMutableSet* _removingPlaceholderProxies;
	char _hasDownloadedFromStore;
	char _usingNetwork;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)placeholderForDisplayID:(id)arg1 ;
-(id)placeholdersByDisplayID;
-(char)hasDownloadedStoreApplication;
-(void)iconAccessoriesDidUpdate:(id)arg1 ;
-(void)applicationPlaceholdersAdded:(id)arg1 ;
-(void)applicationPlaceholdersCancelled:(id)arg1 ;
-(void)applicationPlaceholdersInstalled:(id)arg1 ;
-(void)applicationPlaceholdersNetworkUsageChanged:(char)arg1 ;
-(void)_processPendingProxies;
-(void)_addPlaceholders:(id)arg1 ;
-(void)_removePlaceholders:(id)arg1 forInstall:(char)arg2 ;
-(void)_postPlaceholdersDidChangeForAdded:(id)arg1 modified:(id)arg2 removed:(id)arg3 ;
-(void)_swapDownloadingIcon:(id)arg1 forApplicationIcon:(id)arg2 placeholderProxy:(id)arg3 ;
-(void)_finishPlaceholder:(id)arg1 ;
-(void)_removeDownloadingIcons:(id)arg1 saveState:(char)arg2 ;
-(void)_downloadsEnded;
-(void)_dropGrabbedIconIfNecessary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(char)isUsingNetwork;
@end

