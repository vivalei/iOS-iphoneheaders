/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLManagedObjectContextPTPNotificationDelegate.h>

@protocol PhotoLibraryPTPDelegate;
@class NSObject, NSArray, NSString, NSMutableArray, PLPhotoLibrary, NSFileManager, PLManagedObjectContext;

@interface PLPTPdAssetManager : NSObject <PLManagedObjectContextPTPNotificationDelegate> {

	NSObject<PhotoLibraryPTPDelegate>* _delegate;
	NSArray* _albumObjectIDs;
	NSString* _firstDCIMFolderServiced;
	NSMutableArray* _inflightAssets;
	PLPhotoLibrary* _photoLibrary;
	NSFileManager* fileManager;

}

@property (assign,nonatomic) NSObject<PhotoLibraryPTPDelegate> * delegate; 
@property (readonly) PLManagedObjectContext * managedObjectContext; 
@property (nonatomic,readonly) NSArray * albumObjectIDs; 
@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,retain) NSFileManager * fileManager; 
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)managedObjectContext;
-(id)photoLibrary;
-(void)managedObjectContext:(id)arg1 libraryChangedWithInsertedAssets:(id)arg2 deletedAssets:(id)arg3 changedAssets:(id)arg4 ;
-(void)setFileManager:(id)arg1 ;
-(id)fileManager;
-(id)albumObjectIDs;
-(void)photoLibraryAvailabilityChangedNotification;
-(id)albumHandles;
-(id)infoForAlbum:(NSObject*)arg1 ;
-(id)associationsInAlbum:(NSObject*)arg1 ;
-(id)assetsInAssociation:(NSObject*)arg1 ;
-(id)infoForAsset:(NSObject*)arg1 ;
-(void)deleteAsset:(NSObject*)arg1 ;
-(id)_ptpInformationForAllAssets;
-(void)_performBlockAndWait:(/*^block*/ id)arg1 ;
-(void)_performTransactionAndWait:(/*^block*/ id)arg1 ;
-(id)ptpInformationForPhotoWithObjectID:(id)arg1 ;
-(id)ptpInformationForFilesInDirectory:(id)arg1 ;
-(id)ptpThumbnailForPhotoWithKey:(NSObject*)arg1 ;
-(BOOL)ptpDeletePhotoWithKey:(NSObject*)arg1 andExtension:(id)arg2 ;
-(void)setPtpDelegate:(id)arg1 ;
-(id)ptpInformationForPhotosWithPrimaryKeys:(id)arg1 ;
-(BOOL)ptpCanDeleteFiles;
-(BOOL)libraryIsAvailable;
-(id)_allAssetObjectIDs;
-(BOOL)_isPTPAlbum:(id)arg1 ;
@end
