/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHUnretainedParent.h>

@class TSCH3DChartElementSceneObject, TSCH3DSceneRenderPipeline, TSCH3DChartElementProperties, TSCH3DRenderProcessor;

@interface TSCH3DChartElementSceneObjectProcessItems : NSObject <TSCHUnretainedParent> {

	TSCH3DChartElementSceneObject* mSceneObject;
	TSCH3DSceneRenderPipeline* mPipeline;
	TSCH3DChartElementProperties* mProperties;
	vector<TSCH3D::RenderElementInfo, std::__1::allocator<TSCH3D::RenderElementInfo> >* mDelayedItems;

}

@property (nonatomic,readonly) BOOL pushStates; 
@property (nonatomic,readonly) BOOL useBoundsGeometry; 
@property (nonatomic,readonly) BOOL geometryOnly; 
@property (nonatomic,readonly) TSCH3DRenderProcessor * processor; 
+(id)processItemsWithSceneObject:(id)arg1 properties:(id)arg2 pipeline:(id)arg3 ;
-(id)processor;
-(void)clearParent;
-(id)initWithSceneObject:(id)arg1 properties:(id)arg2 pipeline:(id)arg3 ;
-(BOOL)useBoundsGeometry;
-(BOOL)geometryOnly;
-(RenderElementInfo)elementInfoWithSeries:(id)arg1 position:(const tvec2<int>*)arg2 ;
-(BOOL)pushStates;
-(void)p_processElementInfoWithSeries:(id)arg1 position:(const tvec2<int>*)arg2 ;
-(void)performItemsProcessing;
-(BOOL)p_delayedItemsAreUnique;
-(void)processDelayedItemsWithOpacity:(float)arg1 ;
-(void)processItems;
-(void)dealloc;
-(id).cxx_construct;
-(void).cxx_destruct;
@end

