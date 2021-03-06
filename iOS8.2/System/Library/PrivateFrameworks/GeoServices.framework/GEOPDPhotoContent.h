/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:11 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString;

@interface GEOPDPhotoContent : PBCodable <NSCopying> {

	unsigned _height;
	NSString* _url;
	unsigned _width;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) char hasWidth; 
@property (assign,nonatomic) unsigned width;               //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) char hasHeight; 
@property (assign,nonatomic) unsigned height;              //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) char hasUrl; 
@property (nonatomic,retain) NSString * url;               //@synthesize url=_url - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)url;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)width;
-(void)setUrl:(NSString *)arg1 ;
-(unsigned)height;
-(id)dictionaryRepresentation;
-(void)setWidth:(unsigned)arg1 ;
-(void)setHeight:(unsigned)arg1 ;
-(void)setHasHeight:(char)arg1 ;
-(char)hasHeight;
-(char)hasUrl;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasWidth:(char)arg1 ;
-(char)hasWidth;
@end

