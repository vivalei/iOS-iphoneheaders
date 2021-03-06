/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:48 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDGLParticleSystem.h>

@class TSDGLVoronoiTriangleData;

@interface KNBuildCrumbleSystem : TSDGLParticleSystem {

	TSDGLVoronoiTriangleData* _voronoiTriangleData;
	SCD_Struct_KN620* _cellParameters;
	double _speedMaxLimiter;
	double _speedMax;
	double _rotationMax;
	double _lifeSpanRandomness;
	double _lifeSpanDelay;

}

@property (assign,nonatomic) double speedMaxLimiter;                 //@synthesize speedMaxLimiter=_speedMaxLimiter - In the implementation block
@property (assign,nonatomic) double speedMax;                        //@synthesize speedMax=_speedMax - In the implementation block
@property (assign,nonatomic) double rotationMax;                     //@synthesize rotationMax=_rotationMax - In the implementation block
@property (assign,nonatomic) double lifeSpanRandomness;              //@synthesize lifeSpanRandomness=_lifeSpanRandomness - In the implementation block
@property (assign,nonatomic) double lifeSpanDelay;                   //@synthesize lifeSpanDelay=_lifeSpanDelay - In the implementation block
+(unsigned long long)numberOfVerticesPerParticle;
+(BOOL)willOverrideGeometry;
-(double)speedMax;
-(double)rotationMax;
-(SCD_Struct_TS471)vertexPositionAtVertexIndex:(unsigned long long)arg1 particleIndexPoint:(CGPoint)arg2 ;
-(SCD_Struct_TS471)centerAtIndexPoint:(CGPoint)arg1 ;
-(SCD_Struct_TS475)speedAtIndexPoint:(CGPoint)arg1 ;
-(SCD_Struct_TS475)rotationAtIndexPoint:(CGPoint)arg1 ;
-(SCD_Struct_TS471)lifeSpanAtIndexPoint:(CGPoint)arg1 ;
-(void)setRotationMax:(double)arg1 ;
-(void)setLifeSpanDelay:(double)arg1 ;
-(void)setSpeedMax:(double)arg1 ;
-(id)initWithNumberOfParticles:(unsigned long long)arg1 objectSize:(CGSize)arg2 slideSize:(CGSize)arg3 duration:(double)arg4 direction:(unsigned long long)arg5 shader:(id)arg6 percentOfCellsToSplit:(double)arg7 ;
-(void)setLifeSpanRandomness:(double)arg1 ;
-(void)setSpeedMaxLimiter:(double)arg1 ;
-(double)speedMaxLimiter;
-(double)lifeSpanDelay;
-(double)lifeSpanRandomness;
-(void)p_setupParameters;
-(void)dealloc;
@end

