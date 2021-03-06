/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:45 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSString, NSMutableArray;

@interface CKDPPulseResponse : PBCodable <NSCopying> {

	NSString* _currentEtag;
	NSMutableArray* _userDatas;

}

@property (nonatomic,readonly) char hasCurrentEtag; 
@property (nonatomic,retain) NSString * currentEtag;                  //@synthesize currentEtag=_currentEtag - In the implementation block
@property (nonatomic,retain) NSMutableArray * userDatas;              //@synthesize userDatas=_userDatas - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)userDatas;
-(NSString *)currentEtag;
-(void)addUserData:(id)arg1 ;
-(void)setCurrentEtag:(NSString *)arg1 ;
-(unsigned)userDatasCount;
-(void)clearUserDatas;
-(id)userDataAtIndex:(unsigned)arg1 ;
-(char)hasCurrentEtag;
-(void)setUserDatas:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

