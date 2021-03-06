/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:41 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKRenderStyle.h>

@interface VKRoadDrawStyle : VKRenderStyle {

	VKProfileSparseRamp<float>* width;
	VKProfileSparseRamp<float>* strokeWidth;
	VKProfileSparseRamp<float>* labelHeight;
	VKProfileSparseRamp<float>* widthDropoff;
	VKProfileSparseRamp<_VGLColor>* fillColor;
	VKProfileSparseRamp<_VGLColor>* strokeColor;
	VKProfileSparseRamp<signed char> simpleLine;
	VKProfileSparseRamp<int>* zIndices;
	VKProfileSparseRamp<int>* fillZIndices;
	VKProfileSparseRamp<signed char> strokeColorInterpolate;
	VKProfileSparseRamp<signed char> fillColorInterpolate;
	unsigned char railroadPattern;
	VKProfileSparseRamp<_VGLColor>* alternateFillColor;
	VKProfileSparseRamp<float>* patternScaler;
	VKProfileSparseRamp<float>* patternScalerQuantizationFactor;
	VKProfileSparseRamp<signed char> renderEndCaps;

}
+(int)renderStyleID;
-(unsigned char)railroadPattern;
-(char)visibleAtZoom:(float)arg1 ;
@end

