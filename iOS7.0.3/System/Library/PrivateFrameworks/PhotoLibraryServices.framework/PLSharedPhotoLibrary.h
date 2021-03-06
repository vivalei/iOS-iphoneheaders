/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLPhotoLibrary.h>

@interface PLSharedPhotoLibrary : PLPhotoLibrary
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(id)sharedPhotoLibrary;
-(oneway void)release;
-(id)retain;
-(id)autorelease;
-(unsigned)retainCount;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(unsigned)concurrencyType;
-(void)_updateWithInsertedAssetsCount:(unsigned)arg1 deletedCount:(unsigned)arg2 updatedAssets:(id)arg3 ;
@end

