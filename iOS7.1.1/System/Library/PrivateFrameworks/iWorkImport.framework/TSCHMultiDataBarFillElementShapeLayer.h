/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHMultiDataAnimatingFrameLayer.h>
#import <iWorkImport/TSCHMultiDataElementShapeLayer.h>

@class TSCHMultiDataBarElementShapeLayer, CALayer, TSDFill;

@interface TSCHMultiDataBarFillElementShapeLayer : TSCHMultiDataAnimatingFrameLayer <TSCHMultiDataElementShapeLayer> {

	TSCHMultiDataBarElementShapeLayer* mShapeLayer;
	CALayer* mFillLayer;
	TSDFill* mFill;
	bool mAboveIntercept;
	TSDFill* _p_fill;

}

@property (assign,nonatomic) bool aboveIntercept; 
@property (nonatomic,retain) TSDFill * fill; 
@property (nonatomic,retain) TSDFill * p_fill;                 //@synthesize p_fill=_p_fill - In the implementation block
-(id)chartRep;
-(void)updateElementFrameToNullForSeries:(id)arg1 addingAnimationsToAnimationInfo:(id)arg2 ;
-(void)updateElementFrame:(CGRect)arg1 forSeries:(id)arg2 addingAnimationsToAnimationInfo:(id)arg3 ;
-(bool)aboveIntercept;
-(void)setAboveIntercept:(bool)arg1 ;
-(id)currentValueLayer;
-(void)setFill:(id)arg1 stroke:(id)arg2 withViewScale:(double)arg3 ;
-(bool)p_revealsFillLayer;
-(bool)p_hasNoFill;
-(bool)p_isColorFill;
-(bool)p_usesFillLayer;
-(id)p_imageWithFrame:(CGRect)arg1 ;
-(void)p_addAnimationsForLayer:(id)arg1 updatingFrame:(CGRect)arg2 toAnimationInfo:(id)arg3 ;
-(CGRect)p_fillFrameFromFrame:(CGRect)arg1 aboveIntercept:(bool)arg2 animationInfo:(id)arg3 ;
-(void)p_addAnimationsForUpdatingFillLayerFrame:(CGRect)arg1 image:(CGImageRef)arg2 toAnimationInfo:(id)arg3 ;
-(id)p_fill;
-(void)setP_fill:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)fill;
-(void)setContentsScale:(double)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)setFill:(id)arg1 ;
@end

