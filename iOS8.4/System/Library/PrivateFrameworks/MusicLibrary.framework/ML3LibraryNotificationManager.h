/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MSVDistributedNotificationObserverDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSMutableArray, NSMutableOrderedSet, ML3MusicLibrary;

@interface ML3LibraryNotificationManager : NSObject <MSVDistributedNotificationObserverDelegate> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSString* _libraryPath;
	NSMutableArray* _notificationObservers;
	NSMutableOrderedSet* _queuedLocalNotifications;
	NSMutableOrderedSet* _queuedDistributedNotificationNames;
	ML3MusicLibrary* _library;

}

@property (nonatomic,__weak,readonly) ML3MusicLibrary * library;              //@synthesize library=_library - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ML3MusicLibrary *)library;
-(id)initWithLibrary:(id)arg1 distributedAndLocalNames:(id)arg2 ;
-(void)enqueueDistributedNotificationNamed:(id)arg1 ;
-(void)enqueueLocalNotificationNamed:(id)arg1 ;
-(void)_postEnqueuedLocalNotifications;
-(void)enqueueLocalNotification:(id)arg1 ;
-(void)_postEnqueuedDistributedNotifications;
-(id)_observerForDistributedName:(id)arg1 ;
-(BOOL)observerShouldForwardDistributedNotification:(id)arg1 ;
-(void)addObserverForDistributedName:(id)arg1 localName:(id)arg2 ;
-(void)removeObserverWithDistributedName:(id)arg1 ;
-(void)removeObserverWithLocalName:(id)arg1 ;
-(id)_observerForLocalName:(id)arg1 ;
@end

