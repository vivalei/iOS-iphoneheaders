/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface CRXPCServiceMethod : NSObject {

	NSObject<OS_xpc_object>* _message;
	long long _messageIndex;

}

@property (retain) NSObject<OS_xpc_object> * message;              //@synthesize message=_message - In the implementation block
@property (assign) long long messageIndex;                         //@synthesize messageIndex=_messageIndex - In the implementation block
+(id)methodWithServiceName:(id)arg1 arguments:(id)arg2 ;
-(void)dealloc;
-(id)message;
-(void)setMessage:(id)arg1 ;
-(long long)messageIndex;
-(id)initWithMessage:(id)arg1 index:(long long)arg2 ;
-(void)setMessageIndex:(long long)arg1 ;
@end

