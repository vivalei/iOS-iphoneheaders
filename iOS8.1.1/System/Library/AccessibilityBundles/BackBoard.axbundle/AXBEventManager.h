/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:25:43 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/AccessibilityBundles/BackBoard.axbundle/BackBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <BackBoard/BackBoard-Structs.h>
@class NSString, AXEventRepresentation;

@interface AXBEventManager : NSObject {

	NSString* _eventTapIdentifier;
	BOOL _homeIsDown;
	BOOL _overrideGestureRecognitionState;
	BOOL _eventListenerEnabled;
	IOHIDUserDeviceRef _userDevice;
	AXEventRepresentation* _lastHIDRecord;

}

@property (assign,nonatomic) BOOL homeIsDown;              //@synthesize homeIsDown=_homeIsDown - In the implementation block
+(id)sharedManager;
-(unsigned)machPortForPoint:(CGPoint)arg1 ;
-(unsigned)systemAppPort;
-(unsigned)contextIdForPosition:(CGPoint)arg1 ;
-(void)registerEventListener:(BOOL)arg1 ;
-(void)postEvent:(id)arg1 systemEvent:(BOOL)arg2 afterNamedTap:(id)arg3 namedTaps:(id)arg4 ;
-(void)setHomeIsDown:(BOOL)arg1 ;
-(unsigned)systemEventPort;
-(int)springBoardPid;
-(void)enableEventTap:(BOOL)arg1 forApplication:(int)arg2 ;
-(void)dispatchEventRepresentationToClient:(id)arg1 ;
-(void)setDisableSystemGestureRecognitionInEvents:(BOOL)arg1 ;
-(id)windowServer;
-(BOOL)_assistiveTouchEventTap:(id)arg1 ;
-(void)_enableAssistiveTouchEventTap:(BOOL)arg1 ;
-(void)_processHIDEvent:(IOHIDEventRef)arg1 ;
-(void)_normalizeEventForContext:(id)arg1 ;
-(id)lastRecordPostedThroughHID;
-(BOOL)homeIsDown;
-(void)clearLastRecordPostedThrougHID;
-(unsigned)clientPortForContextId:(unsigned)arg1 ;
-(id)init;
-(void)wakeUpDeviceIfNecessary;
@end

