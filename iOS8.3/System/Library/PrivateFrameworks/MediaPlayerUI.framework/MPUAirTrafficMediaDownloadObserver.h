/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:24:54 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUMediaDownloadObserver.h>

@class NSString;

@interface MPUAirTrafficMediaDownloadObserver : MPUMediaDownloadObserver {

	NSString* _assetIdentifier;
	double _lastDownloadProgress;

}
+(void)initialize;
+(void)registerObserver:(id)arg1 forAssetID:(id)arg2 ;
+(void)unregisterObserver:(id)arg1 forAssetID:(id)arg2 ;
+(void)connection:(id)arg1 updatedProgress:(id)arg2 ;
-(char)isPurchasing;
-(void)dealloc;
-(id)initWithAssetIdentifier:(id)arg1 ;
-(void)_onQueue_invalidate;
-(double)downloadProgress;
@end
