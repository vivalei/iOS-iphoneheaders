/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <StoreServices/SSXPCCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSSet;

@interface SSDownloadPolicyRule : NSObject <NSCoding, SSXPCCoding, NSCopying> {

	NSSet* _applicationStates;
	float _batteryLevel;
	int _cellularDataStates;
	long long _downloadSizeLimit;
	NSSet* _networkTypes;
	int _powerStates;
	int _registrationStates;
	int _timeLimitStates;

}

@property (assign,nonatomic) long long downloadSizeLimit;                                  //@synthesize downloadSizeLimit=_downloadSizeLimit - In the implementation block
@property (nonatomic,copy) NSSet * applicationStates;                                      //@synthesize applicationStates=_applicationStates - In the implementation block
@property (nonatomic,copy) NSSet * networkTypes;                                           //@synthesize networkTypes=_networkTypes - In the implementation block
@property (getter=isCellularAllowed,nonatomic,readonly) BOOL cellularAllowed; 
@property (getter=isWiFiAllowed,nonatomic,readonly) BOOL wiFiAllowed; 
@property (assign,nonatomic) float batteryLevel;                                           //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (assign,nonatomic) int cellularDataStates;                                       //@synthesize cellularDataStates=_cellularDataStates - In the implementation block
@property (assign,nonatomic) int powerStates;                                              //@synthesize powerStates=_powerStates - In the implementation block
@property (assign,nonatomic) int registrationStates;                                       //@synthesize registrationStates=_registrationStates - In the implementation block
@property (assign,nonatomic) int timeLimitStates;                                          //@synthesize timeLimitStates=_timeLimitStates - In the implementation block
-(long long)downloadSizeLimit;
-(void)setCellularDataStates:(int)arg1 ;
-(void)unionPolicyRule:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(float)batteryLevel;
-(id)networkTypes;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)applicationStates;
-(void)addApplicationState:(id)arg1 ;
-(void)setApplicationStates:(id)arg1 ;
-(int)cellularDataStates;
-(int)powerStates;
-(int)registrationStates;
-(int)timeLimitStates;
-(void)addNetworkType:(int)arg1 ;
-(BOOL)isCellularAllowed;
-(BOOL)isWiFiAllowed;
-(void)setBatteryLevel:(float)arg1 ;
-(void)setDownloadSizeLimit:(long long)arg1 ;
-(void)setNetworkTypes:(id)arg1 ;
-(void)setPowerStates:(int)arg1 ;
-(void)setRegistrationStates:(int)arg1 ;
-(void)setTimeLimitStates:(int)arg1 ;
@end
