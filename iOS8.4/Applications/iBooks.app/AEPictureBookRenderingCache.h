/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:29 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <iBooks/IMRenderingCache.h>
#import <iBooks/IMThumbnailRenderingCache.h>

@class BKPictureBookViewGeometry, NSMutableDictionary, NSOperationQueue, NSString;

@interface AEPictureBookRenderingCache : IMRenderingCache <IMThumbnailRenderingCache> {

	unsigned _upsellPageNumber;
	BKPictureBookViewGeometry* _layoutGeometry;
	NSMutableDictionary* _decodersDict;
	NSOperationQueue* _accessQueue;
	char _hasCelestial;

}

@property (assign,nonatomic) unsigned upsellPageNumber;                               //@synthesize upsellPageNumber=_upsellPageNumber - In the implementation block
@property (nonatomic,retain) BKPictureBookViewGeometry * layoutGeometry;              //@synthesize layoutGeometry=_layoutGeometry - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) CGSize masterImageSize; 
-(void)storeImage:(id)arg1 forKey:(id)arg2 size:(CGSize)arg3 format:(int)arg4 ;
-(void)_histogramForImage:(id)arg1 result:(unsigned*)arg2 size:(unsigned long)arg3 ;
-(void)setLayoutGeometry:(BKPictureBookViewGeometry *)arg1 ;
-(unsigned)upsellPageNumber;
-(void)setUpsellPageNumber:(unsigned)arg1 ;
-(id)thumbnailForPage:(unsigned)arg1 asset:(id)arg2 size:(CGSize)arg3 renderingCacheCallbackTarget:(id)arg4 renderingCacheCallbackContext:(id)arg5 options:(int)arg6 priority:(int)arg7 ;
-(id)snapshotForBookInfo:(id)arg1 pageNumber:(int)arg2 size:(CGSize)arg3 maxSize:(CGSize)arg4 isRight:(char)arg5 zoomScale:(float)arg6 applyMaskAndGutter:(char)arg7 ;
-(id)anySnapshotForBookInfo:(id)arg1 pageNumber:(int)arg2 ;
-(void)resetPrioritiesForPageNumber:(int)arg1 ;
-(void)generateSnapshotWithAsset:(id)arg1 size:(CGSize)arg2 pageNumber:(int)arg3 ;
-(void)generateMasterImageForPageNumber:(int)arg1 asset:(id)arg2 priority:(int)arg3 callbackBlock:(/*^block*/id)arg4 ;
-(BKPictureBookViewGeometry *)layoutGeometry;
-(id)_scheduleRenderWithKey:(id)arg1 options:(int)arg2 size:(CGSize)arg3 assetID:(id)arg4 documentUrl:(id)arg5 pageNumber:(int)arg6 priority:(int)arg7 target:(id)arg8 context:(id)arg9 ;
-(id)_fetchImageForKey:(id)arg1 size:(CGSize)arg2 ;
-(id)upsellThumbnailForAsset:(id)arg1 size:(CGSize)arg2 ;
-(id)whitePageForSize:(CGSize)arg1 right:(char)arg2 scale:(float)arg3 contentSize:(CGSize)arg4 applyMaskAndGutter:(char)arg5 ;
-(id)_applyMaskAndGutter:(CGImageRef)arg1 isRight:(char)arg2 contentSize:(CGSize)arg3 ;
-(id)_keyForAsset:(id)arg1 size:(CGSize)arg2 pageNumber:(unsigned)arg3 ;
-(id)imageForSize:(CGSize)arg1 data:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end

