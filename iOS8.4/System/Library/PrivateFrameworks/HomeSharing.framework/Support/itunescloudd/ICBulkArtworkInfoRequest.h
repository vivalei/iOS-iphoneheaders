/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <itunescloudd/ICRequest.h>

@interface ICBulkArtworkInfoRequest : ICRequest {

	BOOL _useLongIDs;

}
-(id)initWithDatabaseID:(unsigned)arg1 cloudIDs:(id)arg2 itemKind:(unsigned char)arg3 useLongIDs:(BOOL)arg4 ;
-(id)_bodyDataForCloudIDs:(id)arg1 itemKind:(unsigned char)arg2 useLongIDs:(BOOL)arg3 ;
-(id)canonicalResponseForResponse:(id)arg1 ;
@end

