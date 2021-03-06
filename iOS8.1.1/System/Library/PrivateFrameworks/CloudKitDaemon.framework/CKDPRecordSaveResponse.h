/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:01 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSString, CKDPRecord, CKDPDateStatistics;

@interface CKDPRecordSaveResponse : PBCodable <NSCopying> {

	NSString* _etag;
	CKDPRecord* _serverFields;
	CKDPDateStatistics* _timeStatistics;

}

@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag;                                  //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) BOOL hasTimeStatistics; 
@property (nonatomic,retain) CKDPDateStatistics * timeStatistics;              //@synthesize timeStatistics=_timeStatistics - In the implementation block
@property (nonatomic,readonly) BOOL hasServerFields; 
@property (nonatomic,retain) CKDPRecord * serverFields;                        //@synthesize serverFields=_serverFields - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasEtag;
-(NSString *)etag;
-(void)setTimeStatistics:(CKDPDateStatistics *)arg1 ;
-(void)setServerFields:(CKDPRecord *)arg1 ;
-(BOOL)hasTimeStatistics;
-(BOOL)hasServerFields;
-(CKDPDateStatistics *)timeStatistics;
-(CKDPRecord *)serverFields;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

