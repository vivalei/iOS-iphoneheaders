/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:08:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <IDSFoundation/APSConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSData, APSConnection, NSObject;

@interface SYDPushManager : NSObject <APSConnectionDelegate> {

	NSString* _environment;
	NSString* _user;
	double _lastUpdateOnServer;
	NSData* _lastTokenOnServer;
	NSData* _lastSeenToken;
	double _refreshInterval;
	APSConnection* _apsConnection;
	NSString* _currentAPSConnectionEnvironment;
	NSObject<OS_dispatch_queue>* _queue;

}

@property (nonatomic,readonly) NSString * environment; 
@property (nonatomic,readonly) NSString * user;                     //@synthesize user=_user - In the implementation block
-(id)persistentState;
-(void)_setupAPSConnection;
-(void)_cleanupAPSConnection;
-(id)initWithPersistentState:(id)arg1 ;
-(void)setEnvironment:(id)arg1 forUser:(id)arg2 refreshInterval:(double)arg3 ;
-(double)nextUpdateInterval;
-(void)resetUpdates;
-(void)didUpdateTokenOnServer:(id)arg1 ;
-(id)user;
-(void)dealloc;
-(id)environment;
-(id)publicToken;
-(double)refreshInterval;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(void)shutdown;
-(BOOL)needsUpdate;
@end

