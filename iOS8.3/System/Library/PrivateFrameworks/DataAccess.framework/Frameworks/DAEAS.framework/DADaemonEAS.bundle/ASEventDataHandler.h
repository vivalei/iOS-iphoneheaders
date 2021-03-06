/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:24:31 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DADaemonEAS.bundle/DADaemonEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonEAS/ASDataHandler.h>

@interface ASEventDataHandler : ASDataHandler
-(int)getIdFromLocalObject:(void*)arg1 ;
-(void*)copyLocalObjectFromId:(int)arg1 ;
-(char)saveContainer;
-(id)copyOfAllLocalObjectsInContainer;
-(void)drainContainer;
-(char)wipeServerIds;
-(void)drainSuperfluousChanges;
-(void)openDB;
-(char)closeDBAndSave:(char)arg1 ;
-(id)getDAObjectWithLocalItem:(void*)arg1 serverId:(id)arg2 account:(id)arg3 ;
-(id)getTombstoneEndTimeForEvent:(id)arg1 ;
-(char)_containerHasItems;
-(int)_newCalendarEntityType;
-(int)dataclass;
@end

