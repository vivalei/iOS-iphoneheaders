/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:34 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AASetupAssistantDelegateService
@optional
-(void)setupOperationFailed;
-(BOOL)canAutoSetupMailAccount:(id)arg1;
-(BOOL)needSetupForMailAccount:(id)arg1;
-(void)setupMailAccount:(id)arg1 password:(id)arg2 handler:(/*^block*/id)arg3;
-(void)verifyAccountWithAppleID:(id)arg1 handler:(/*^block*/id)arg2;
-(void)setCloudServicesEnabled:(BOOL)arg1 handler:(/*^block*/id)arg2;
-(void)setDeviceLocatorEnabled:(BOOL)arg1;
-(void)setBackupEnabled:(BOOL)arg1 handler:(/*^block*/id)arg2;
-(void)completeEnablingCloudServicesWithHandler:(/*^block*/id)arg1;

@required
-(id)delegateServiceIdentifier;
-(id)accountSetupRequestParameters;
-(void)completeSetupWithResponseParameters:(id)arg1 handler:(/*^block*/id)arg2;

@end
