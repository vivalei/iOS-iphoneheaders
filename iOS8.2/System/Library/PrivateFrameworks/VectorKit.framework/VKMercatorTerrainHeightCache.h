/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:38 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VKMercatorTerrainHeightProvider;
#import <VectorKit/VectorKit-Structs.h>
@interface VKMercatorTerrainHeightCache : NSObject {

	id<VKMercatorTerrainHeightProvider> _heightProvider;
	map<vk::Anchor *, float, std::__1::less<vk::Anchor *>, std::__1::allocator<std::__1::pair<vk::Anchor *const, float> > >* _anchorToHeight;

}

@property (assign,nonatomic) id<VKMercatorTerrainHeightProvider> heightProvider;              //@synthesize heightProvider=_heightProvider - In the implementation block
-(void)setHeightProvider:(id<VKMercatorTerrainHeightProvider>)arg1 ;
-(void)invalidateRect:(const SCD_Struct_VK11*)arg1 ;
-(double)heightForAnchor:(Anchor*)arg1 ;
-(void)removeCachedValueForAnchor:(Anchor*)arg1 ;
-(id<VKMercatorTerrainHeightProvider>)heightProvider;
@end

