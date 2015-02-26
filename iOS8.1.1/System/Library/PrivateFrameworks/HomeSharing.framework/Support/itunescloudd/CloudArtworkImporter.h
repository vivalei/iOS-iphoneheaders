/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class ML3MusicLibrary, NSURLSession, NSObject, CloudArtworkOperationQueue, NSMutableDictionary, NSString, MSVWatchdog;

@interface CloudArtworkImporter : NSObject {

	ML3MusicLibrary* _musicLibrary;
	long long _sourceType;
	NSURLSession* _artworkDownloadSession;
	NSObject*<OS_dispatch_queue> _artworkDownloadAccessQueue;
	CloudArtworkOperationQueue* _artworkDownloadOperationQueue;
	NSMutableDictionary* _artworkDownloadOperationMap;
	NSString* _powerAssertionIdentifier;
	MSVWatchdog* _artworkDownloadWatchdog;

}

@property (nonatomic,readonly) ML3MusicLibrary * musicLibrary;                                        //@synthesize musicLibrary=_musicLibrary - In the implementation block
@property (nonatomic,readonly) long long sourceType;                                                  //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,retain) NSURLSession * artworkDownloadSession;                                   //@synthesize artworkDownloadSession=_artworkDownloadSession - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> artworkDownloadAccessQueue;                 //@synthesize artworkDownloadAccessQueue=_artworkDownloadAccessQueue - In the implementation block
@property (nonatomic,retain) CloudArtworkOperationQueue * artworkDownloadOperationQueue;              //@synthesize artworkDownloadOperationQueue=_artworkDownloadOperationQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * artworkDownloadOperationMap;                       //@synthesize artworkDownloadOperationMap=_artworkDownloadOperationMap - In the implementation block
@property (nonatomic,copy) NSString * powerAssertionIdentifier;                                       //@synthesize powerAssertionIdentifier=_powerAssertionIdentifier - In the implementation block
@property (nonatomic,retain) MSVWatchdog * artworkDownloadWatchdog;                                   //@synthesize artworkDownloadWatchdog=_artworkDownloadWatchdog - In the implementation block
-(id)initWithMusicLibrary:(id)arg1 sourceType:(long long)arg2 ;
-(void)importItemArtworkForCloudID:(unsigned long long)arg1 token:(id)arg2 mediaType:(unsigned)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)importScreenshotForCloudID:(unsigned long long)arg1 token:(id)arg2 mediaType:(unsigned)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)importCloudArtworkForRequests:(id)arg1 ;
-(void)cancelAllImports;
-(void)setArtworkDownloadSession:(NSURLSession *)arg1 ;
-(void)setArtworkDownloadAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setArtworkDownloadOperationQueue:(CloudArtworkOperationQueue *)arg1 ;
-(CloudArtworkOperationQueue *)artworkDownloadOperationQueue;
-(void)setArtworkDownloadOperationMap:(NSMutableDictionary *)arg1 ;
-(void)setArtworkDownloadWatchdog:(MSVWatchdog *)arg1 ;
-(MSVWatchdog *)artworkDownloadWatchdog;
-(NSObject*<OS_dispatch_queue>)artworkDownloadAccessQueue;
-(void)_cellularDataRestrictionDidChange:(id)arg1 ;
-(NSMutableDictionary *)artworkDownloadOperationMap;
-(NSURLSession *)artworkDownloadSession;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)sourceType;
-(ML3MusicLibrary *)musicLibrary;
-(NSString *)powerAssertionIdentifier;
-(void)setPowerAssertionIdentifier:(NSString *)arg1 ;
@end
