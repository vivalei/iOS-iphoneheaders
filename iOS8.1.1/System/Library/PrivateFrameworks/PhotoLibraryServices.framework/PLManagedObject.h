/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:18 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class PLPhotoLibrary, NSString;

@interface PLManagedObject : NSManagedObject

@property (nonatomic,retain,readonly) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,readonly) BOOL isRegisteredWithUserInterfaceContext; 
@property (nonatomic,copy,readonly) NSString * shortObjectIDURI; 
@property (nonatomic,copy,readonly) NSString * pl_shortDescription; 
-(PLPhotoLibrary *)photoLibrary;
-(void)willSave;
-(BOOL)isRegisteredWithUserInterfaceContext;
-(NSString *)pl_shortDescription;
-(NSString *)shortObjectIDURI;
@end
