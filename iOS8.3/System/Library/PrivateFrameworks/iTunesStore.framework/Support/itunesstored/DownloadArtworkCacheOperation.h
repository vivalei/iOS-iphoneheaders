/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:36:43 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSData, NSURL;

@interface DownloadArtworkCacheOperation : ISOperation {

	NSData* _artworkData;
	long long _downloadID;
	char _isStoreDownload;
	NSURL* _thumbnailURL;

}

@property (readonly) NSData * artworkData; 
-(void)_setArtworkData:(id)arg1 ;
-(id)initWithDownloadIdentifier:(long long)arg1 thumbnailURL:(id)arg2 ;
-(id)initWithStoreDownloadIdentifier:(long long)arg1 thumbnailURL:(id)arg2 ;
-(void)dealloc;
-(void)run;
-(NSData *)artworkData;
@end
