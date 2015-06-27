/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:15:48 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageCapture/ICCameraFile.h>

@class NSString;

@interface PTPCameraFile : ICCameraFile {

	void* _ptpCameraFileProperties;
	NSString* _path;

}

@property (readonly) unsigned type; 
@property (readonly) unsigned long storageID; 
@property (readonly) unsigned long objHandle; 
@property (copy) id info; 
@property (retain) NSString * path;                        //@synthesize path=_path - In the implementation block
-(void)dealloc;
-(unsigned)type;
-(NSString *)path;
-(id)info;
-(void)setPath:(NSString *)arg1 ;
-(void)setInfo:(id)arg1 ;
-(id)thumbData;
-(id)metadataDict;
-(long)writeDataToFile:(int)arg1 fromOffset:(long long)arg2 ofLength:(long long*)arg3 ;
-(unsigned long)objHandle;
-(unsigned long)storageID;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 type:(unsigned)arg4 storageID:(unsigned long)arg5 objectHandle:(unsigned long)arg6 ;
-(void)finalize;
@end
