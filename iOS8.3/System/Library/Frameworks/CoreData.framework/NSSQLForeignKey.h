/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:41:05 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSSQLColumn.h>

@class NSSQLToOne;

@interface NSSQLForeignKey : NSSQLColumn {

	NSSQLToOne* _toOne;

}
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(id)toOneRelationship;
-(id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2 ;
-(id)initWithEntity:(id)arg1 toOneRelationship:(id)arg2 ;
-(void)dealloc;
@end
