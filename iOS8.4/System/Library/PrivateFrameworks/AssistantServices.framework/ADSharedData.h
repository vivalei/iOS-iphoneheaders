/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface ADSharedData : NSObject {

	BOOL _siriEnabled;
	BOOL _activityContinuationAllowed;
	NSString* _assistantId;
	NSString* _speechId;
	NSString* _languageCode;
	NSString* _hostname;

}

@property (assign,nonatomic) BOOL siriEnabled;                              //@synthesize siriEnabled=_siriEnabled - In the implementation block
@property (assign,nonatomic) BOOL activityContinuationAllowed;              //@synthesize activityContinuationAllowed=_activityContinuationAllowed - In the implementation block
@property (nonatomic,copy) NSString * assistantId;                          //@synthesize assistantId=_assistantId - In the implementation block
@property (nonatomic,copy) NSString * speechId;                             //@synthesize speechId=_speechId - In the implementation block
@property (nonatomic,copy) NSString * languageCode;                         //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,copy) NSString * hostname;                             //@synthesize hostname=_hostname - In the implementation block
-(void)setSiriEnabled:(BOOL)arg1 ;
-(BOOL)siriEnabled;
-(BOOL)activityContinuationAllowed;
-(void)setActivityContinuationAllowed:(BOOL)arg1 ;
-(id)description;
-(NSString *)languageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
-(void)setHostname:(NSString *)arg1 ;
-(NSString *)assistantId;
-(void)setAssistantId:(NSString *)arg1 ;
-(NSString *)speechId;
-(void)setSpeechId:(NSString *)arg1 ;
-(NSString *)hostname;
@end
