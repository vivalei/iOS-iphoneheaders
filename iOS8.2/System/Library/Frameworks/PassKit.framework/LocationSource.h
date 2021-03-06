/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:59 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <passd/SQLiteEntity.h>

@interface LocationSource : SQLiteEntity
+(id)anyInDatabase:(id)arg1 withURL:(id)arg2 ;
+(id)insertLocationSourceWithURL:(id)arg1 forPass:(id)arg2 type:(int)arg3 inDatabase:(id)arg4 ;
+(id)locationSourcePIDPredicate:(id)arg1 ;
+(id)urlPredicate:(id)arg1 ;
+(id)anyInDatabase:(id)arg1 withLocationSourcePID:(id)arg2 ;
+(id)databaseTable;
+(id)foreignKeyColumnForTable:(id)arg1 ;
-(id)initWithLocationURL:(id)arg1 type:(int)arg2 inDatabase:(id)arg3 ;
-(char)deleteFromDatabase;
@end

