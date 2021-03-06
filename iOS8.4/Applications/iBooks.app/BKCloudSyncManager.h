/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/IMCloudSyncControllerDelegate.h>
#import <iBooks/BKCloudSyncProcessorDelegate.h>

@protocol BKCloudSyncProcessorHelper;
@class IMCloudSyncController, IMCloudSyncErrorHandler, NSDate, NSString;

@interface BKCloudSyncManager : NSObject <IMCloudSyncControllerDelegate, BKCloudSyncProcessorDelegate> {

	IMCloudSyncController* _cloudSyncController;
	char _didInitialGetAll;
	IMCloudSyncErrorHandler* _cloudSyncErrorHandler;
	id<BKCloudSyncProcessorHelper> _processorHelper;
	NSDate* _lastSuccessfulSetAllTimestamp;

}

@property (nonatomic,retain) IMCloudSyncController * cloudSyncController;                        //@synthesize cloudSyncController=_cloudSyncController - In the implementation block
@property (assign,nonatomic,__weak) id<BKCloudSyncProcessorHelper> processorHelper;              //@synthesize processorHelper=_processorHelper - In the implementation block
@property (nonatomic,retain) IMCloudSyncErrorHandler * cloudSyncErrorHandler;                    //@synthesize cloudSyncErrorHandler=_cloudSyncErrorHandler - In the implementation block
@property (assign,nonatomic) char didInitialGetAll;                                              //@synthesize didInitialGetAll=_didInitialGetAll - In the implementation block
@property (nonatomic,retain) NSDate * lastSuccessfulSetAllTimestamp;                             //@synthesize lastSuccessfulSetAllTimestamp=_lastSuccessfulSetAllTimestamp - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)getForBook:(id)arg1 ;
-(void)setForBook:(id)arg1 ;
-(void)setAll;
-(void)getAll;
-(void)loadCloudSyncController;
-(void)loadErrorHandler;
-(void)_bookmarkUrlsChanged:(id)arg1 ;
-(IMCloudSyncController *)cloudSyncController;
-(void)setCloudSyncController:(IMCloudSyncController *)arg1 ;
-(void)setDidInitialGetAll:(char)arg1 ;
-(NSDate *)lastSuccessfulSetAllTimestamp;
-(IMCloudSyncErrorHandler *)cloudSyncErrorHandler;
-(void)setSyncingEnabledUserDefaults:(char)arg1 ;
-(id<BKCloudSyncProcessorHelper>)processorHelper;
-(void)cloudSyncAccountChanged;
-(void)showKillSwitchAlert;
-(void)setLastSuccessfulSetAllTimestamp:(NSDate *)arg1 ;
-(char)processor:(id)arg1 dispatchAsyncWithName:(id)arg2 block:(/*^block*/id)arg3 ;
-(char)isCollectionSyncEnabledWithProcessor:(id)arg1 ;
-(char)isAnnotationSyncEnabledWithProcessor:(id)arg1 ;
-(char)didInitialGetAll;
-(char)cloudSyncController:(id)arg1 shouldScheduleTransaction:(id)arg2 ;
-(char)cloudSyncController:(id)arg1 transactionDidFailWithError:(id)arg2 ;
-(void)cloudSyncController:(id)arg1 transactionDidFinish:(id)arg2 ;
-(void)setAllIfHaventDoneSoInAWhile;
-(void)disableCloudSyncAfterTimeout:(double)arg1 ;
-(void)setCloudSyncErrorHandler:(IMCloudSyncErrorHandler *)arg1 ;
-(void)setProcessorHelper:(id<BKCloudSyncProcessorHelper>)arg1 ;
-(void)dealloc;
-(id)init;
@end

