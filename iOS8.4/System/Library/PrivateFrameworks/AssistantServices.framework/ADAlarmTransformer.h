/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <assistantd/ADAceRequestTransformer.h>
#import <assistantd/ADAceResponseTransformer.h>

@class NSString;

@interface ADAlarmTransformer : NSObject <ADAceRequestTransformer, ADAceResponseTransformer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)getSiriRequestForClientBoundAceCommand:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)aceCommandForSiriResponse:(id)arg1 responseError:(id)arg2 forRequestCommand:(id)arg3 ;
@end
