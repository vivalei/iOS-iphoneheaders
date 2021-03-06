/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <sharingd/sharingd-Structs.h>
@class NSObject;

@interface SDAdaptiveCompressor : NSObject {

	BOOL _compressible;
	unsigned long _totalBytesSent;
	double _totalNetworkDelay;
	BOOL _keepingUpWithNetwork;
	long _numBlocksProcessed;
	unsigned long _totalBytesProcessed;
	long _numBlocksCompressed;
	double _lastCompressionRatio;
	double _totalCompressionTime;
	unsigned long _totalCompressedOutput;
	CFReadStreamRef _readStream;
	CFWriteStreamRef _writeStream;
	NSObject<OS_dispatch_queue>* _adjustmentQueue;

}
-(void)fileComplete;
-(void)executeReadWithAdaptiveCompression;
-(void)executeWriteWithAdaptiveCompression;
-(id)initWithReadStream:(CFReadStreamRef)arg1 writeStream:(CFWriteStreamRef)arg2 ;
-(CFReadStreamRef)copyReadStream;
-(BOOL)readData:(char*)arg1 length:(long)arg2 fromStream:(CFReadStreamRef)arg3 ;
-(BOOL)writeData:(char*)arg1 length:(long)arg2 toStream:(CFWriteStreamRef)arg3 ;
-(void)openStreams;
-(BOOL)readIncomingChunk;
-(void)sendOutgoingChunk:(char*)arg1 length:(long)arg2 compressed:(BOOL)arg3 ;
-(void)processNetworkStatistics:(double)arg1 ;
-(void)processCompressibilityStatistics;
-(void)dealloc;
-(void).cxx_destruct;
@end

