/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:47:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSNumber, ADConnectionType;

@interface ADAceConnectionAnalysisInfo : NSObject {

	char _wwanPreferred;
	NSURL* _connectionURL;
	int _interfaceIndex;
	NSNumber* _sendBufferSize;
	ADConnectionType* _connectionType;

}

@property (nonatomic,readonly) NSURL * connectionURL;                          //@synthesize connectionURL=_connectionURL - In the implementation block
@property (nonatomic,readonly) int interfaceIndex;                             //@synthesize interfaceIndex=_interfaceIndex - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * sendBufferSize;                 //@synthesize sendBufferSize=_sendBufferSize - In the implementation block
@property (nonatomic,readonly) char wwanPreferred;                             //@synthesize wwanPreferred=_wwanPreferred - In the implementation block
@property (nonatomic,readonly) ADConnectionType * connectionType;              //@synthesize connectionType=_connectionType - In the implementation block
-(id)initWithConnectionURL:(id)arg1 interfaceIndex:(int)arg2 sendBufferSize:(id)arg3 wwanPreferred:(char)arg4 connectionType:(id)arg5 ;
-(ADConnectionType *)connectionType;
-(NSURL *)connectionURL;
-(int)interfaceIndex;
-(NSNumber *)sendBufferSize;
-(char)wwanPreferred;
@end

