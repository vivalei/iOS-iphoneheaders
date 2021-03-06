/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>

@class AVVideoCompositionLayerInstructionInternal;

@interface AVVideoCompositionLayerInstruction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {

	AVVideoCompositionLayerInstructionInternal* _layerInstruction;

}

@property (nonatomic,readonly) int trackID; 
+(BOOL)supportsSecureCoding;
+(void)initialize;
-(id)dictionaryRepresentationWithTimeRange:(SCD_Struct_CM5)arg1 ;
-(void)_setValuesFromDictionary:(id)arg1 timeRange:(SCD_Struct_CM5)arg2 ;
-(void)setTrackID:(int)arg1 ;
-(void)_setTransformRamps:(id)arg1 ;
-(void)_setOpacityRamps:(id)arg1 ;
-(void)_setCropRectangleRamps:(id)arg1 ;
-(void)_setTransformRampFromStartTransform:(CGAffineTransform)arg1 toEndTransform:(CGAffineTransform)arg2 timeRange:(SCD_Struct_CM5)arg3 selector:(SEL)arg4 ;
-(void)_setOpacityRampFromStartOpacity:(float)arg1 toEndOpacity:(float)arg2 timeRange:(SCD_Struct_CM5)arg3 selector:(SEL)arg4 ;
-(void)_setCropRectangleRampFromStartCropRectangle:(CGRect)arg1 toEndCropRectangle:(CGRect)arg2 timeRange:(SCD_Struct_CM5)arg3 selector:(SEL)arg4 ;
-(void)setTransform:(CGAffineTransform)arg1 atTime:(SCD_Struct_CM4)arg2 ;
-(void)setOpacity:(float)arg1 atTime:(SCD_Struct_CM4)arg2 ;
-(void)setCropRectangle:(CGRect)arg1 atTime:(SCD_Struct_CM4)arg2 ;
-(void)setTransformRampFromStartTransform:(CGAffineTransform)arg1 toEndTransform:(CGAffineTransform)arg2 timeRange:(SCD_Struct_CM5)arg3 ;
-(void)setOpacityRampFromStartOpacity:(float)arg1 toEndOpacity:(float)arg2 timeRange:(SCD_Struct_CM5)arg3 ;
-(void)setCropRectangleRampFromStartCropRectangle:(CGRect)arg1 toEndCropRectangle:(CGRect)arg2 timeRange:(SCD_Struct_CM5)arg3 ;
-(BOOL)getTransformRampForTime:(SCD_Struct_CM4)arg1 startTransform:(CGAffineTransform*)arg2 endTransform:(CGAffineTransform*)arg3 timeRange:(SCD_Struct_CM5*)arg4 ;
-(BOOL)getOpacityRampForTime:(SCD_Struct_CM4)arg1 startOpacity:(float*)arg2 endOpacity:(float*)arg3 timeRange:(SCD_Struct_CM5*)arg4 ;
-(BOOL)getCropRectangleRampForTime:(SCD_Struct_CM4)arg1 startCropRectangle:(CGRect*)arg2 endCropRectangle:(CGRect*)arg3 timeRange:(SCD_Struct_CM5*)arg4 ;
-(int)trackID;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(void)finalize;
@end

