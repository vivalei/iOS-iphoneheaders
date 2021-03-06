/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:58 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSMetricsEventController, NSString;

@interface AnalyticsReportingOperation : ISOperation {

	SSMetricsEventController* _controller;
	NSString* _directory;
	/*^block*/id _finishBlock;
	long long _insertTimestamp;

}

@property (copy) id finishBlock; 
-(id)_path;
-(char)_runForReportingURL:(id)arg1 error:(id*)arg2 ;
-(char)_shouldBackoffAfterError:(id)arg1 ;
-(void)_destroyOutputFile:(id)arg1 ;
-(char)_shouldClearEventsDespiteError:(id)arg1 ;
-(id)initWithController:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)run;
-(id)finishBlock;
-(void)setFinishBlock:(id)arg1 ;
-(id)uniqueKey;
@end

