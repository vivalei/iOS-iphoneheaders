/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:32 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <NanoPassKit/NSCopying.h>

@class NSString, NSData;

@interface NPKProtoRegistrationDataResponse : PBCodable <NSCopying> {

	NSString* _pushToken;
	NSData* _registrationDataBytes;
	char _pending;
	SCD_Struct_NP1 _has;

}

@property (assign,nonatomic) char hasPending; 
@property (assign,nonatomic) char pending;                                 //@synthesize pending=_pending - In the implementation block
@property (nonatomic,readonly) char hasRegistrationDataBytes; 
@property (nonatomic,retain) NSData * registrationDataBytes;               //@synthesize registrationDataBytes=_registrationDataBytes - In the implementation block
@property (nonatomic,readonly) char hasPushToken; 
@property (nonatomic,retain) NSString * pushToken;                         //@synthesize pushToken=_pushToken - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPending:(char)arg1 ;
-(NSString *)pushToken;
-(void)setPushToken:(NSString *)arg1 ;
-(char)hasPushToken;
-(void)setHasPending:(char)arg1 ;
-(char)hasPending;
-(char)pending;
-(void)setRegistrationDataBytes:(NSData *)arg1 ;
-(char)hasRegistrationDataBytes;
-(NSData *)registrationDataBytes;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
