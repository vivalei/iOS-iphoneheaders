/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BBObserverClientInterface
@required
-(void)updateSectionOrderRule:(id)arg1;
-(void)updateSectionOrder:(id)arg1 forCategory:(long long)arg2;
-(void)updateSectionInfo:(id)arg1 inCategory:(long long)arg2;
-(void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2;
-(void)noteAlertBehaviorOverridesChanged:(id)arg1;
-(void)noteAlertBehaviorOverrideStateChanged:(id)arg1;
-(void)noteServerReceivedResponseForBulletin:(id)arg1;
-(void)updateBulletin:(id)arg1 forFeeds:(unsigned long long)arg2;
-(void)updateBulletin:(id)arg1 forFeeds:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3;
-(void)getObserverDebugInfo:(/*^block*/id)arg1;

@end

