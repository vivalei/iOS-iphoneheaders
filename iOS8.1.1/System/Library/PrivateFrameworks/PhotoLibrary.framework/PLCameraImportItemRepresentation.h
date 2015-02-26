/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:14 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ICCameraFile, NSDictionary, NSString;

@interface PLCameraImportItemRepresentation : NSObject {

	ICCameraFile* _cameraFile;
	NSDictionary* _metadata;
	BOOL _canRequestMetadata;
	BOOL _canRequestThumbnail;
	NSString* _path;
	BOOL _inDatabase;

}

@property (nonatomic,retain) ICCameraFile * cameraFile;              //@synthesize cameraFile=_cameraFile - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) BOOL canRequestMetadata;                //@synthesize canRequestMetadata=_canRequestMetadata - In the implementation block
@property (assign,nonatomic) BOOL canRequestThumbnail;               //@synthesize canRequestThumbnail=_canRequestThumbnail - In the implementation block
@property (nonatomic,copy) NSString * path;                          //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) BOOL inDatabase;                        //@synthesize inDatabase=_inDatabase - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)path;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(void)setCanRequestMetadata:(BOOL)arg1 ;
-(BOOL)canRequestThumbnail;
-(void)setCanRequestThumbnail:(BOOL)arg1 ;
-(ICCameraFile *)cameraFile;
-(BOOL)isMovie;
-(BOOL)isInDatabaseForce:(BOOL)arg1 ;
-(id)initWithCameraFile:(id)arg1 ;
-(BOOL)canRequestMetadata;
-(void)setInDatabase:(BOOL)arg1 ;
-(BOOL)isRaw;
-(void)setCameraFile:(ICCameraFile *)arg1 ;
-(BOOL)inDatabase;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(BOOL)isJPEG;
-(BOOL)isAudio;
-(id)fileExtension;
@end
