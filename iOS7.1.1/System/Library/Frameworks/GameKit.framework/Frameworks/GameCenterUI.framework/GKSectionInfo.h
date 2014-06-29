/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSPredicate, NSArray, NSString;

@interface GKSectionInfo : NSObject {

	long long _section;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;
	NSArray* _items;
	NSString* _title;

}

@property (assign,nonatomic) long long section;                      //@synthesize section=_section - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors;              //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,retain) NSArray * items;                        //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSString * title;                       //@synthesize title=_title - In the implementation block
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)description;
-(id)title;
-(id)items;
-(void)setItems:(id)arg1 ;
-(long long)section;
-(void)setPredicate:(id)arg1 ;
-(void)setSection:(long long)arg1 ;
-(void)setSortDescriptors:(id)arg1 ;
-(id)predicate;
-(id)sortDescriptors;
@end
