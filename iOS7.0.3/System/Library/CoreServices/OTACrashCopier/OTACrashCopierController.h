/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/OTACrashCopier
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OTACrashCopier/OTALogSubmissionDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class OTAConditionMonitor, OTALogFileManager, OTATaskingManager, OTAXPCServer, NSString, NSDictionary, NSTimer, NSOperationQueue, NSObject;

@interface OTACrashCopierController : NSObject <OTALogSubmissionDelegate> {

	OTAConditionMonitor* _conditionMonitor;
	OTALogFileManager* _logFileManager;
	OTATaskingManager* _taskingManager;
	OTAXPCServer* _xpcServer;
	NSString* _submissionURL;
	NSDictionary* _commandTable;
	NSTimer* _idleTimer;
	NSOperationQueue* _operationQueue;
	NSObject<OS_dispatch_queue>* _requestQueue;
	NSObject<OS_dispatch_queue>* _callbackQueue;
	NSObject<OS_dispatch_group>* _callbackGroup;
	unsigned _targetArchiveSize;
	int _outstandingRequestCount;
	BOOL _requirePowerPluggedIn;
	BOOL _noAutoSubmission;
	BOOL _debugSubmissionToFile;

}

@property (nonatomic,retain) OTAConditionMonitor * conditionMonitor;              //@synthesize conditionMonitor=_conditionMonitor - In the implementation block
@property (nonatomic,retain) NSTimer * idleTimer;                                 //@synthesize idleTimer=_idleTimer - In the implementation block
@property (nonatomic,copy) NSString * submissionURL;                              //@synthesize submissionURL=_submissionURL - In the implementation block
@property (assign,nonatomic) int outstandingRequestCount;                         //@synthesize outstandingRequestCount=_outstandingRequestCount - In the implementation block
-(void)_readDefaults;
-(id)initWithConditionMonitor:(id)arg1 ;
-(void)setConditionMonitor:(id)arg1 ;
-(void)setOutstandingRequestCount:(int)arg1 ;
-(void)_setupXPCServer;
-(void)_setupBackgroundTaskAgentHandler;
-(void)_setupSubmissionPreferenceChangedHandler;
-(void)_setupBetaCrashHandler;
-(void)_restartIdleTimer;
-(void)setSubmissionURL:(id)arg1 ;
-(void)exitWithStatus:(int)arg1 ;
-(void)_idleTimerFired:(id)arg1 ;
-(void)_handleSubmissionPreferenceChanged;
-(void)_cancelPendingSubmissions;
-(void)rescheduleNextTrigger;
-(void)_handleBackgroundTaskAgentEvent:(id)arg1 forBetaMode:(BOOL)arg2 ;
-(void)rescheduleNextTriggerWithForce:(BOOL)arg1 ;
-(id)_createBackgroundTaskAgentJob;
-(void)_reallyHandleTrigger;
-(id)_createJobs;
-(int)_processSubmissionJobs:(id)arg1 ;
-(void)_handleBetaTriggerRequest:(id)arg1 ;
-(id)_createJobsForLogsWithExtensions:(id)arg1 logClass:(Class)arg2 routing:(int)arg3 ;
-(void)_scheduleBetaTrigger;
-(id)_createJobsForLogsAtPaths:(id)arg1 logClass:(Class)arg2 routing:(int)arg3 submissionInfo:(id)arg4 ;
-(id)submissionURL;
-(id)_submissionInfoForRouting:(int)arg1 ;
-(id)_submissionWithLogs:(id)arg1 routing:(int)arg2 submissionInfo:(id)arg3 ;
-(id)_createJobsForLogsAtPaths:(id)arg1 logClass:(Class)arg2 routing:(int)arg3 ;
-(id)_connectionTypeLabel;
-(void)_noteSubmissionAttempt:(id)arg1 ;
-(void)_noteSubmissionSuccess:(id)arg1 ;
-(void)submission:(id)arg1 failedToAddLog:(id)arg2 withError:(id)arg3 ;
-(void)submission:(id)arg1 willSendRequest:(id)arg2 withRouting:(int)arg3 ;
-(void)submission:(id)arg1 finishedWithResponse:(id)arg2 data:(id)arg3 ;
-(void)submission:(id)arg1 failedWithError:(id)arg2 ;
-(void)_handleTriggerIfFavorableRequest:(id)arg1 ;
-(void)_handleTriggerRequest:(id)arg1 ;
-(void)_handleSubmitPathsWithIdentifierRequest:(id)arg1 ;
-(id)conditionMonitor;
-(int)outstandingRequestCount;
-(void)exit;
-(void)dealloc;
-(id)init;
-(void)handleRequest:(id)arg1 ;
-(void)setIdleTimer:(id)arg1 ;
-(id)idleTimer;
@end

