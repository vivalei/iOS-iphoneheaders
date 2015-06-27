/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:55 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DABookmarkDAV.framework/DABookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DABookmarkDAV/DABookmarkDAV-Structs.h>
#import <DataAccess/DAAccount.h>
#import <DABookmarkDAV/CoreDAVAccountInfoProvider.h>
#import <DABookmarkDAV/CoreDAVLogDelegate.h>
#import <DABookmarkDAV/CoreDAVDiscoveryTaskGroupDelegate.h>

@class CoreDAVDiscoveryTaskGroup, DACoreDAVLogger, DACoreDAVTaskManager, NSString;

@interface BookmarkDAVAccount : DAAccount <CoreDAVAccountInfoProvider, CoreDAVLogDelegate, CoreDAVDiscoveryTaskGroupDelegate> {

	int _bookmarkDAVAccountVersion;
	CoreDAVDiscoveryTaskGroup* _checkValidityTaskGroup;
	DACoreDAVLogger* _curLogger;

}

@property (nonatomic,readonly) int bookmarkDAVAccountVersion;                                 //@synthesize bookmarkDAVAccountVersion=_bookmarkDAVAccountVersion - In the implementation block
@property (nonatomic,readonly) DACoreDAVTaskManager * taskManager; 
@property (nonatomic,retain) CoreDAVDiscoveryTaskGroup * checkValidityTaskGroup;              //@synthesize checkValidityTaskGroup=_checkValidityTaskGroup - In the implementation block
@property (nonatomic,retain) DACoreDAVLogger * curLogger;                                     //@synthesize curLogger=_curLogger - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)bookmarkDAVAccountVersion;
-(void)dealloc;
-(void)noteHomeSetOnDifferentHost:(id)arg1 ;
-(id)serverRoot;
-(id)userAgentHeader;
-(id)serverComplianceClasses;
-(void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setServerComplianceClasses:(id)arg1 ;
-(void)discoveryTask:(id)arg1 gotAccountInfo:(id)arg2 error:(id)arg3 ;
-(int)coreDAVLogLevel;
-(int)coreDAVOutputLevel;
-(void)coreDAVLogDiagnosticMessage:(id)arg1 atLevel:(int)arg2 ;
-(char)shouldLogTransmittedData;
-(void)coreDAVLogTransmittedDataPartial:(id)arg1 ;
-(void)coreDAVTransmittedDataFinished;
-(id)spinnerIdentifiers;
-(id)_validationErrorFromRawError:(id)arg1 ;
-(CoreDAVDiscoveryTaskGroup *)checkValidityTaskGroup;
-(void)setCheckValidityTaskGroup:(CoreDAVDiscoveryTaskGroup *)arg1 ;
-(id)wellKnownPaths;
-(void)setCurLogger:(DACoreDAVLogger *)arg1 ;
-(DACoreDAVLogger *)curLogger;
-(DACoreDAVTaskManager *)taskManager;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
-(char)isEqualToAccount:(id)arg1 ;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(id)onBehalfOfBundleIdentifier;
-(char)handleTrustChallenge:(id)arg1 ;
@end
