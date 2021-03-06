/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:38:35 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class CKRecordZoneID, CKServerChangeToken, NSArray, NSData, NSMutableDictionary;

@interface CKFetchRecordChangesOperation : CKDatabaseOperation {

	char _shouldFetchAssetContents;
	CKRecordZoneID* _recordZoneID;
	CKServerChangeToken* _previousServerChangeToken;
	unsigned _resultsLimit;
	NSArray* _desiredKeys;
	/*^block*/id _recordChangedBlock;
	/*^block*/id _recordWithIDWasDeletedBlock;
	/*^block*/id _fetchRecordChangesCompletionBlock;
	CKServerChangeToken* _resultServerChangeToken;
	NSData* _resultClientChangeTokenData;
	int _status;
	NSMutableDictionary* _recordErrors;
	/*^block*/id _shareChangedBlock;
	/*^block*/id _shareWithIDWasDeletedBlock;

}

@property (nonatomic,copy) CKRecordZoneID * recordZoneID;                                //@synthesize recordZoneID=_recordZoneID - In the implementation block
@property (nonatomic,copy) CKServerChangeToken * previousServerChangeToken;              //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (assign,nonatomic) unsigned resultsLimit;                                      //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                        //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy) id recordChangedBlock;                                        //@synthesize recordChangedBlock=_recordChangedBlock - In the implementation block
@property (nonatomic,copy) id recordWithIDWasDeletedBlock;                               //@synthesize recordWithIDWasDeletedBlock=_recordWithIDWasDeletedBlock - In the implementation block
@property (nonatomic,readonly) char moreComing; 
@property (nonatomic,copy) id fetchRecordChangesCompletionBlock;                         //@synthesize fetchRecordChangesCompletionBlock=_fetchRecordChangesCompletionBlock - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * resultServerChangeToken;              //@synthesize resultServerChangeToken=_resultServerChangeToken - In the implementation block
@property (nonatomic,retain) NSData * resultClientChangeTokenData;                       //@synthesize resultClientChangeTokenData=_resultClientChangeTokenData - In the implementation block
@property (assign,nonatomic) int status;                                                 //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) char shouldFetchAssetContents;                              //@synthesize shouldFetchAssetContents=_shouldFetchAssetContents - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordErrors;                         //@synthesize recordErrors=_recordErrors - In the implementation block
@property (nonatomic,copy) id shareChangedBlock;                                         //@synthesize shareChangedBlock=_shareChangedBlock - In the implementation block
@property (nonatomic,copy) id shareWithIDWasDeletedBlock;                                //@synthesize shareWithIDWasDeletedBlock=_shareWithIDWasDeletedBlock - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(char)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSMutableDictionary *)recordErrors;
-(void)setRecordErrors:(NSMutableDictionary *)arg1 ;
-(void)_handleCompletionCallback:(id)arg1 ;
-(int)changeTypesFromSetCallbacks;
-(id)shareWithIDWasDeletedBlock;
-(id)recordWithIDWasDeletedBlock;
-(id)fetchRecordChangesCompletionBlock;
-(void)setShareWithIDWasDeletedBlock:(id)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setResultsLimit:(unsigned)arg1 ;
-(char)moreComing;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(id)initWithRecordZoneID:(id)arg1 previousServerChangeToken:(id)arg2 ;
-(void)setShouldFetchAssetContents:(char)arg1 ;
-(void)setRecordChangedBlock:(id)arg1 ;
-(void)setFetchRecordChangesCompletionBlock:(id)arg1 ;
-(void)setRecordWithIDWasDeletedBlock:(id)arg1 ;
-(void)setShareChangedBlock:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)desiredKeys;
-(unsigned)resultsLimit;
-(CKServerChangeToken *)previousServerChangeToken;
-(void)setPreviousServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setResultServerChangeToken:(CKServerChangeToken *)arg1 ;
-(CKServerChangeToken *)resultServerChangeToken;
-(CKRecordZoneID *)recordZoneID;
-(void)setRecordZoneID:(CKRecordZoneID *)arg1 ;
-(void)setResultClientChangeTokenData:(NSData *)arg1 ;
-(NSData *)resultClientChangeTokenData;
-(char)shouldFetchAssetContents;
-(id)recordChangedBlock;
-(id)shareChangedBlock;
@end

