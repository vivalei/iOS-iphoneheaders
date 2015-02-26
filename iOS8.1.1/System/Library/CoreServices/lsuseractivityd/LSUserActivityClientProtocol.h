/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:24 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/lsuseractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol LSUserActivityClientProtocol <NSObject>
@required
-(void)doFetchUserActivityInfoWithUUID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)doDeleteUserActivityWithUUID:(id)arg1;
-(void)doUpdateUserActivityWithUUID:(id)arg1 setActive:(BOOL)arg2;
-(void)doRegisterUserActivityInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)doUpdateUserActivityInfo:(id)arg1 makeCurrent:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)doMarkUserActivityAsDirty:(id)arg1 forceImmediate:(BOOL)arg2;
-(void)doInitializeWithClientVersion:(long long)arg1 clientInfo:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end
