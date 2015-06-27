/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:41:59 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TSUASLClient, TSUASLLogFile, NSURL;

@interface TSULogCollaboration : NSObject {

	TSUASLClient* _aslClient;
	int _logFileLevelMask;
	int _stderrLevelMask;
	TSUASLLogFile* _currentLogFile;
	char _shouldLogCommandTrace;
	char _shouldLogToFile;
	char _shouldLogToStderr;
	int _filterLevel;
	NSURL* _logFileURL;

}

@property (assign,nonatomic) int filterLevel;                         //@synthesize filterLevel=_filterLevel - In the implementation block
@property (nonatomic,readonly) NSURL * logFileURL;                    //@synthesize logFileURL=_logFileURL - In the implementation block
@property (assign,nonatomic) char shouldLogCommandTrace;              //@synthesize shouldLogCommandTrace=_shouldLogCommandTrace - In the implementation block
@property (assign,nonatomic) char shouldLogToFile;                    //@synthesize shouldLogToFile=_shouldLogToFile - In the implementation block
@property (assign,nonatomic) char shouldLogToStderr;                  //@synthesize shouldLogToStderr=_shouldLogToStderr - In the implementation block
+(void)defineCategories;
+(id)sharedInstance;
-(void)setShouldLogCommandTrace:(char)arg1 ;
-(char)shouldLogCommandTrace;
-(void)setFilterLevel:(int)arg1 ;
-(int)filterLevel;
-(id)_createLogFileURL;
-(int)_clampLevelToValidRange:(int)arg1 ;
-(id)_createASLClient;
-(NSURL *)logFileURL;
-(char)shouldLogToStderr;
-(void)setShouldLogToStderr:(char)arg1 ;
-(char)shouldLogToFile;
-(id)aslClient;
-(id)init;
-(id)description;
-(void)setShouldLogToFile:(char)arg1 ;
@end
