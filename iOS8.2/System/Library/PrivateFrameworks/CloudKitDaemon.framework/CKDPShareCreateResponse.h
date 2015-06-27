/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:42 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class CKDPShare;

@interface CKDPShareCreateResponse : PBCodable <NSCopying> {

	CKDPShare* _share;

}

@property (nonatomic,readonly) char hasShare; 
@property (nonatomic,retain) CKDPShare * share;              //@synthesize share=_share - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setShare:(CKDPShare *)arg1 ;
-(char)hasShare;
-(CKDPShare *)share;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
