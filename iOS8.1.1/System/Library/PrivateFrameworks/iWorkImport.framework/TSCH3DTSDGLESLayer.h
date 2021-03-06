/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDGLLayer.h>
#import <iWorkImport/TSCH3DGLLayer.h>

@class TSCH3DLayerCacheLogic;

@interface TSCH3DTSDGLESLayer : TSDGLLayer <TSCH3DGLLayer> {

	TSCH3DLayerCacheLogic* mCacheLogic;

}
-(id)cacheLogic;
-(id)framebufferFromContext:(id)arg1 attributes:(const FramebufferAttributes*)arg2 ;
-(id)initWithLayerCacheLogicClass:(Class)arg1 ;
-(void)willDestroyFramebuffer:(id)arg1 session:(id)arg2 ;
-(void)presentLayerWithPresenterInfo:(const PresenterInfo*)arg1 ;
-(Class)layerDelegateClass;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(double)contentsScale;
-(void)setContentsScale:(double)arg1 ;
@end

