/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:51 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/DataClassMigrators/0AppMigrator.migrator/0AppMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <0AppMigrator/0AppMigrator-Structs.h>
#import <DataMigration/DataClassMigrator.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface MIAppMigrator : DataClassMigrator {

	unsigned long long _countItemsMigrated;
	NSArray* _itemsToMigrate;
	NSDictionary* _installMap;
	NSDictionary* _harborMap;
	NSMutableDictionary* _groupContainerMap;
	NSString* _lastSystemBuildVersion;
	BOOL _fixAppBundleContainerProtection;
	BOOL _removeAppMetadataFromDataContainers;

}
-(id)_bundleIdentifierForBundle:(id)arg1 ;
-(BOOL)_writeIconForBundle:(CFBundleRef)arg1 toURL:(id)arg2 ;
-(BOOL)_migrateSafeHarbors;
-(BOOL)_migrateContainerWithInfo:(id)arg1 ;
-(BOOL)_moveAllItemsInGroupContainerURL:(id)arg1 toGroupContainerURL:(id)arg2 ;
-(BOOL)_stageAndInstallPlaceholderForBundleAtURL:(id)arg1 withIdentifier:(id)arg2 ;
-(BOOL)_migrateDataContainerForIdentifier:(id)arg1 fromURL:(id)arg2 toURL:(id)arg3 ;
-(BOOL)_stageAndInstallBundleAtURL:(id)arg1 withIdentifier:(id)arg2 andVPNPluginAtURL:(id)arg3 inContainerURL:(id)arg4 ;
-(BOOL)_migrateGroupContainersForIdentifier:(id)arg1 ;
-(BOOL)_containerHasMissedItems:(id)arg1 withIdentifier:(id)arg2 ;
-(id)_loadAndValidateMigrationMarkerAtURL:(id)arg1 ;
-(id)_introspectContainer:(id)arg1 orderResultEarly:(BOOL*)arg2 ;
-(id)dataClassName;
-(float)estimatedDuration;
-(float)migrationProgress;
-(id)init;
-(BOOL)performMigration;
@end

