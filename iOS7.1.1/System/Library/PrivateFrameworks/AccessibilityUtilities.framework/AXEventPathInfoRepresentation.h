/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSCopying.h>

@interface AXEventPathInfoRepresentation : NSObject <NSSecureCoding, NSCopying> {

	unsigned char _pathIndex;
	unsigned char _pathIdentity;
	unsigned char _pathProximity;
	unsigned _pathWindowContextID;
	float _pathPressure;
	float _pathMajorRadius;
	float _pathMinorRadius;
	float _pathTwist;
	float _pathQuality;
	float _pathDensity;
	unsigned _pathEventMask;
	void* _pathWindow;
	CGPoint _pathLocation;

}

@property (assign,nonatomic) unsigned char pathIndex;                   //@synthesize pathIndex=_pathIndex - In the implementation block
@property (assign,nonatomic) unsigned char pathIdentity;                //@synthesize pathIdentity=_pathIdentity - In the implementation block
@property (assign,nonatomic) CGPoint pathLocation;                      //@synthesize pathLocation=_pathLocation - In the implementation block
@property (assign,nonatomic) unsigned pathWindowContextID;              //@synthesize pathWindowContextID=_pathWindowContextID - In the implementation block
@property (assign,nonatomic) unsigned char pathProximity;               //@synthesize pathProximity=_pathProximity - In the implementation block
@property (assign,nonatomic) float pathPressure;                        //@synthesize pathPressure=_pathPressure - In the implementation block
@property (assign,nonatomic) float pathMajorRadius;                     //@synthesize pathMajorRadius=_pathMajorRadius - In the implementation block
@property (assign,nonatomic) float pathMinorRadius;                     //@synthesize pathMinorRadius=_pathMinorRadius - In the implementation block
@property (assign,nonatomic) float pathTwist;                           //@synthesize pathTwist=_pathTwist - In the implementation block
@property (assign,nonatomic) float pathQuality;                         //@synthesize pathQuality=_pathQuality - In the implementation block
@property (assign,nonatomic) float pathDensity;                         //@synthesize pathDensity=_pathDensity - In the implementation block
@property (assign,nonatomic) unsigned pathEventMask;                    //@synthesize pathEventMask=_pathEventMask - In the implementation block
@property (assign,nonatomic) void* pathWindow;                          //@synthesize pathWindow=_pathWindow - In the implementation block
+(bool)supportsSecureCoding;
+(id)representationWithPathInfo:(SCD_Struct_AX9*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(CGPoint)pathLocation;
-(unsigned)pathWindowContextID;
-(void)setPathIndex:(unsigned char)arg1 ;
-(void)setPathIdentity:(unsigned char)arg1 ;
-(void)setPathProximity:(unsigned char)arg1 ;
-(void)setPathPressure:(float)arg1 ;
-(void)setPathMajorRadius:(float)arg1 ;
-(void)setPathLocation:(CGPoint)arg1 ;
-(void)setPathWindowContextID:(unsigned)arg1 ;
-(void)setPathWindow:(void*)arg1 ;
-(unsigned char)pathIdentity;
-(unsigned char)pathProximity;
-(float)pathPressure;
-(float)pathMajorRadius;
-(void*)pathWindow;
-(float)pathTwist;
-(void)setPathTwist:(float)arg1 ;
-(float)pathMinorRadius;
-(void)setPathMinorRadius:(float)arg1 ;
-(float)pathQuality;
-(void)setPathQuality:(float)arg1 ;
-(float)pathDensity;
-(void)setPathDensity:(float)arg1 ;
-(unsigned)pathEventMask;
-(void)setPathEventMask:(unsigned)arg1 ;
-(void)writeToPathInfo:(SCD_Struct_AX9*)arg1 ;
-(unsigned char)pathIndex;
@end

