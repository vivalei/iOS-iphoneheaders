/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:00:51 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFContactsSearchConsumer <NSObject>
@required
-(void)consumeSearchResults:(id)arg1 type:(unsigned)arg2 taskID:(id)arg3;
-(void)finishedSearchingForType:(unsigned)arg1;
-(void)finishedTaskWithID:(id)arg1;
-(void)beganNetworkActivity;
-(void)endedNetworkActivity;

@end
