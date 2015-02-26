/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:08 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSHashTable, NSMutableDictionary, NSString, NSData, NSDictionary, NSUUID;

@interface IDSDLocalDeviceController : NSObject {

	NSHashTable* _delegateMap;
	NSMutableDictionary* _pairedDeviceProperties;
	NSString* _localDeviceIdentifier;

}

@property (getter=deviceIdentifier,nonatomic,readonly) NSString * uniqueID; 
@property (getter=deviceEncryptionKey,nonatomic,readonly) NSData * publicEncryptionKey; 
@property (nonatomic,readonly) NSDictionary * localDevice; 
@property (getter=pairedDeviceUUIDString,nonatomic,readonly) NSString * pairedUUIDString; 
@property (getter=pairedDeviceUUID,nonatomic,readonly) NSUUID * pairedUUID; 
@property (getter=pairedDeviceUniqueID,nonatomic,readonly) NSString * pairedUniqueID; 
@property (nonatomic,readonly) NSDictionary * pairedDevice; 
@property (nonatomic,readonly) BOOL isPaired; 
+(id)sharedInstance;
-(BOOL)removeAllPairedDevices;
-(BOOL)addLocalPairedDevice:(id)arg1 ;
-(BOOL)removeLocalPairedDevice:(id)arg1 ;
-(id)pairedDeviceUniqueID;
-(void)_notifyDelegatesWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_removePairedDeviceFromKeychain;
-(id)pairedDeviceUUIDString;
-(BOOL)_requestPairedDeviceInfo;
-(BOOL)_removePairedDeviceProperties;
-(id)deviceEncryptionKey;
-(BOOL)_commitPairedDeviceToKeychain;
-(void)_notifyDelegatesDevicePaired:(BOOL)arg1 ;
-(id)pairedDeviceUUID;
-(BOOL)setPairedDeviceKey:(id)arg1 identifier:(id)arg2 ;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSDictionary *)pairedDevice;
-(id)deviceIdentifier;
-(BOOL)isPaired;
-(NSDictionary *)localDevice;
@end
