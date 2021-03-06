/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:19 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <CloudDocs/NSSecureCoding.h>

@class NSString, NSMutableDictionary, NSMultiReadUniWriteLock, NSDate, NSData, NSSet, NSURL;

@interface BRContainer : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSMutableDictionary* _propertiesByBundleID;
	NSMultiReadUniWriteLock* _readWriteLock;
	long long _lastServerUpdateOnceToken;
	NSDate* _lastServerUpdate;
	long long _currentStatusOnceToken;
	NSData* _sbExtension;
	unsigned _currentStatus;
	BOOL _isOverQuota;
	BOOL _isCloudSyncTCCDisabled;
	BOOL _isInInitialState;
	BOOL _isDocumentScopePublic;

}

@property (nonatomic,readonly) NSData * propertiesData; 
@property (assign,nonatomic) unsigned currentStatus; 
@property (nonatomic,retain) NSDate * lastServerUpdate; 
@property (assign,getter=isOverQuota,nonatomic) BOOL overQuota; 
@property (nonatomic,copy,readonly) NSSet * bundleIdentifiers; 
@property (nonatomic,readonly) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) BOOL isDocumentScopePublic;                     //@synthesize isDocumentScopePublic=_isDocumentScopePublic - In the implementation block
@property (assign,nonatomic) BOOL isInInitialState;                            //@synthesize isInInitialState=_isInInitialState - In the implementation block
@property (nonatomic,readonly) NSString * supportedFolderLevels; 
@property (nonatomic,readonly) NSURL * documentsURL; 
@property (nonatomic,readonly) NSSet * documentsTypes; 
@property (nonatomic,readonly) NSSet * exportedTypes; 
@property (nonatomic,readonly) NSSet * importedTypes; 
@property (nonatomic,retain,readonly) NSDate * lastServerUpdate; 
@property (nonatomic,readonly) unsigned currentStatus; 
@property (getter=isOverQuota,nonatomic,readonly) BOOL overQuota;              //@synthesize isOverQuota=_isOverQuota - In the implementation block
@property (assign,nonatomic) BOOL isCloudSyncTCCDisabled;                      //@synthesize isCloudSyncTCCDisabled=_isCloudSyncTCCDisabled - In the implementation block
+(BOOL)versionOfBundle:(id)arg1 changedFromVersion:(id)arg2 ;
+(id)classesForDecoding;
+(id)containerIDFromSharedMangledID:(id)arg1 ;
+(id)ownerNameFromSharedMangledID:(id)arg1 ;
+(BOOL)validateOwnerName:(id)arg1 ;
+(void)_generateiOSIconsIntoDict:(id)arg1 usingBundle:(id)arg2 ;
+(id)propertiesForContainerID:(id)arg1 usingBundle:(id)arg2 minimumBundleVersion:(id)arg3 bundleIcons:(id*)arg4 ;
+(id)sharedMangledIDWithContainerID:(id)arg1 ownerName:(id)arg2 ;
+(void)postContainerListUpdateNotification;
+(id)privateMangledContainerID:(id)arg1 ;
+(BOOL)validateContainerID:(id)arg1 ;
+(void)postContainerStatusChangeNotificationWithID:(id)arg1 key:(id)arg2 value:(id)arg3 ;
+(BOOL)validateSharedMangledID:(id)arg1 ;
+(id)privateUnmangledContainerID:(id)arg1 ;
+(id)containerForContainerID:(id)arg1 ;
+(id)readMetadataForContainerID:(id)arg1 fromPlistAtPath:(id)arg2 createIfMissing:(BOOL)arg3 error:(id*)arg4 ;
+(id)containerInRepositoryURL:(id)arg1 createIfMissing:(BOOL)arg2 error:(id*)arg3 ;
+(id)containerInRepositoryURL:(id)arg1 error:(id*)arg2 ;
+(id)containerForItemAtURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)documentContainers;
+(id)allContainersByContainerID;
+(id)containerRepositoryURLForIdentifier:(id)arg1 ;
+(id)URLForPlistOfContainerIdentifier:(id)arg1 ;
+(id)allContainers;
+(id)localizedNameForDefaultCloudDocsContainer;
+(id)containersRepositoryURL;
-(id)shortDescription;
-(BOOL)_setProperties:(id)arg1 stagedBundleIconPaths:(id)arg2 bundleIconsDict:(id)arg3 salt:(id)arg4 needsRefresh:(BOOL)arg5 ;
-(BOOL)setPropertiesFromRecordData:(id)arg1 stagedBundleIconPaths:(id)arg2 salt:(id)arg3 ;
-(BOOL)hasIconWithName:(id)arg1 ;
-(NSData *)propertiesData;
-(id)iconURLs;
-(BOOL)hasMostRecentMetadataForBundleID:(id)arg1 ;
-(BOOL)setPropertiesFromExtractorDict:(id)arg1 bundleIcons:(id)arg2 forBundleIdentifier:(id)arg3 salt:(id)arg4 ;
-(id)versionNumberForBundleIdentifier:(id)arg1 ;
-(BOOL)deleteAllContentsOnClientAndServer:(id*)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)identifier;
-(NSString *)localizedName;
-(NSURL *)documentsURL;
-(BOOL)isInInitialState;
-(NSSet *)documentsTypes;
-(id)imageDataForSize:(CGSize)arg1 scale:(long long)arg2 isiOSIcon:(BOOL*)arg3 ;
-(id)imageRepresentationsAvailable;
-(void)_computeCachedProperties;
-(id)containerRepositoryURL;
-(id)bundleIdentifiersEnumerator;
-(id)localizedNameForLocale:(id)arg1 ;
-(id)enumeratorOfBundleProperty:(id)arg1 valuesOfClass:(Class)arg2 ;
-(BOOL)_getIsDocumentScopePublic;
-(id)pathForIconName:(id)arg1 ;
-(id)initWithContainerID:(id)arg1 propertiesByBundleID:(id)arg2 ;
-(id)pathForPlist;
-(NSString *)supportedFolderLevels;
-(NSSet *)exportedTypes;
-(NSSet *)importedTypes;
-(id)imageDataForSize:(CGSize)arg1 scale:(long long)arg2 ;
-(void)_performWhileAccessingSecurityScopedContainer:(/*^block*/id)arg1 ;
-(NSDate *)lastServerUpdate;
-(void)setLastServerUpdate:(NSDate *)arg1 ;
-(unsigned)currentStatus;
-(void)setCurrentStatus:(unsigned)arg1 ;
-(BOOL)isOverQuota;
-(BOOL)isCloudSyncTCCDisabled;
-(id)mangledID;
-(NSSet *)bundleIdentifiers;
-(void)setIsCloudSyncTCCDisabled:(BOOL)arg1 ;
-(void)setIsInInitialState:(BOOL)arg1 ;
-(BOOL)isDocumentScopePublic;
@end

