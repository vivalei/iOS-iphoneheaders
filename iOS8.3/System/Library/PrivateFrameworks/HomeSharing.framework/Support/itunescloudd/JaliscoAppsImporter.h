/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:02:37 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunescloudd/JaliscoImporter.h>

@class JaliscoAppLibrary, SSAppPurchaseHistoryDatabase, NSNumber;

@interface JaliscoAppsImporter : JaliscoImporter {

	JaliscoAppLibrary* _appCloudLibrary;
	SSAppPurchaseHistoryDatabase* _purchaseHistoryDatabase;
	NSNumber* _familyMemberStoreID;

}
-(id)metadataKeys;
-(id)purchaseTokens;
-(id)queryFilter;
-(char)includeFlavors;
-(unsigned)onDiskRevision;
-(id)initWithLibrary:(id)arg1 purchaseHistoryDatabase:(id)arg2 familyMemberStoreID:(id)arg3 ;
-(void)_importTracksFromItemsResponseData:(id)arg1 ;
-(id)connection;
-(id)handleResponse:(id)arg1 ;
-(char)includeHiddenItems;
-(id)familyMemberStoreID;
@end
