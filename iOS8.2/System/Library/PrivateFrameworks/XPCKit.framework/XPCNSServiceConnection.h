/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:27 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <XPCKit/XPCServiceConnectionDelegate.h>

@protocol XPCNSServiceConnectionDelegate, NSObject;
@class XPCServiceConnection, NSString;

@interface XPCNSServiceConnection : NSObject <XPCServiceConnectionDelegate> {

	XPCServiceConnection* _serviceConnection;
	id<XPCNSServiceConnectionDelegate> _delegate;
	id<NSObject> _context;

}

@property (nonatomic,retain,readonly) NSString * serviceName; 
@property (assign,nonatomic,__weak) id<XPCNSServiceConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<NSObject> context;                                            //@synthesize context=_context - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<XPCNSServiceConnectionDelegate>)arg1 ;
-(id<XPCNSServiceConnectionDelegate>)delegate;
-(id<NSObject>)context;
-(void)setContext:(id<NSObject>)arg1 ;
-(NSString *)serviceName;
-(void)shutDownCompletionBlock:(/*^block*/id)arg1 ;
-(void)sendMessage:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)XPCServiceConnection:(id)arg1 didReceiveRequest:(id)arg2 sequenceNumber:(unsigned)arg3 ;
-(void)XPCServiceConnectionDidDisconnect:(id)arg1 ;
-(id)initWithXPCServiceConnection:(id)arg1 ;
@end

