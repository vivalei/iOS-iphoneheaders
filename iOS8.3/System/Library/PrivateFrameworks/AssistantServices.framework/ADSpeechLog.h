/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:46:50 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDateFormatter, NSString;

@interface ADSpeechLog : NSObject {

	NSObject*<OS_dispatch_queue> _logQueue;
	NSDateFormatter* _dateFormatter;
	int _fd;
	NSString* _filePath;

}
+(id)buffersFromSpeechLogAtURL:(id)arg1 isNarrowBand:(char*)arg2 ;
-(void)endSpeechLog;
-(void)beginNewSpeechLogWithFormat:(id)arg1 ;
-(void)appendSpeechPackets:(id)arg1 ;
-(void)cancelCurrentSpeechLog;
-(id)_logDirPath;
-(id)_nowString;
-(void)appendSpeechPacket:(id)arg1 ;
-(id)init;
-(id)_dateFormatter;
@end
