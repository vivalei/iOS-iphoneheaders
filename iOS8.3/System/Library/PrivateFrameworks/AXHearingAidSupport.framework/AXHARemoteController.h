/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:26:40 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AXHearingAidSupport/NSNetServiceDelegate.h>
#import <AXHearingAidSupport/NSStreamDelegate.h>

@protocol AXHARemoteControllerDelegate;
@class AXHAPacket, NSNetService, NSMutableArray, NSInputStream, NSOutputStream, AXHATimer, NSMutableData, AXHARemoteMessage, NSString;

@interface AXHARemoteController : NSObject <NSNetServiceDelegate, NSStreamDelegate> {

	AXHAPacket* _currentPacket;
	char _didValidateHIID;
	id<AXHARemoteControllerDelegate> _delegate;
	NSNetService* _service;
	NSMutableArray* _outputDataQueue;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	AXHATimer* _communicationTimer;
	NSMutableData* _inputBuffer;
	NSMutableData* _outputBuffer;
	AXHARemoteMessage* _currentMessageInFlight;

}

@property (assign,nonatomic) id<AXHARemoteControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSNetService * service;                                  //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSMutableArray * outputDataQueue;                        //@synthesize outputDataQueue=_outputDataQueue - In the implementation block
@property (nonatomic,retain) NSInputStream * inputStream;                             //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,retain) NSOutputStream * outputStream;                           //@synthesize outputStream=_outputStream - In the implementation block
@property (assign,nonatomic) char didValidateHIID;                                    //@synthesize didValidateHIID=_didValidateHIID - In the implementation block
@property (nonatomic,retain) AXHATimer * communicationTimer;                          //@synthesize communicationTimer=_communicationTimer - In the implementation block
@property (nonatomic,retain) NSMutableData * inputBuffer;                             //@synthesize inputBuffer=_inputBuffer - In the implementation block
@property (nonatomic,retain) NSMutableData * outputBuffer;                            //@synthesize outputBuffer=_outputBuffer - In the implementation block
@property (nonatomic,retain) AXHARemoteMessage * currentMessageInFlight;              //@synthesize currentMessageInFlight=_currentMessageInFlight - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)netService:(id)arg1 didNotPublish:(id)arg2 ;
-(void)netServiceWillPublish:(id)arg1 ;
-(void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3 ;
-(void)netServiceDidStop:(id)arg1 ;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceWillResolve:(id)arg1 ;
-(void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2 ;
-(void)netServiceDidPublish:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<AXHARemoteControllerDelegate>)arg1 ;
-(id)init;
-(NSString *)description;
-(id<AXHARemoteControllerDelegate>)delegate;
-(id)name;
-(void)closeConnectionWithError:(id)arg1 ;
-(char)sendObject:(id)arg1 withSendCompletion:(/*^block*/id)arg2 ;
-(void)openConnectionIfNecessary;
-(char)isSlave;
-(char)sendObject:(id)arg1 ;
-(void)setOutputDataQueue:(NSMutableArray *)arg1 ;
-(void)setInputBuffer:(NSMutableData *)arg1 ;
-(void)setOutputBuffer:(NSMutableData *)arg1 ;
-(void)setCommunicationTimer:(AXHATimer *)arg1 ;
-(void)setDidValidateHIID:(char)arg1 ;
-(void)setCurrentMessageInFlight:(AXHARemoteMessage *)arg1 ;
-(void)setupStream:(id)arg1 ;
-(AXHATimer *)communicationTimer;
-(void)setSecuritySettingsForStream:(id)arg1 ;
-(NSMutableArray *)outputDataQueue;
-(void)sendDataChunk;
-(void)finishedSending:(id)arg1 ;
-(id)nextMessageInQueue;
-(void)enqueueData:(id)arg1 ;
-(void)didCommunicate;
-(AXHARemoteMessage *)currentMessageInFlight;
-(NSMutableData *)outputBuffer;
-(char)didValidateHIID;
-(void)messageWasAcked:(id)arg1 ;
-(void)validatePairedAid;
-(void)clearMessageQueue;
-(void)receivedData:(id)arg1 ;
-(void)acceptConnection:(int)arg1 ;
-(NSMutableData *)inputBuffer;
-(void)stream:(id)arg1 handleEvent:(unsigned)arg2 ;
-(NSNetService *)service;
-(void)setService:(NSNetService *)arg1 ;
-(NSInputStream *)inputStream;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(id)initWithService:(id)arg1 ;
-(void)resetConnection;
-(NSOutputStream *)outputStream;
-(char)isConnecting;
-(char)isConnected;
@end

