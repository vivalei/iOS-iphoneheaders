/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:34:17 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AggregateDictionary.framework/Support/addaily
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, NSMutableString, NSString;

@interface ADKeyStore : NSObject {

	NSMutableSet* _whitelistedScalarKeys;
	NSMutableSet* _whitelistedScalarPrefixes;
	NSMutableSet* _whitelistedDistributionKeys;
	NSMutableSet* _whitelistedDistributionPrefixes;
	NSMutableSet* _whitelistedMetadataKeys;
	char _isInternalDevice;
	NSMutableString* _baselineDigest;
	NSMutableString* _whitelistDigest;

}

@property (nonatomic,readonly) NSString * baselineDigest;               //@synthesize baselineDigest=_baselineDigest - In the implementation block
@property (nonatomic,readonly) NSString * whitelistDigest;              //@synthesize whitelistDigest=_whitelistDigest - In the implementation block
+(id)defaultWhitelist;
-(char)scalarKeyIsWhitelisted:(id)arg1 ;
-(char)distributionKeyIsWhitelisted:(id)arg1 ;
-(char)metadataKeyIsWhitelisted:(id)arg1 ;
-(NSString *)baselineDigest;
-(NSString *)whitelistDigest;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(id)initWithDefaultPath;
@end

