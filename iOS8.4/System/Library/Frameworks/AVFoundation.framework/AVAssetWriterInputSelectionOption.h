/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMediaSelectionOption.h>

@class AVAssetWriterInput, NSString, NSDictionary, NSArray;

@interface AVAssetWriterInputSelectionOption : AVMediaSelectionOption {

	AVAssetWriterInput* _input;
	NSString* _mediaType;
	NSDictionary* _outputSettings;
	opaqueCMFormatDescriptionRef _sourceFormatHint;
	NSString* _languageCode;
	NSString* _extendedLanguageTag;
	NSArray* _metadata;
	NSDictionary* _trackReferences;
	BOOL _displaysNonForcedSubtitles;
	BOOL _enabled;

}

@property (nonatomic,readonly) AVAssetWriterInput * input;                                 //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) NSString * mediaType;                                       //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) NSDictionary * outputSettings;                              //@synthesize outputSettings=_outputSettings - In the implementation block
@property (nonatomic,readonly) opaqueCMFormatDescriptionRef sourceFormatHint;              //@synthesize sourceFormatHint=_sourceFormatHint - In the implementation block
@property (nonatomic,readonly) NSString * languageCode;                                    //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) NSString * extendedLanguageTag;                             //@synthesize extendedLanguageTag=_extendedLanguageTag - In the implementation block
@property (nonatomic,readonly) NSArray * metadata;                                         //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSDictionary * trackReferences;                             //@synthesize trackReferences=_trackReferences - In the implementation block
@property (nonatomic,readonly) BOOL displaysNonForcedSubtitles;                            //@synthesize displaysNonForcedSubtitles=_displaysNonForcedSubtitles - In the implementation block
+(id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)arg1 displaysNonForcedSubtitles:(BOOL)arg2 ;
+(id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)arg1 ;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(opaqueCMFormatDescriptionRef)sourceFormatHint;
-(id)initWithAssetWriterInput:(id)arg1 ;
-(id)initWithAssetWriterInput:(id)arg1 displaysNonForcedSubtitles:(BOOL)arg2 ;
-(BOOL)_hasEqualValueForKey:(id)arg1 asObject:(id)arg2 ;
-(id)_taggedCharacteristics;
-(BOOL)_isAuxiliaryContent;
-(BOOL)_isMainProgramContent;
-(id)_ancillaryDescription;
-(BOOL)_isDesignatedDefault;
-(BOOL)displaysNonForcedSubtitles;
-(id)propertyList;
-(id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1 ;
-(NSDictionary *)trackReferences;
-(id)mediaSubTypes;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(AVAssetWriterInput *)input;
-(id)locale;
-(NSString *)languageCode;
-(NSDictionary *)outputSettings;
-(NSArray *)metadata;
-(id)commonMetadata;
-(BOOL)isPlayable;
-(NSString *)mediaType;
-(BOOL)hasMediaCharacteristic:(id)arg1 ;
-(NSString *)extendedLanguageTag;
-(void)finalize;
@end
