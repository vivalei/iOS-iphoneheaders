/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:08:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol SBDDomainHandler <NSObject>
@required
+(id)sharedDomainHandler;
+(id)bookkeeperDomain;
+(id)serviceWithXPCConnection:(id)arg1;
-(void)synchronizeIfNeedsInitialSynchronization;
-(id)lastSynchronizedAccountIdentifier;
-(void)synchronizeForChangedAccountByResetInvalidatingLocalChanges:(BOOL)arg1;
-(void)synchronizeForChangedAccountStatus;
-(void)synchronizeForUpdatedRemoteDomainVersion:(id)arg1;
-(void)synchronizeImmediatelyWithCompletionHandler:(/*^block*/ id)arg1;
@end

