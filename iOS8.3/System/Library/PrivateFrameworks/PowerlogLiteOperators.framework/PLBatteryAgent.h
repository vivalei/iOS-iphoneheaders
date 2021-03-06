/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:08:24 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
#import <PowerlogCore/PLAgent.h>

@class PLIOKitOperatorComposition, PLEntryNotificationOperatorComposition, PLSemaphore, PLNSTimerOperatorComposition, NSArray, PLXPCResponderOperatorComposition;

@interface PLBatteryAgent : PLAgent {

	char _allowGasGaugeRead;
	char _deviceIsPluggedIn;
	PLIOKitOperatorComposition* _iokit;
	PLEntryNotificationOperatorComposition* _canSleepEntryNotifications;
	PLSemaphore* _canSleepSemaphore;
	PLEntryNotificationOperatorComposition* _wakeEntryNotifications;
	PLNSTimerOperatorComposition* _gasGaugeTimer;
	IOHIDEventSystemClientRef _accessoryVoltageHIDRef;
	IOHIDEventSystemClientRef _accessoryCurrentHIDRef;
	NSArray* _accessoryVoltageMatchingSensors;
	NSArray* _accessoryCurrentMatchingSensors;
	ggcontextRef _gasGagueConnection;
	int _gasGaugeConsecutiveEmptyEntriesCount;
	PLXPCResponderOperatorComposition* _batteryInfoResponder;
	double _batteryLevelPercent;
	double _rawBatteryVoltageVolt;

}

@property (readonly) PLIOKitOperatorComposition * iokit;                                               //@synthesize iokit=_iokit - In the implementation block
@property (readonly) PLEntryNotificationOperatorComposition * canSleepEntryNotifications;              //@synthesize canSleepEntryNotifications=_canSleepEntryNotifications - In the implementation block
@property (retain) PLSemaphore * canSleepSemaphore;                                                    //@synthesize canSleepSemaphore=_canSleepSemaphore - In the implementation block
@property (readonly) PLEntryNotificationOperatorComposition * wakeEntryNotifications;                  //@synthesize wakeEntryNotifications=_wakeEntryNotifications - In the implementation block
@property (retain) PLNSTimerOperatorComposition * gasGaugeTimer;                                       //@synthesize gasGaugeTimer=_gasGaugeTimer - In the implementation block
@property (assign) IOHIDEventSystemClientRef accessoryVoltageHIDRef;                                   //@synthesize accessoryVoltageHIDRef=_accessoryVoltageHIDRef - In the implementation block
@property (assign) IOHIDEventSystemClientRef accessoryCurrentHIDRef;                                   //@synthesize accessoryCurrentHIDRef=_accessoryCurrentHIDRef - In the implementation block
@property (retain) NSArray * accessoryVoltageMatchingSensors;                                          //@synthesize accessoryVoltageMatchingSensors=_accessoryVoltageMatchingSensors - In the implementation block
@property (retain) NSArray * accessoryCurrentMatchingSensors;                                          //@synthesize accessoryCurrentMatchingSensors=_accessoryCurrentMatchingSensors - In the implementation block
@property (assign) ggcontextRef gasGagueConnection;                                                    //@synthesize gasGagueConnection=_gasGagueConnection - In the implementation block
@property (assign) int gasGaugeConsecutiveEmptyEntriesCount;                                           //@synthesize gasGaugeConsecutiveEmptyEntriesCount=_gasGaugeConsecutiveEmptyEntriesCount - In the implementation block
@property (assign) char allowGasGaugeRead;                                                             //@synthesize allowGasGaugeRead=_allowGasGaugeRead - In the implementation block
@property (assign) char deviceIsPluggedIn;                                                             //@synthesize deviceIsPluggedIn=_deviceIsPluggedIn - In the implementation block
@property (assign) double batteryLevelPercent;                                                         //@synthesize batteryLevelPercent=_batteryLevelPercent - In the implementation block
@property (assign) double rawBatteryVoltageVolt;                                                       //@synthesize rawBatteryVoltageVolt=_rawBatteryVoltageVolt - In the implementation block
@property (retain) PLXPCResponderOperatorComposition * batteryInfoResponder;                           //@synthesize batteryInfoResponder=_batteryInfoResponder - In the implementation block
+(void)load;
+(id)defaults;
+(id)railDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventIntervalDefinitionGasGauge;
+(id)entryEventBackwardDefinitionBattery;
+(id)entryEventBackwardDefinitionBatteryUI;
-(void)dealloc;
-(id)init;
-(void)log;
-(void)initOperatorDependancies;
-(id)trimmingConditionsForRolloverAtDate:(id)arg1 ;
-(PLSemaphore *)canSleepSemaphore;
-(void)setCanSleepSemaphore:(PLSemaphore *)arg1 ;
-(PLEntryNotificationOperatorComposition *)wakeEntryNotifications;
-(void)initializeAccessoryIOHIDForType:(short)arg1 ;
-(void)setBatteryLevelPercent:(double)arg1 ;
-(void)setDeviceIsPluggedIn:(char)arg1 ;
-(void)setRawBatteryVoltageVolt:(double)arg1 ;
-(double)rawBatteryVoltageVolt;
-(void)setAllowGasGaugeRead:(char)arg1 ;
-(void)logEventIntervalGasGauge;
-(char)gasGaugeOpenAndStartLogging;
-(char)gasGaugeStopLoggingAndClose;
-(void)setAccessoryCurrentHIDRef:(IOHIDEventSystemClientRef)arg1 ;
-(void)setAccessoryCurrentMatchingSensors:(NSArray *)arg1 ;
-(void)setAccessoryVoltageHIDRef:(IOHIDEventSystemClientRef)arg1 ;
-(void)setAccessoryVoltageMatchingSensors:(NSArray *)arg1 ;
-(void)setBatteryInfoResponder:(PLXPCResponderOperatorComposition *)arg1 ;
-(void)logEventBackwardBattery;
-(char)allowGasGaugeRead;
-(void)gasGaugeRead;
-(PLIOKitOperatorComposition *)iokit;
-(ggcontextRef)gasGagueConnection;
-(void)setGasGagueConnection:(ggcontextRef)arg1 ;
-(char)deviceIsPluggedIn;
-(double)batteryLevelPercent;
-(char)givePluggedInFreePass;
-(double)accessorySensorReadingForType:(short)arg1 ;
-(id)railGasGuage;
-(void)setGasGaugeConsecutiveEmptyEntriesCount:(int)arg1 ;
-(int)gasGaugeConsecutiveEmptyEntriesCount;
-(IOHIDEventSystemClientRef)accessoryCurrentHIDRef;
-(NSArray *)accessoryCurrentMatchingSensors;
-(IOHIDEventSystemClientRef)accessoryVoltageHIDRef;
-(NSArray *)accessoryVoltageMatchingSensors;
-(PLEntryNotificationOperatorComposition *)canSleepEntryNotifications;
-(PLNSTimerOperatorComposition *)gasGaugeTimer;
-(void)setGasGaugeTimer:(PLNSTimerOperatorComposition *)arg1 ;
-(PLXPCResponderOperatorComposition *)batteryInfoResponder;
@end

