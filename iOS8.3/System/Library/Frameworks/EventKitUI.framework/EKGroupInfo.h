/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:47:26 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSString, EKSource, NSArray, NSSet;

@interface EKGroupInfo : NSObject {

	NSMutableArray* _calendars;
	int _customGroupType;
	NSString* _customTitle;
	NSString* _customTitleAtBeginningOfSentence;
	NSString* _typeTitle;
	NSString* _title;
	NSString* _titleForBeginningOfSentence;
	char _selected;
	char _showSelectAllButton;
	EKSource* _source;

}

@property (nonatomic,retain) EKSource * source;                               //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) char selected;                                   //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) char showSelectAllButton;                        //@synthesize showSelectAllButton=_showSelectAllButton - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * typeTitle; 
@property (nonatomic,retain,readonly) NSArray * calendarInfos; 
@property (nonatomic,copy,readonly) NSSet * calendarSet; 
@property (nonatomic,copy,readonly) NSSet * selectedCalendarSet; 
@property (nonatomic,readonly) unsigned numCalendars; 
@property (nonatomic,readonly) unsigned numSelectableCalendars; 
@property (nonatomic,readonly) unsigned numSelectedCalendars; 
@property (nonatomic,readonly) char showAddCalendarButton; 
@property (nonatomic,readonly) char showCalendarNameIfSolitary; 
@property (nonatomic,readonly) int sortOrder; 
@property (nonatomic,readonly) char isSubscribed; 
-(char)isSubscribed;
-(NSArray *)calendarInfos;
-(char)showSelectAllButton;
-(char)showAddCalendarButton;
-(id)initWithCustomGroupType:(int)arg1 ;
-(NSSet *)calendarSet;
-(unsigned)numSelectedCalendars;
-(unsigned)numSelectableCalendars;
-(void)insertCalendarInfo:(id)arg1 ;
-(unsigned)numCalendars;
-(id)titleForBeginningOfSentence:(char)arg1 ;
-(void)selectNone;
-(char)showCalendarNameIfSolitary;
-(NSSet *)selectedCalendarSet;
-(void)setShowSelectAllButton:(char)arg1 ;
-(void)setCustomTitle:(id)arg1 forBeginningOfSentence:(id)arg2 ;
-(void)removeCalendar:(id)arg1 ;
-(void)insertDeclinedEventsItem;
-(NSString *)typeTitle;
-(id)calendarAtIndex:(unsigned)arg1 ;
-(id)copyCalendars;
-(id)init;
-(id)description;
-(NSString *)title;
-(void)setSelected:(char)arg1 ;
-(void)selectAll;
-(int)sortOrder;
-(EKSource *)source;
-(void)setSource:(EKSource *)arg1 ;
-(char)selected;
-(id)initWithSource:(id)arg1 ;
@end
