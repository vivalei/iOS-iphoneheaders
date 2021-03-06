/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:09 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <EventKitUI/EKDayAllDayViewDelegate.h>
#import <EventKitUI/EKDayViewContentDelegate.h>
#import <EventKitUI/EKDayTimeViewDelegate.h>

@protocol EKDayViewDelegate, EKDayViewDataSource;
@class UIImageView, UIView, NSArray, NSDate, EKDayAllDayView, EKDayViewContent, EKDayTimeView, EKDayViewSpringLoadedScrollAnimation, UIScrollView, NSTimer, UIPinchGestureRecognizer, UITapGestureRecognizer, NSDateComponents, NSCalendar, EKEvent, UIColor, NSString;

@interface EKDayView : UIView <UIScrollViewDelegate, EKDayAllDayViewDelegate, EKDayViewContentDelegate, EKDayTimeViewDelegate> {

	long long _orientation;
	double _dayStart;
	double _dayEnd;
	double _nextDSTTransition;
	BOOL _scrollbarShowsInside;
	BOOL _scrollingToOccurrence;
	BOOL _settingDate;
	BOOL _userScrolling;
	BOOL _scrollToOccurrencesOnNextReload;
	UIImageView* _topVerticalGridExtension;
	UIImageView* _bottomVerticalGridExtension;
	UIView* _bottomLine;
	NSArray* _existingTimedOcurrences;
	NSDate* _lastInspectedOccurrenceOnDate;
	CGSize _scrolledToFirstVisibleSecondForSize;
	EKDayAllDayView* _allDayView;
	EKDayViewContent* _dayContent;
	EKDayTimeView* _timeView;
	EKDayViewSpringLoadedScrollAnimation* _scrollAnimation;
	UIScrollView* _scroller;
	NSTimer* _timeMarkerTimer;
	CGPoint _lastPinchDistance;
	CGPoint _lastPinchPoint1;
	BOOL _pinching;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	BOOL _allowsOccurrenceSelection;
	BOOL _alignsMidnightToTop;
	BOOL _shouldEverShowTimeIndicators;
	BOOL _usesVibrantGridDrawing;
	BOOL _allowPinchingHourHeights;
	int _outlineStyle;
	id<EKDayViewDelegate> _delegate;
	id<EKDayViewDataSource> _dataSource;
	NSDateComponents* _displayDate;
	NSCalendar* _calendar;
	double _hourScale;

}

@property (assign,nonatomic,__weak) id<EKDayViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<EKDayViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy) NSDateComponents * displayDate;                           //@synthesize displayDate=_displayDate - In the implementation block
@property (nonatomic,copy) NSCalendar * calendar;                                    //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) double dayStart;                                      //@synthesize dayStart=_dayStart - In the implementation block
@property (nonatomic,readonly) double dayEnd;                                        //@synthesize dayEnd=_dayEnd - In the implementation block
@property (assign,nonatomic) int firstVisibleSecond; 
@property (assign,nonatomic) BOOL allowsOccurrenceSelection;                         //@synthesize allowsOccurrenceSelection=_allowsOccurrenceSelection - In the implementation block
@property (assign,nonatomic) BOOL alignsMidnightToTop;                               //@synthesize alignsMidnightToTop=_alignsMidnightToTop - In the implementation block
@property (nonatomic,readonly) double scrollBarOffset; 
@property (nonatomic,readonly) NSArray * occurrenceViews; 
@property (nonatomic,retain) EKEvent * dimmedOccurrence; 
@property (nonatomic,readonly) EKDayAllDayView * allDayView; 
@property (nonatomic,readonly) double leftContentInset; 
@property (assign,nonatomic) BOOL shouldEverShowTimeIndicators;                      //@synthesize shouldEverShowTimeIndicators=_shouldEverShowTimeIndicators - In the implementation block
@property (assign,nonatomic) BOOL animatesTimeMarker; 
@property (assign,nonatomic) BOOL showsTimeLine; 
@property (assign,nonatomic) BOOL showsTimeMarker; 
@property (assign,nonatomic) BOOL showsTimeLabel; 
@property (assign,nonatomic) BOOL eventsFillGrid; 
@property (assign,nonatomic) BOOL showsLeftBorder; 
@property (assign,nonatomic) BOOL allowsScrolling; 
@property (assign,nonatomic) int outlineStyle;                                       //@synthesize outlineStyle=_outlineStyle - In the implementation block
@property (assign,nonatomic) int occurrenceBackgroundStyle; 
@property (assign,nonatomic) NSRange hoursToRender; 
@property (nonatomic,retain) UIColor * timeViewTextColor; 
@property (nonatomic,retain) UIColor * gridLineColor; 
@property (nonatomic,retain) UIColor * occurrenceTitleColor; 
@property (nonatomic,retain) UIColor * occurrenceTimeColor; 
@property (nonatomic,retain) UIColor * occurrenceLocationColor; 
@property (nonatomic,retain) UIColor * occurrenceTextBackgroundColor; 
@property (assign,nonatomic) BOOL usesVibrantGridDrawing;                            //@synthesize usesVibrantGridDrawing=_usesVibrantGridDrawing - In the implementation block
@property (assign,nonatomic) BOOL allowPinchingHourHeights;                          //@synthesize allowPinchingHourHeights=_allowPinchingHourHeights - In the implementation block
@property (assign,nonatomic) double hourScale;                                       //@synthesize hourScale=_hourScale - In the implementation block
@property (nonatomic,readonly) double scrollOffset; 
@property (assign,nonatomic) CGPoint normalizedContentOffset; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAllowsOccurrenceSelection:(BOOL)arg1 ;
-(void)setEventsFillGrid:(BOOL)arg1 ;
-(NSArray *)occurrenceViews;
-(void)setShowsLeftBorder:(BOOL)arg1 ;
-(BOOL)showsLeftBorder;
-(void)dayViewContent:(id)arg1 didSelectEvent:(id)arg2 ;
-(UIColor *)occurrenceTitleColor;
-(UIColor *)occurrenceTimeColor;
-(UIColor *)occurrenceLocationColor;
-(UIColor *)occurrenceTextBackgroundColor;
-(int)occurrenceBackgroundStyle;
-(void)setOccurrenceBackgroundStyle:(int)arg1 ;
-(void)dayViewContent:(id)arg1 didTapPinnedOccurrence:(id)arg2 ;
-(void)dayViewContent:(id)arg1 didTapInEmptySpaceOnDay:(double)arg2 ;
-(id)selectedEvent;
-(void)selectEvent:(id)arg1 ;
-(void)setDimmedOccurrence:(EKEvent *)arg1 ;
-(void)setOccurrenceTitleColor:(UIColor *)arg1 ;
-(void)setOccurrenceTimeColor:(UIColor *)arg1 ;
-(void)setOccurrenceLocationColor:(UIColor *)arg1 ;
-(void)setOccurrenceTextBackgroundColor:(UIColor *)arg1 ;
-(void)dayOccurrenceViewClicked:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id)occurrenceViewForEvent:(id)arg1 ;
-(void)configureOccurrenceViewForGestureController:(id)arg1 ;
-(BOOL)allowsOccurrenceSelection;
-(BOOL)eventsFillGrid;
-(EKEvent *)dimmedOccurrence;
-(CGRect)_scrollerRect;
-(void)_dayViewPinched:(id)arg1 ;
-(void)_doubleTap:(id)arg1 ;
-(void)_timeViewTapped:(id)arg1 ;
-(void)setAnimatesTimeMarker:(BOOL)arg1 ;
-(void)setShowsTimeMarker:(BOOL)arg1 ;
-(void)_createAllDayView;
-(void)_adjustForDateOrCalendarChange;
-(void)_localeChanged;
-(void)_updateContentForSizeCategoryChange:(id)arg1 ;
-(void)setFirstVisibleSecond:(int)arg1 ;
-(BOOL)showsTimeLine;
-(void)_startMarkerTimer;
-(void)_invalidateMarkerTimer;
-(double)scrollBarOffset;
-(double)_verticalOffset;
-(void)updateMarkerPosition;
-(void)_disposeAllDayView;
-(void)_stopScrolling;
-(void)setShowsTimeLine:(BOOL)arg1 ;
-(BOOL)animatesTimeMarker;
-(BOOL)showsTimeMarker;
-(int)_secondAtPosition:(double)arg1 ;
-(int)firstVisibleSecond;
-(double)_positionOfSecond:(int)arg1 ;
-(void)firstVisibleSecondChanged;
-(NSRange)hoursToRender;
-(void)setHoursToRender:(NSRange)arg1 ;
-(void)setUsesVibrantGridDrawing:(BOOL)arg1 ;
-(void)_scrollToSecond:(int)arg1 animated:(BOOL)arg2 whenFinished:(/*^block*/id)arg3 ;
-(void)_finishedScrollToSecond;
-(BOOL)alignsMidnightToTop;
-(void)_clearVerticalGridExtensionImageCache;
-(id)_generateVerticalGridExtensionImage;
-(void)setHourScale:(double)arg1 ;
-(void)scrollEventsIntoViewAnimated:(BOOL)arg1 ;
-(void)scrollToEvent:(id)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(double)maximumHourScale;
-(double)minimumHourScale;
-(CGPoint)_pinchDistanceForGestureRecognizer:(id)arg1 ;
-(double)dateAtPoint:(CGPoint)arg1 isAllDay:(BOOL*)arg2 requireAllDayRegionInsistence:(BOOL)arg3 ;
-(BOOL)_showingAllDaySection;
-(double)_adjustSecondForwardForDSTHole:(double)arg1 ;
-(double)_adjustSecondBackwardForDSTHole:(double)arg1 ;
-(double)highlightedHour;
-(void)setAllDayLabelHighlighted:(BOOL)arg1 ;
-(BOOL)isAllDayLabelHighlighted;
-(void)allDayView:(id)arg1 didSelectEvent:(id)arg2 ;
-(void)allDayViewDidLayoutSubviews:(id)arg1 ;
-(void)dayViewContent:(id)arg1 didCreateOccurrenceViews:(id)arg2 ;
-(void)occurrencePressed:(id)arg1 onDay:(double)arg2 ;
-(CGRect)currentTimeRectInView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 orientation:(long long)arg2 displayDate:(id)arg3 backgroundColor:(id)arg4 opaque:(BOOL)arg5 scrollbarShowsInside:(BOOL)arg6 ;
-(void)adjustFrameToSpanToMidnightFromStartDate:(id)arg1 ;
-(void)setDisplayDate:(NSDateComponents *)arg1 ;
-(void)setShouldEverShowTimeIndicators:(BOOL)arg1 ;
-(void)adjustForSignificantTimeChange;
-(void)setShowsTimeLabel:(BOOL)arg1 ;
-(BOOL)showsTimeLabel;
-(BOOL)allowsScrolling;
-(UIColor *)timeViewTextColor;
-(void)setTimeViewTextColor:(UIColor *)arg1 ;
-(UIColor *)gridLineColor;
-(void)setGridLineColor:(UIColor *)arg1 ;
-(void)setAllowPinchingHourHeights:(BOOL)arg1 ;
-(EKDayAllDayView *)allDayView;
-(double)scrollOffset;
-(CGPoint)normalizedContentOffset;
-(void)setNormalizedContentOffset:(CGPoint)arg1 ;
-(void)scrollToDate:(id)arg1 animated:(BOOL)arg2 whenFinished:(/*^block*/id)arg3 ;
-(void)dayContentView:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)dayAllDayView:(id)arg1 occurrenceViewClicked:(id)arg2 ;
-(void)bringEventToFront:(id)arg1 ;
-(void)insertViewForEvent:(id)arg1 belowViewForOtherEvent:(id)arg2 ;
-(void)setAlignsMidnightToTop:(BOOL)arg1 ;
-(void)resetLastSelectedOccurrencePoint;
-(BOOL)eventOccursOnThisDay:(id)arg1 ;
-(double)yPositionPerhapsMatchingAllDayOccurrence:(id)arg1 ;
-(CGRect)rectForEvent:(id)arg1 ;
-(BOOL)containsOccurrences;
-(void)_notifyDelegateOfFinishedScrollingToOccurrence;
-(void)setScrollerYInset:(double)arg1 keepingYPointVisible:(double)arg2 ;
-(void)relayoutExistingTimedOccurrences;
-(id)occurrenceViewAtPoint:(CGPoint)arg1 ;
-(double)dateAtPoint:(CGPoint)arg1 isAllDay:(BOOL*)arg2 ;
-(CGPoint)pointAtDate:(double)arg1 isAllDay:(BOOL)arg2 ;
-(BOOL)scrollTowardPoint:(CGPoint)arg1 ;
-(double)allDayRegionHeight;
-(void)highlightHour:(double)arg1 ;
-(void)addViewToScroller:(id)arg1 isAllDay:(BOOL)arg2 ;
-(NSDateComponents *)displayDate;
-(double)dayStart;
-(double)dayEnd;
-(BOOL)shouldEverShowTimeIndicators;
-(BOOL)usesVibrantGridDrawing;
-(BOOL)allowPinchingHourHeights;
-(double)hourScale;
-(double)leftContentInset;
-(void)dealloc;
-(void)setDataSource:(id<EKDayViewDataSource>)arg1 ;
-(void)setDelegate:(id<EKDayViewDelegate>)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(void)removeFromSuperview;
-(NSString *)description;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<EKDayViewDataSource>)dataSource;
-(id<EKDayViewDelegate>)delegate;
-(void)setTimeZone:(id)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setAllowsScrolling:(BOOL)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSCalendar *)calendar;
-(int)outlineStyle;
-(void)setOutlineStyle:(int)arg1 ;
@end

