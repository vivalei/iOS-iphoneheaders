/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDStyledLayout.h>

@class TSDMutableStroke;

@interface TSDMediaLayout : TSDStyledLayout {

	CGRect mCachedAlignmentFrame;
	struct {
		unsigned alignmentFrame : 1;
	}  mMediaInvalidFlags;
	TSDMutableStroke* mDynamicStroke;
	char mShouldRenderFrameStroke;
	CGRect mBoundsForStandardKnobs;

}

@property (assign,nonatomic) CGRect boundsForStandardKnobs; 
@property (assign,nonatomic) char shouldRenderFrameStroke; 
-(CGRect)boundsForStandardKnobs;
-(void)processChangedProperty:(int)arg1 ;
-(CGRect)alignmentFrame;
-(CGRect)alignmentFrameInRoot;
-(char)isStrokeBeingManipulated;
-(void)dynamicStrokeWidthChangeDidBegin;
-(void)dynamicStrokeWidthUpdateToValue:(float)arg1 ;
-(void)dynamicStrokeWidthChangeDidEnd;
-(char)supportsRotation;
-(void)invalidateAlignmentFrame;
-(char)shouldRenderFrameStroke;
-(void)setShouldRenderFrameStroke:(char)arg1 ;
-(void)setBoundsForStandardKnobs:(CGRect)arg1 ;
-(CGRect)computeAlignmentFrameInRoot:(char)arg1 ;
-(id)initWithInfo:(id)arg1 ;
-(id)stroke;
-(void)setGeometry:(id)arg1 ;
-(id)mediaInfo;
@end
