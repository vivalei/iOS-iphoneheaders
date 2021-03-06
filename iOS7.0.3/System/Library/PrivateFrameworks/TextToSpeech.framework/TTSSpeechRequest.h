/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSString, NSAttributedString, NSURL;

@interface TTSSpeechRequest : NSObject <NSSecureCoding> {

	BOOL _useCustomVoice;
	BOOL _maintainsInput;
	BOOL _audioSessionIDIsValid;
	NSString* _text;
	NSAttributedString* _attributedText;
	NSString* _languageCode;
	NSString* _voiceName;
	int _footprint;
	int _gender;
	NSURL* _outputPath;
	unsigned _audioSessionID;
	unsigned _audioQueueFlags;
	double _rate;
	double _pitch;
	double _volume;

}

@property (nonatomic,copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,copy) NSString * languageCode;                          //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,copy) NSString * voiceName;                             //@synthesize voiceName=_voiceName - In the implementation block
@property (assign,nonatomic) int footprint;                                  //@synthesize footprint=_footprint - In the implementation block
@property (assign,nonatomic) BOOL useCustomVoice;                            //@synthesize useCustomVoice=_useCustomVoice - In the implementation block
@property (assign,nonatomic) int gender;                                     //@synthesize gender=_gender - In the implementation block
@property (nonatomic,copy) NSURL * outputPath;                               //@synthesize outputPath=_outputPath - In the implementation block
@property (assign,nonatomic) double rate;                                    //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) double pitch;                                   //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) double volume;                                  //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) BOOL maintainsInput;                            //@synthesize maintainsInput=_maintainsInput - In the implementation block
@property (assign,nonatomic) BOOL audioSessionIDIsValid;                     //@synthesize audioSessionIDIsValid=_audioSessionIDIsValid - In the implementation block
@property (assign,nonatomic) unsigned audioSessionID;                        //@synthesize audioSessionID=_audioSessionID - In the implementation block
@property (assign,nonatomic) unsigned audioQueueFlags;                       //@synthesize audioQueueFlags=_audioQueueFlags - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)text;
-(void)setAttributedText:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(id)attributedText;
-(id)languageCode;
-(double)rate;
-(BOOL)maintainsInput;
-(long)vocalizerFootprint;
-(BOOL)useCustomVoice;
-(long)vocalizerGender;
-(BOOL)audioSessionIDIsValid;
-(unsigned)audioSessionID;
-(unsigned)audioQueueFlags;
-(id)voiceName;
-(id)outputPath;
-(int)footprint;
-(int)gender;
-(void)setLanguageCode:(id)arg1 ;
-(void)setVoiceName:(id)arg1 ;
-(void)setFootprint:(int)arg1 ;
-(void)setUseCustomVoice:(BOOL)arg1 ;
-(void)setGender:(int)arg1 ;
-(void)setOutputPath:(id)arg1 ;
-(void)setMaintainsInput:(BOOL)arg1 ;
-(void)setAudioSessionIDIsValid:(BOOL)arg1 ;
-(void)setAudioSessionID:(unsigned)arg1 ;
-(void)setAudioQueueFlags:(unsigned)arg1 ;
-(void).cxx_destruct;
-(double)pitch;
-(void)setPitch:(double)arg1 ;
-(double)volume;
-(void)setVolume:(double)arg1 ;
-(void)setRate:(double)arg1 ;
@end

