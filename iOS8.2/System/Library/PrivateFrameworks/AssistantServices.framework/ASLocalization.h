/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:00 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistant_service
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSMutableDictionary;

@interface ASLocalization : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _languageCode;
	NSMutableDictionary* _stringTables;

}
+(id)sharedLocalization;
-(id)_languageCode;
-(void)_clearTableCache;
-(void)_languageCodeChanged;
-(id)localizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3 ;
-(void)dealloc;
-(id)init;
@end

