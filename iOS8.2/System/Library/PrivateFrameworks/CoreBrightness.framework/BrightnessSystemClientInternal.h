/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:48 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSThread.h>

@class NSXPCConnection, BrightnessSystemClientExportedObj, NSTimer, NSArray;

@interface BrightnessSystemClientInternal : NSThread {

	NSXPCConnection* _connection;
	id _remote;
	BrightnessSystemClientExportedObj* exportedObj;
	BOOL _initializationComplete;
	NSTimer* _timer;
	NSArray* clientProperties;
	BOOL shouldKeepRunning;

}
-(id)init;
-(void)main;
-(char)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void)timerFire:(id)arg1 ;
-(void)destroyClient;
-(void)registerNotificationBlock:(/*^block*/id)arg1 forProperties:(id)arg2 ;
-(id)copyPropertyForKey:(id)arg1 ;
@end
