/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/SFUInputStream.h>

@protocol OISFUBufferedInputStream;
@class NSString;

@interface OISFUZipInflateInputStream : NSObject <SFUInputStream> {

	z_stream_s* mStream;
	long long mOffset;
	id<OISFUBufferedInputStream> mInput;
	char* mOutBuffer;
	unsigned long long mOutBufferSize;
	BOOL mReachedEnd;
	BOOL mIsFromZip;
	unsigned long long mCalculatedCrc;
	unsigned long long mCheckCrc;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupInflateStream;
-(void)dealloc;
-(long long)offset;
-(void)close;
-(id)initWithInput:(id)arg1 ;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
-(void)seekToOffset:(long long)arg1 ;
-(unsigned long long)readToOwnBuffer:(const char**)arg1 size:(unsigned long long)arg2 ;
-(id)initWithOffset:(long long)arg1 end:(long long)arg2 uncompressedSize:(unsigned long long)arg3 crc:(unsigned long long)arg4 dataRepresentation:(id)arg5 ;
-(long long)totalCompressedBytesConsumed;
-(BOOL)canSeek;
@end
