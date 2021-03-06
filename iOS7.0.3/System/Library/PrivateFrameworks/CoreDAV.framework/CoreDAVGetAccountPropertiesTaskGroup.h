/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVPropFindTaskDelegate.h>
#import <CoreDAV/CoreDAVOptionsTaskDelegate.h>
#import <CoreDAV/CoreDAVPrincipalSearchPropertySetTaskDelegate.h>
#import <CoreDAV/CoreDAVTaskDelegate.h>

@class NSURL, NSString, NSSet, NSMutableSet;

@interface CoreDAVGetAccountPropertiesTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVOptionsTaskDelegate, CoreDAVPrincipalSearchPropertySetTaskDelegate, CoreDAVTaskDelegate> {

	NSURL* _principalURL;
	NSString* _displayName;
	NSURL* _resourceID;
	NSSet* _emailAddresses;
	NSSet* _collections;
	NSSet* _principalSearchProperties;
	BOOL _isExpandPropertyReportSupported;
	BOOL _fetchPrincipalSearchProperties;
	BOOL _shouldIgnoreHomeSetOnDifferentHost;
	NSMutableSet* _redirectHistory;

}

@property (readonly) NSURL * principalURL;                                                                    //@synthesize principalURL=_principalURL - In the implementation block
@property (readonly) NSString * displayName;                                                                  //@synthesize displayName=_displayName - In the implementation block
@property (readonly) NSURL * resourceID;                                                                      //@synthesize resourceID=_resourceID - In the implementation block
@property (readonly) NSSet * emailAddresses;                                                                  //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (readonly) NSSet * collections;                                                                     //@synthesize collections=_collections - In the implementation block
@property (readonly) NSSet * principalSearchProperties;                                                       //@synthesize principalSearchProperties=_principalSearchProperties - In the implementation block
@property (readonly) BOOL isExpandPropertyReportSupported;                                                    //@synthesize isExpandPropertyReportSupported=_isExpandPropertyReportSupported - In the implementation block
@property (assign) BOOL fetchPrincipalSearchProperties;                                                       //@synthesize fetchPrincipalSearchProperties=_fetchPrincipalSearchProperties - In the implementation block
@property (assign,nonatomic,@dynamic) <CoreDAVGetAccountPropertiesTaskGroupDelegate> * delegate; 
@property (assign,nonatomic) BOOL shouldIgnoreHomeSetOnDifferentHost;                                         //@synthesize shouldIgnoreHomeSetOnDifferentHost=_shouldIgnoreHomeSetOnDifferentHost - In the implementation block
-(id)collections;
-(void)dealloc;
-(id)description;
-(id)displayName;
-(id)_copyAccountPropertiesPropFindElements;
-(void)_setPropertiesFromParsedResponses:(id)arg1 ;
-(id)homeSet;
-(id)resourceID;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 ;
-(void)taskGroupWillCancelWithError:(id)arg1 ;
-(void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(BOOL)shouldIgnoreHomeSetOnDifferentHost;
-(BOOL)forceOptionsRequest;
-(void)coaxServerForPrincipalHeaders;
-(void)processPrincipalHeaders:(id)arg1 ;
-(void)_taskCompleted:(id)arg1 withError:(id)arg2 ;
-(BOOL)fetchPrincipalSearchProperties;
-(void)searchPropertySetTask:(id)arg1 completetWithPropertySearchSet:(id)arg2 error:(id)arg3 ;
-(BOOL)isExpandPropertyReportSupported;
-(void)setFetchPrincipalSearchProperties:(BOOL)arg1 ;
-(id)principalSearchProperties;
-(void)setShouldIgnoreHomeSetOnDifferentHost:(BOOL)arg1 ;
-(id)principalURL;
-(id)emailAddresses;
@end

