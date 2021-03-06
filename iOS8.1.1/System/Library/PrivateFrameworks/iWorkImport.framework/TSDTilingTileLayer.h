/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:35 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDNoDefaultImplicitActionLayer.h>

@interface TSDTilingTileLayer : TSDNoDefaultImplicitActionLayer {

	unsigned long long mIndex;
	BOOL mNeedsTileDisplay;
	SCD_Struct_TS255 mLocation;

}

@property (assign,nonatomic) unsigned long long index; 
@property (assign,nonatomic) BOOL needsTileDisplay; 
@property (assign,nonatomic) SCD_Struct_TS255 location; 
-(void)setNeedsLayoutForTilingLayers;
-(void)cancelLayoutForTilingLayers;
-(void)updateFrameWithTileSize:(CGSize)arg1 tilesWide:(unsigned long long)arg2 tilesHigh:(unsigned long long)arg3 ;
-(void)setNeedsTileDisplay:(BOOL)arg1 ;
-(BOOL)needsTileDisplay;
-(void)setNeedsDisplayInRectIgnoringBackground:(CGRect)arg1 ;
-(id)tileContentsLayer;
-(void)display;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(unsigned long long)index;
-(id)hitTest:(CGPoint)arg1 ;
-(SCD_Struct_TS255)location;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setLocation:(SCD_Struct_TS255)arg1 ;
@end

