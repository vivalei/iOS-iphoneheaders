/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSURL, NSData, NSURLResponse, NSError;

@interface BKJaliscoArtworkDownloadOperation : NSOperation {

	char _isFinished;
	NSURL* _artworkURL;
	NSData* _data;
	NSURLResponse* _response;
	NSError* _error;

}

@property (nonatomic,retain) NSURL * artworkURL;              //@synthesize artworkURL=_artworkURL - In the implementation block
@property (retain) NSData * data;                             //@synthesize data=_data - In the implementation block
@property (retain) NSURLResponse * response;                  //@synthesize response=_response - In the implementation block
@property (retain) NSError * error;                           //@synthesize error=_error - In the implementation block
+(id)handlerQueue;
-(void)setArtworkURL:(NSURL *)arg1 ;
-(NSURL *)artworkURL;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)start;
-(NSURLResponse *)response;
-(char)isFinished;
-(char)isConcurrent;
-(NSError *)error;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(void)setError:(NSError *)arg1 ;
@end

