/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 2:30:17 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Security.framework/CloudKeychainProxy.bundle/CloudKeychainProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SOSPersistentState : NSObject
+(void)setRegisteredKeys:(id)arg1 ;
+(id)registeredKeys;
+(id)registrationFileURL;
+(id)read:(id)arg1 error:(id*)arg2 ;
+(BOOL)write:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
@end
