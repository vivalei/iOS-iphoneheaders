/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <VoiceMemos/VoiceMemos-Structs.h>
@class NSObject;

@interface RCExtAudioFilePipe : NSObject {

	NSObject<OS_dispatch_queue>* _accessQueue;
	unsigned long long _accessQueueID;
	OpaqueExtAudioFileRef _audioFileRef;
	AudioStreamBasicDescription _outputFormatDescriptionStruct;
	AudioStreamBasicDescription _sourceFormatDescriptionStruct;

}

@property (nonatomic,readonly) AudioStreamBasicDescription* outputFormatDescription; 
@property (nonatomic,readonly) AudioStreamBasicDescription* sourceFormatDescription; 
-(AudioStreamBasicDescription*)sourceFormatDescription;
-(void)dealloc;
-(void).cxx_destruct;
-(void)performTransactionWithBlock:(/*^block*/ id)arg1 ;
-(void)_accessExtAudioFileWithBlock:(/*^block*/ id)arg1 ;
-(AudioStreamBasicDescription*)outputFormatDescription;
-(id)initWithURL:(id)arg1 outputFrameRate:(double)arg2 outputFormatID:(unsigned)arg3 ;
-(long long)sourceFrameIndexForTime:(double)arg1 ;
-(bool)seekToSourceFrameIndex:(long long)arg1 ;
-(long long)sourceCurrentFrameIndex;
-(int)readConvertedFramesIntoBuffer:(id)arg1 requestedFrameCount:(int)arg2 ;
@end

