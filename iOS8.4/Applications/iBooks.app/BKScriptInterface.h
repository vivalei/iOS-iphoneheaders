/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <iTunesStoreUI/SUScriptInterface.h>

@protocol BKPurchaseAnimator, OS_dispatch_queue, AEAssetAppearanceDelegate;
@class NSObject, UIImage, NSMutableDictionary;

@interface BKScriptInterface : SUScriptInterface {

	NSObject*<BKPurchaseAnimator> mPurchaseAnimator;
	CGRect _animationFrame;
	UIImage* _animationImage;
	NSObject*<OS_dispatch_queue> _observationQueue;
	int _observationCount;
	NSMutableDictionary* _purchasedDownloadInfos;
	char _purchaseInitiated;
	id<AEAssetAppearanceDelegate> _appearanceDelegate;

}

@property (assign,nonatomic,__weak) id<AEAssetAppearanceDelegate> appearanceDelegate;              //@synthesize appearanceDelegate=_appearanceDelegate - In the implementation block
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKey:(const char*)arg1 ;
-(id<AEAssetAppearanceDelegate>)appearanceDelegate;
-(void)setAppearanceDelegate:(id<AEAssetAppearanceDelegate>)arg1 ;
-(void)setPurchaseAnimator:(id)arg1 ;
-(void)startObservingPurchaseNotifications;
-(void)libraryLoadOperationCompleted:(id)arg1 ;
-(void)appearanceDidChange:(id)arg1 ;
-(void)_releasePurchaseState;
-(void)purchaseSuccessfulNotification:(id)arg1 ;
-(void)purchaseFailedNotification:(id)arg1 ;
-(void)stopObservingPurchaseNotifications;
-(void)ibPrePurchaseNotification:(id)arg1 ;
-(id)_artworkURLForElement:(id)arg1 ;
-(id)newDownloadInfoFromJSElement:(id)arg1 ;
-(void)ibAddPurchaseWithInfo:(id)arg1 ;
-(id)ibBookWithAdamId:(id)arg1 ;
-(id)ibContainsAdamIDs:(id)arg1 ;
-(void)ibAddExternalDownloads:(id)arg1 ;
-(id)ibClientVersion;
-(id)readingMode;
-(void)dealloc;
-(id)init;
-(void)openURL:(id)arg1 ;
-(void)performPurchaseAnimationForIdentifier:(id)arg1 style:(id)arg2 ;
-(id)screenReaderRunning;
@end

