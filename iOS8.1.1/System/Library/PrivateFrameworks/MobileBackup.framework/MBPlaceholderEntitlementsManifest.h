/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableArray;

@interface MBPlaceholderEntitlementsManifest : NSObject {

	NSMutableArray* _entries;

}
-(void)addEntriesForApps:(id)arg1 ;
-(id)entryAtIndex:(long long)arg1 ;
-(void)addEntriesForApp:(id)arg1 ;
-(BOOL)writeToFile:(id)arg1 error:(id*)arg2 ;
-(id)propertyList;
-(void)dealloc;
-(id)init;
-(id)initWithFile:(id)arg1 error:(id*)arg2 ;
-(long long)entryCount;
-(void)addEntry:(id)arg1 ;
@end
