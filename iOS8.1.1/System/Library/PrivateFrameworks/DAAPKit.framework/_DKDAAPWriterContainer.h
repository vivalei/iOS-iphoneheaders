/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:25 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/DAAPKit.framework/DAAPKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableData;

@interface _DKDAAPWriterContainer : NSObject {

	unsigned _code;
	NSMutableData* _childData;

}

@property (readonly) unsigned code;                        //@synthesize code=_code - In the implementation block
@property (retain) NSMutableData * childData;              //@synthesize childData=_childData - In the implementation block
-(unsigned)code;
-(NSMutableData *)childData;
-(id)formattedOutputData;
-(void)setChildData:(NSMutableData *)arg1 ;
-(id)initWithCode:(unsigned)arg1 ;
@end

