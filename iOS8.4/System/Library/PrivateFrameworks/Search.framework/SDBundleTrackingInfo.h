/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:19 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/searchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface SDBundleTrackingInfo : NSObject {

	NSString* _compositeIdentifier;
	BOOL _shouldRun;
	BOOL _isDirty;
	int _state;
	BOOL _lastRunWasSuccessful;

}
+(id)_trackingInfoDir;
-(id)initWithCompositeIdentifier:(id)arg1 ;
-(void)recordEvent:(int)arg1 info:(id)arg2 forBundleWithKey:(id)arg3 inState:(int)arg4 ;
-(id)_filename;
-(void)_copyInfoFromDictionary:(id)arg1 ;
-(void)_loadFromPlist;
-(void)_saveToPlist;
-(BOOL)shouldRunIndexer;
-(BOOL)shouldContinueIndexingAfterTransitioToState:(int)arg1 ;
-(void)save;
-(id)_dictionaryRepresentation;
@end

