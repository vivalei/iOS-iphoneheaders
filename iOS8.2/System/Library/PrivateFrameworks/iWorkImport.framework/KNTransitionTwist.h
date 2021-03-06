/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/KNAnimationEffect.h>
#import <iWorkImport/KNFrameAnimator.h>
#import <iWorkImport/KNAnimationPluginArchiving.h>

@class TSDGLMotionBlurEffect, TSDGLShader, TSDGLDataBuffer, NSArray, NSString;

@interface KNTransitionTwist : KNAnimationEffect <KNFrameAnimator, KNAnimationPluginArchiving> {

	TSDGLMotionBlurEffect* _motionBlurEffect;
	TSDGLShader* _shader;
	TSDGLDataBuffer* _dataBuffer;
	NSArray* _bufferAttributes;
	unsigned _positionAttributeIndex;
	unsigned _texCoordAttributeIndex;
	unsigned _normalAttributeIndex;
	unsigned _prevPositionAttributeIndex;
	int _numPoints;
	float _twistyness;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animationFilter;
+(int)animationCategory;
+(id)supportedTypes;
+(id)localizedMenuString:(int)arg1 ;
+(unsigned)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2 ;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(char)arg5 version:(unsigned long long)arg6 ;
+(void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(char)arg5 version:(unsigned long long)arg6 ;
+(id)customAttributes;
+(id)defaultAttributes;
+(id)animationName;
-(void)p_teardown;
-(id)initWithAnimationContext:(id)arg1 ;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)animationDidEndWithContext:(id)arg1 ;
-(void)renderFrameWithContext:(id)arg1 ;
-(void)createArrays:(id)arg1 context:(id)arg2 ;
-(float)fx:(float)arg1 withPercent:(float)arg2 ;
-(void)drawGrid:(id)arg1 ;
-(void)update:(id)arg1 withContext:(id)arg2 ;
-(void)p_drawTwistWithPercent:(float)arg1 texture:(id)arg2 oldTexture:(id)arg3 ;
-(void)dealloc;
@end

