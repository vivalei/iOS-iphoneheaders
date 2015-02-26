/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSString, AVOutputSettings, NSDictionary, NSArray, NSURL;

@interface AVAssetWriterInputConfigurationState : NSObject {

	NSString* _mediaType;
	AVOutputSettings* _outputSettings;
	opaqueCMFormatDescriptionRef _sourceFormatHint;
	NSDictionary* _sourcePixelBufferAttributes;
	BOOL _attachedToPixelBufferAdaptor;
	NSArray* _metadataItems;
	CGAffineTransform _transform;
	int _mediaTimeScale;
	BOOL _expectsMediaDataInRealTime;
	CGSize _naturalSize;
	NSString* _languageCode;
	NSString* _extendedLanguageTag;
	BOOL _marksOutputTrackAsEnabled;
	float _preferredVolume;
	long long _layer;
	short _alternateGroupID;
	NSDictionary* _trackReferences;
	BOOL _performsMultiPassEncodingIfSupported;
	SCD_Struct_CM4 _chunkDuration;
	long long _chunkAlignment;
	long long _chunkSize;
	NSURL* _sampleReferenceBaseURL;

}

@property (nonatomic,copy) NSString * mediaType;                                         //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy) AVOutputSettings * outputSettings;                            //@synthesize outputSettings=_outputSettings - In the implementation block
@property (nonatomic,retain) opaqueCMFormatDescriptionRef sourceFormatHint;              //@synthesize sourceFormatHint=_sourceFormatHint - In the implementation block
@property (nonatomic,copy) NSDictionary * sourcePixelBufferAttributes;                   //@synthesize sourcePixelBufferAttributes=_sourcePixelBufferAttributes - In the implementation block
@property (assign,nonatomic) BOOL attachedToPixelBufferAdaptor;                          //@synthesize attachedToPixelBufferAdaptor=_attachedToPixelBufferAdaptor - In the implementation block
@property (nonatomic,copy) NSArray * metadataItems;                                      //@synthesize metadataItems=_metadataItems - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;                                //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) int mediaTimeScale;                                         //@synthesize mediaTimeScale=_mediaTimeScale - In the implementation block
@property (assign,nonatomic) BOOL expectsMediaDataInRealTime;                            //@synthesize expectsMediaDataInRealTime=_expectsMediaDataInRealTime - In the implementation block
@property (assign,nonatomic) CGSize naturalSize;                                         //@synthesize naturalSize=_naturalSize - In the implementation block
@property (nonatomic,copy) NSString * languageCode;                                      //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,copy) NSString * extendedLanguageTag;                               //@synthesize extendedLanguageTag=_extendedLanguageTag - In the implementation block
@property (assign,nonatomic) BOOL marksOutputTrackAsEnabled;                             //@synthesize marksOutputTrackAsEnabled=_marksOutputTrackAsEnabled - In the implementation block
@property (assign,nonatomic) float preferredVolume;                                      //@synthesize preferredVolume=_preferredVolume - In the implementation block
@property (assign,nonatomic) long long layer;                                            //@synthesize layer=_layer - In the implementation block
@property (assign,nonatomic) short alternateGroupID;                                     //@synthesize alternateGroupID=_alternateGroupID - In the implementation block
@property (nonatomic,copy) NSDictionary * trackReferences;                               //@synthesize trackReferences=_trackReferences - In the implementation block
@property (assign,nonatomic) BOOL performsMultiPassEncodingIfSupported;                  //@synthesize performsMultiPassEncodingIfSupported=_performsMultiPassEncodingIfSupported - In the implementation block
@property (assign,nonatomic) SCD_Struct_CM4 preferredMediaChunkDuration;                 //@synthesize chunkDuration=_chunkDuration - In the implementation block
@property (assign,nonatomic) long long preferredMediaChunkAlignment;                     //@synthesize chunkAlignment=_chunkAlignment - In the implementation block
@property (assign,nonatomic) long long preferredMediaChunkSize;                          //@synthesize chunkSize=_chunkSize - In the implementation block
@property (nonatomic,copy) NSURL * sampleReferenceBaseURL;                               //@synthesize sampleReferenceBaseURL=_sampleReferenceBaseURL - In the implementation block
-(void)setExtendedLanguageTag:(NSString *)arg1 ;
-(float)preferredVolume;
-(short)alternateGroupID;
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(void)setAlternateGroupID:(short)arg1 ;
-(NSArray *)metadataItems;
-(void)setMetadataItems:(NSArray *)arg1 ;
-(opaqueCMFormatDescriptionRef)sourceFormatHint;
-(void)setMarksOutputTrackAsEnabled:(BOOL)arg1 ;
-(BOOL)expectsMediaDataInRealTime;
-(BOOL)marksOutputTrackAsEnabled;
-(void)setSourceFormatHint:(opaqueCMFormatDescriptionRef)arg1 ;
-(NSDictionary *)sourcePixelBufferAttributes;
-(void)setSourcePixelBufferAttributes:(NSDictionary *)arg1 ;
-(BOOL)attachedToPixelBufferAdaptor;
-(void)setAttachedToPixelBufferAdaptor:(BOOL)arg1 ;
-(int)mediaTimeScale;
-(void)setMediaTimeScale:(int)arg1 ;
-(void)setExpectsMediaDataInRealTime:(BOOL)arg1 ;
-(void)setTrackReferences:(NSDictionary *)arg1 ;
-(BOOL)performsMultiPassEncodingIfSupported;
-(void)setPerformsMultiPassEncodingIfSupported:(BOOL)arg1 ;
-(SCD_Struct_CM4)preferredMediaChunkDuration;
-(void)setPreferredMediaChunkDuration:(SCD_Struct_CM4)arg1 ;
-(long long)preferredMediaChunkAlignment;
-(void)setPreferredMediaChunkAlignment:(long long)arg1 ;
-(long long)preferredMediaChunkSize;
-(void)setPreferredMediaChunkSize:(long long)arg1 ;
-(NSURL *)sampleReferenceBaseURL;
-(void)setSampleReferenceBaseURL:(NSURL *)arg1 ;
-(NSDictionary *)trackReferences;
-(void)dealloc;
-(long long)layer;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setLayer:(long long)arg1 ;
-(CGAffineTransform)transform;
-(NSString *)languageCode;
-(CGSize)naturalSize;
-(AVOutputSettings *)outputSettings;
-(void)setOutputSettings:(AVOutputSettings *)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSString *)mediaType;
-(void)setMediaType:(NSString *)arg1 ;
-(NSString *)extendedLanguageTag;
@end
