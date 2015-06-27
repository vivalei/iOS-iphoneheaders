/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:49 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <cloudphotod/CPLPrequeliteStorage.h>
#import <cloudphotod/CPLEngineRemappedDeletesImplementation.h>

@class NSString;

@interface CPLPrequeliteRemappedDeletes : CPLPrequeliteStorage <CPLEngineRemappedDeletesImplementation>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)initializeStorage;
-(char)resetWithError:(id*)arg1 ;
-(char)scheduleDeleteForRemappedRecordWithIdentifier:(id)arg1 realIdentifier:(id)arg2 asap:(char)arg3 error:(id*)arg4 ;
-(char)discardDeleteForRemappedRecordWithIdentifier:(id)arg1 error:(id*)arg2 ;
@end
