/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MSASPlatform <NSObject>
@optional
-(bool)shouldEnableNewFeatures;
-(bool)personIDEnabledForAlbumSharing:(id)arg1;
-(bool)shouldDownloadEarliestPhotosFirst;
-(void)setSuppressCellular:(bool)arg1;
-(id)MMCSUploadSocketOptionsForPersonID:(id)arg1;
-(id)MMCSDownloadSocketOptionsForPersonID:(id)arg1;
-(int)MMCSConcurrentConnectionsCount;
-(bool)deviceHasEnoughDiskSpaceRemainingToOperate;
-(id)metadataSocketOptionsForPersonID:(id)arg1;

@required
-(bool)shouldLogAtLevel:(int)arg1;
-(void)logLevel:(int)arg1 personID:(id)arg2 albumGUID:(id)arg3 format:(id)arg4;
-(Class)pluginClass;
-(id)personIDsEnabledForAlbumSharing;
-(bool)MSASIsAllowedToTransferMetadata;
-(bool)MSASIsAllowedToUploadAssets;
-(bool)MSASPersonIDIsAllowedToDownloadAssets:(id)arg1;
-(id)pushTokenForPersonID:(id)arg1;
-(id)baseSharingURLForPersonID:(id)arg1;
-(bool)personIDUsesProductionPushEnvironment:(id)arg1;
-(id)albumSharingDaemon;
-(id)pathAlbumSharingDir;
@end

