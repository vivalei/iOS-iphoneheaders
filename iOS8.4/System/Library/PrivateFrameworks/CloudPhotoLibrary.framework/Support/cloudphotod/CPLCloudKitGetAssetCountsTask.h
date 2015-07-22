/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <cloudphotod/CPLCloudKitTransportTask.h>
#import <cloudphotod/CPLEngineTransportGetAssetCountsTask.h>

@class NSString;

@interface CPLCloudKitGetAssetCountsTask : CPLCloudKitTransportTask <CPLEngineTransportGetAssetCountsTask> {

	/*^block*/id _completionHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL foreground; 
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)run;
@end
