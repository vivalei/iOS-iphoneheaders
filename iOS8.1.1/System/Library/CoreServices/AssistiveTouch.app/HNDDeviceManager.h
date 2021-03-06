/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:58 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/HNDDeviceDetectorDelegate.h>
#import <assistivetouchd/HNDDeviceDelegate.h>

@class NSMutableArray, NSString;

@interface HNDDeviceManager : NSObject <HNDDeviceDetectorDelegate, HNDDeviceDelegate> {

	BOOL _detectDevices;
	NSMutableArray* _devices;
	double _lastMoveTimeX;
	double _lastMoveTimeY;
	double _allowedMoveRate;

}

@property (assign,nonatomic) BOOL detectDevices;                    //@synthesize detectDevices=_detectDevices - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)sharedManager;
-(void)setDetectDevices:(BOOL)arg1 ;
-(void)deviceDetector:(id)arg1 didFindDevice:(IOHIDDeviceRef)arg2 ;
-(void)device:(id)arg1 didUnload:(BOOL)arg2 ;
-(void)device:(id)arg1 didPostEvent:(id)arg2 ;
-(long long)deviceCountWithSecondaryButtons;
-(BOOL)detectDevices;
-(id)init;
-(long long)deviceCount;
@end

