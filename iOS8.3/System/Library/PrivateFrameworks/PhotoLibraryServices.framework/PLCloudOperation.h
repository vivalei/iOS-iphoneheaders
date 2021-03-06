/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:04:25 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PLCloudPhotoLibraryManager, PLCloudScenario, PLCloudOperationResource;

@interface PLCloudOperation : NSObject {

	PLCloudPhotoLibraryManager* _connection;
	char _running;
	unsigned _cost;
	long _createdAt;
	PLCloudScenario* _scenario;
	PLCloudOperationResource* _operationResource;

}

@property (nonatomic,readonly) unsigned cost;                                           //@synthesize cost=_cost - In the implementation block
@property (nonatomic,readonly) long createdAt;                                          //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,readonly) PLCloudScenario * scenario;                              //@synthesize scenario=_scenario - In the implementation block
@property (nonatomic,readonly) PLCloudPhotoLibraryManager * connection;                 //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) PLCloudOperationResource * operationResource;              //@synthesize operationResource=_operationResource - In the implementation block
@property (assign) char running;                                                        //@synthesize running=_running - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(PLCloudPhotoLibraryManager *)connection;
-(unsigned)cost;
-(id)resource;
-(PLCloudOperationResource *)operationResource;
-(void)requestCancel;
-(void)runOperationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithScenario:(id)arg1 cloudConnection:(id)arg2 ;
-(void)setOperationResource:(PLCloudOperationResource *)arg1 ;
-(long)createdAt;
-(PLCloudScenario *)scenario;
-(void)setRunning:(char)arg1 ;
-(char)running;
@end

