/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>

@class CalendarListHeaderCellContentView;

@interface CalendarListHeaderCell : UIView {

	CalendarListHeaderCellContentView* _contentView;
	bool _showWeekNumber;
	double _date;

}

@property (assign,nonatomic) double date;                      //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) bool indentsForDots; 
@property (nonatomic,readonly) bool reusable; 
@property (assign,nonatomic) bool showWeekNumber;              //@synthesize showWeekNumber=_showWeekNumber - In the implementation block
-(bool)indentsForDots;
-(void)setIndentsForDots:(bool)arg1 ;
-(void)setShowWeekNumber:(bool)arg1 ;
-(id)initWithFrame:(CGRect)arg1 date:(double)arg2 ;
-(bool)reusable;
-(bool)showWeekNumber;
-(void)setOpaque:(bool)arg1 ;
-(void)setNeedsDisplay;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)date;
-(id)_backgroundImage;
-(void)setDate:(double)arg1 ;
-(void).cxx_destruct;
@end

