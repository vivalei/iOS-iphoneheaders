/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/NSSecureCoding.h>

@class NSURL;

@interface PKImageSet : NSObject <NSSecureCoding> {

	NSURL* _originCacheURL;
	long long _version;

}

@property (nonatomic,copy) NSURL * originCacheURL;              //@synthesize originCacheURL=_originCacheURL - In the implementation block
@property (assign,nonatomic) long long version;                 //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)shouldCache;
+(long long)currentVersion;
+(id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 fileURL:(id)arg5 cacheURL:(id)arg6 ;
+(long long)imageSetType;
+(Class)_classForDisplayProfileType:(long long)arg1 ;
+(Class)classForImageSetType:(long long)arg1 ;
+(id)_archivedImageSet:(id)arg1 forDisplayProfile:(id)arg2 ;
+(id)_archiveURL:(id)arg1 ;
+(BOOL)archivedObject:(id)arg1 matchesDisplayProfile:(id)arg2 ;
+(id)archiveName;
+(id)imageSetForType:(long long)arg1 displayProfile:(id)arg2 fileURL:(id)arg3 cacheURL:(id)arg4 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
-(void)preheatImages;
-(id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 ;
-(void)setOriginCacheURL:(NSURL *)arg1 ;
-(NSURL *)originCacheURL;
-(void)saveCache:(id)arg1 ;
-(BOOL)_isSetImage:(id)arg1 equalToImage:(id)arg2 ;
@end

