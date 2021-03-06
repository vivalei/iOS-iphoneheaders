/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/NSSecureCoding.h>
#import <AVFoundation/NSCopying.h>
#import <AVFoundation/NSMutableCopying.h>
#import <AVFoundation/AVVideoCompositionInstruction.h>
@class NSArray;


@protocol AVVideoCompositionInstruction <NSObject>
@property (nonatomic,readonly) SCD_Struct_CM5 timeRange; 
@property (nonatomic,readonly) BOOL enablePostProcessing; 
@property (nonatomic,readonly) BOOL containsTweening; 
@property (nonatomic,readonly) NSArray * requiredSourceTrackIDs; 
@property (nonatomic,readonly) int passthroughTrackID; 
@required
-(BOOL)enablePostProcessing;
-(BOOL)containsTweening;
-(NSArray *)requiredSourceTrackIDs;
-(int)passthroughTrackID;
-(SCD_Struct_CM5)timeRange;

@end


@class NSArray, AVVideoCompositionInstructionInternal, NSString;

@interface AVVideoCompositionInstruction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, AVVideoCompositionInstruction> {

	AVVideoCompositionInstructionInternal* _instruction;

}

@property (nonatomic,readonly) SCD_Struct_CM5 timeRange; 
@property (nonatomic,retain) CGColorRef backgroundColor; 
@property (nonatomic,copy,readonly) NSArray * layerInstructions; 
@property (nonatomic,readonly) BOOL enablePostProcessing; 
@property (nonatomic,readonly) NSArray * requiredSourceTrackIDs; 
@property (nonatomic,readonly) int passthroughTrackID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL containsTweening; 
+(BOOL)supportsSecureCoding;
+(void)initialize;
-(NSArray *)layerInstructions;
-(BOOL)enablePostProcessing;
-(void)setEnablePostProcessing:(BOOL)arg1 ;
-(void)_setValuesFromDictionary:(id)arg1 ;
-(void)setLayerInstructions:(NSArray *)arg1 ;
-(BOOL)containsTweening;
-(NSArray *)requiredSourceTrackIDs;
-(int)passthroughTrackID;
-(void)dealloc;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGColorRef)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_CM5)timeRange;
-(void)setTimeRange:(SCD_Struct_CM5)arg1 ;
-(void)finalize;
@end

