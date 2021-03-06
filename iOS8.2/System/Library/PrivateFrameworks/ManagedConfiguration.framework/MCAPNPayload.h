/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCAPNPayload : MCPayload {

	NSArray* _apnInfos;
	char _wasInstalled;

}

@property (assign,nonatomic) char wasInstalled;              //@synthesize wasInstalled=_wasInstalled - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
+(id)apnDomainName;
-(id)description;
-(id)subtitle2Label;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)payloadDescriptionKeyValueSections;
-(id)subtitle2Description;
-(id)_validationErrorType:(int)arg1 forInvalidKey:(id)arg2 ;
-(char)_checkForValidContents:(id)arg1 outError:(id*)arg2 ;
-(void)_finishInitializationWithContents:(id)arg1 ;
-(id)_strippedAPNDefaults;
-(id)apnDefaults;
-(char)wasInstalled;
-(void)setWasInstalled:(char)arg1 ;
@end

