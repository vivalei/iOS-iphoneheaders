/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:07 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Podcasts/Podcasts-Structs.h>
@class IMCloudSyncTransaction;

@interface IMCloudSyncSerializer : NSObject {

	IMCloudSyncTransaction* _transaction;

}

@property (nonatomic,retain) IMCloudSyncTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
-(IMCloudSyncDataVerionPair)objectVersionPairForKey:(id)arg1 ;
-(id)dataWithNodes:(id)arg1 ;
-(id)baseDictionary;
-(id)payloadWithNode:(id)arg1 ;
-(void)setTransaction:(IMCloudSyncTransaction *)arg1 ;
-(id)initWithTransaction:(id)arg1 ;
-(IMCloudSyncTransaction *)transaction;
-(void)dealloc;
-(id)payload;
-(id)keys;
@end
