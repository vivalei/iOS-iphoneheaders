/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:50 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sharing/NSSecureCoding.h>

@class NSData, NSDictionary, NSString;

@interface SFActivityAdvertisement : NSObject <NSSecureCoding> {

	NSData* _advertisementPayload;
	NSDictionary* _options;
	NSString* _deviceIdentifier;
	NSString* _deviceName;
	NSString* _deviceModelIdentifier;
	NSData* _activityPayload;

}

@property (retain,readonly) NSData * advertisementPayload;                 //@synthesize advertisementPayload=_advertisementPayload - In the implementation block
@property (retain,readonly) NSDictionary * options;                        //@synthesize options=_options - In the implementation block
@property (retain,readonly) NSString * deviceIdentifier;                   //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (retain,readonly) NSString * deviceName;                         //@synthesize deviceName=_deviceName - In the implementation block
@property (retain,readonly) NSString * deviceModelIdentifier;              //@synthesize deviceModelIdentifier=_deviceModelIdentifier - In the implementation block
@property (retain) NSData * activityPayload;                               //@synthesize activityPayload=_activityPayload - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)activityPayload;
-(void)setActivityPayload:(NSData *)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSDictionary *)options;
-(NSString *)deviceIdentifier;
-(NSString *)deviceName;
-(NSData *)advertisementPayload;
-(id)initWithAdvertisementPayload:(id)arg1 options:(id)arg2 deviceName:(id)arg3 fromDeviceID:(id)arg4 ;
-(NSString *)deviceModelIdentifier;
@end
