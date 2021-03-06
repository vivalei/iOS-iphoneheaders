/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PUFeedPreheatManager.h>

@class NSMutableDictionary, NSMutableIndexSet;

@interface PUFeedDefaultPreheatManager : PUFeedPreheatManager {

	NSMutableDictionary* _currentPreheatedAssetsByFormat;
	NSMutableDictionary* _nextPreheatedAssetsByFormat;
	NSMutableIndexSet* _fastImageFormats;

}
-(void).cxx_destruct;
-(id)initWithImageManager:(id)arg1 ;
-(void)willPerformUpdateRequest;
-(bool)shouldUpdatePreheatedAssetsForIndexPath:(id)arg1 elementKind:(id)arg2 ;
-(void)preheatAsset:(id)arg1 fastImageFormat:(int)arg2 qualityImageFormat:(int)arg3 ;
-(void)didPerformUpdateRequest;
@end

