/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:04:37 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSNumber, NSString, NSData;

@interface iAP2TransportComponent : NSObject {

	NSNumber* componentID;
	NSString* componentName;
	unsigned char supportsiAPConnection;
	int transportType;
	NSData* macAddr;
	unsigned btServicesFilter;
	unsigned sampleRateBitmask;
	unsigned char mode;
	unsigned char hasNCMInterface;
	unsigned paramCountArr[4];
	unsigned char _NCMInterfaceNumber;

}

@property (retain) NSString * componentName; 
@property (retain) NSNumber * componentID; 
@property (assign) unsigned char supportsiAPConnection; 
@property (assign) int transportType; 
@property (retain) NSData * macAddr; 
@property (assign) unsigned btServicesFilter; 
@property (assign) unsigned sampleRateBitmask; 
@property (assign) unsigned char hasNCMInterface; 
@property (assign) unsigned char NCMInterfaceNumber;                 //@synthesize NCMInterfaceNumber=_NCMInterfaceNumber - In the implementation block
+(int)sampleRateEnumFromValue:(unsigned)arg1 ;
+(unsigned)sampleRateValueFromEnum:(int)arg1 ;
+(unsigned)sampleRateMaskFromEnum:(int)arg1 ;
-(unsigned)sampleRateBitmask;
-(unsigned)paramCount:(unsigned char)arg1 ;
-(unsigned char)hasNCMInterface;
-(unsigned char)NCMInterfaceNumber;
-(id)macAddr;
-(id)componentID;
-(unsigned char)supportsiAPConnection;
-(void)incrementParamCount:(unsigned char)arg1 ;
-(void)setSampleRateBit:(int)arg1 ;
-(BOOL)isSampleRateBitSet:(int)arg1 ;
-(unsigned char)getMode;
-(void)setComponentName:(id)arg1 ;
-(void)setComponentID:(id)arg1 ;
-(void)setSupportsiAPConnection:(unsigned char)arg1 ;
-(void)setMacAddr:(id)arg1 ;
-(unsigned)btServicesFilter;
-(void)setBtServicesFilter:(unsigned)arg1 ;
-(void)setSampleRateBitmask:(unsigned)arg1 ;
-(void)setHasNCMInterface:(unsigned char)arg1 ;
-(void)setNCMInterfaceNumber:(unsigned char)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setMode:(unsigned char)arg1 ;
-(id)componentName;
-(void)setTransportType:(int)arg1 ;
-(int)transportType;
@end

