/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIMovieScrubberTrackViewDataSource.h>
#import <UIKit/UIMovieScrubberTrackViewDelegate.h>

@protocol UIMovieScrubberDataSource, UIMovieScrubberDelegate;
@class UIImageView, UIMovieScrubberTrackView, UIMovieScrubberEditingView, UILabel, UIImage;

@interface UIMovieScrubber : UIControl <UIMovieScrubberTrackViewDataSource, UIMovieScrubberTrackViewDelegate> {

	UIImageView* _thumbView;
	UIMovieScrubberTrackView* _trackView;
	UIMovieScrubberEditingView* _editingView;
	UILabel* _elapsedLabel;
	UILabel* _remainingLabel;
	int _timeComponents;
	UIImage* _fillImage;
	UIImage* _innerShadowImage;
	UIImage* _maskImage;
	UIImage* _shadowImage;
	<UIMovieScrubberDataSource>* _dataSource;
	<UIMovieScrubberDelegate>* _delegate;
	CGRect _trackRect;
	double _hitOffset;
	double _zoomDelay;
	bool _showTimeViews;
	bool _editable;
	double _value;
	double _maximumValue;
	double _minimumValue;
	CGPoint _touchLocationWhenTrackPressBegan;
	double _trimStartValue;
	double _trimEndValue;
	double _minTrimmedLength;
	double _maxTrimmedLength;
	double _zoomAnimationDuration;
	double _zoomAnimationDelay;
	struct {
		unsigned continuous : 1;
		unsigned animating : 1;
		unsigned creatingSnapshot : 1;
		unsigned needsReload : 1;
		unsigned layoutTimeViews : 1;
		unsigned computeTrackRect : 1;
		unsigned clampingTrimRange;
		unsigned zoomed : 1;
		unsigned zoomAnimating : 1;
		unsigned trackIsPressed : 1;
		unsigned trackAnimating : 1;
		unsigned thumbIsVisible : 1;
		unsigned handleIsPressed : 1;
		unsigned willBeginEditing : 1;
		unsigned editing : 1;
		unsigned editingHandle;
		unsigned rotationDisabled;
		unsigned isInNavigationBar : 1;
		unsigned delegateValueDidChange : 1;
		unsigned delegateStartValueDidChange : 1;
		unsigned delegateEndValueDidChange : 1;
		unsigned delegateWillBeginRequestingThumbnails : 1;
		unsigned delegateDidFinishRequestingThumbnails : 1;
		unsigned delegateWillBeginEditing : 1;
		unsigned delegateDidBeginEditing : 1;
		unsigned delegateDidCancelEditing : 1;
		unsigned delegateEditingAnimationFinished : 1;
		unsigned delegateWidthDeltaOriginXDelta : 1;
		unsigned delegateDidBeginAnimatingZoom : 1;
		unsigned delegateDidEndAnimatingZoom : 1;
		unsigned delegateWillZoom : 1;
		unsigned dataSourceRequestThumbnailImageIsSummmary : 1;
	}  _sliderFlags;
	double _edgeInset;

}

@property (assign,nonatomic) double value; 
@property (assign,nonatomic,@dynamic) double duration; 
@property (assign,nonatomic) double minimumTrimLength;                                 //@synthesize minTrimmedLength=_minTrimmedLength - In the implementation block
@property (assign,nonatomic) double maximumTrimLength;                                 //@synthesize maxTrimmedLength=_maxTrimmedLength - In the implementation block
@property (assign,nonatomic) double trimStartValue; 
@property (assign,nonatomic) double trimEndValue; 
@property (nonatomic,readonly) double zoomMinimumValue; 
@property (nonatomic,readonly) double zoomMaximumValue; 
@property (getter=isZoomAnimating,nonatomic,readonly) bool zoomAnimating; 
@property (assign,nonatomic) bool thumbIsVisible; 
@property (assign,getter=isEditable,nonatomic) bool editable; 
@property (assign,getter=isContinuous,nonatomic) bool continuous; 
@property (assign,nonatomic) <UIMovieScrubberDataSource> * dataSource; 
@property (assign,nonatomic) <UIMovieScrubberDelegate> * delegate; 
@property (assign,nonatomic) double zoomDelay;                                         //@synthesize zoomDelay=_zoomDelay - In the implementation block
@property (assign,nonatomic) bool showTimeViews;                                       //@synthesize showTimeViews=_showTimeViews - In the implementation block
@property (nonatomic,readonly) bool isInsideNavigationBar; 
@property (assign,nonatomic) double edgeInset;                                         //@synthesize edgeInset=_edgeInset - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets alignmentMargins; 
@property (assign,getter=isEditing,nonatomic) bool editing; 
+(id)timeStringForSeconds:(int)arg1 forceFullWidthComponents:(bool)arg2 isElapsed:(bool)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)didMoveToWindow;
-(void)reloadData;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)dataSource;
-(id)delegate;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(bool)isEditable;
-(void)setValue:(double)arg1 ;
-(id)scriptingInfoWithChildren;
-(bool)cancelTouchTracking;
-(double)value;
-(void)didMoveToSuperview;
-(bool)_alwaysHandleScrollerMouseEvent;
-(id)_scriptingInfo;
-(CGSize)intrinsicContentSize;
-(bool)isEditing;
-(void)setEditing:(bool)arg1 animated:(bool)arg2 ;
-(void)setEditing:(bool)arg1 ;
-(bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2 ;
-(bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_sendDelayedActions;
-(void)setEditable:(bool)arg1 ;
-(void)_initSubviews;
-(void)setValue:(double)arg1 animated:(bool)arg2 ;
-(void)_sliderAnimationWillStart:(id)arg1 context:(id)arg2 ;
-(void)_sliderAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)_setValue:(double)arg1 andSendAction:(bool)arg2 ;
-(bool)isContinuous;
-(void)setContinuous:(bool)arg1 ;
-(bool)isAnimatingValueChange;
-(void)movieScrubberTrackView:(id)arg1 clampedSizeWidthDelta:(double)arg2 actualSizeWidthDelta:(double)arg3 originXDelta:(double)arg4 minimumVisibleValue:(double)arg5 maximumVisibleValue:(double)arg6 ;
-(void)movieScrubberTrackViewDidExpand:(id)arg1 ;
-(void)movieScrubberTrackViewDidCollapse:(id)arg1 ;
-(void)movieScrubberTrackViewWillBeginRequestingThumbnails:(id)arg1 ;
-(void)movieScrubberTrackViewDidFinishRequestingThumbnails:(id)arg1 ;
-(double)movieScrubberTrackViewZoomAnimationDuration:(id)arg1 ;
-(double)movieScrubberTrackViewZoomAnimationDelay:(id)arg1 ;
-(void)movieScrubberTrackView:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 isSummaryThumbnail:(bool)arg3 ;
-(double)movieScrubberTrackViewThumbnailAspectRatio:(id)arg1 ;
-(double)movieScrubberTrackViewDuration:(id)arg1 ;
-(id)movieScrubberTrackView:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4 ;
-(bool)isInsideNavigationBar;
-(void)setThumbnailImage:(CGImageRef)arg1 forTimestamp:(id)arg2 ;
-(void)setZoomAnimationDuration:(double)arg1 ;
-(void)_sliderValueDidChange:(id)arg1 ;
-(CGRect)_editingRect;
-(void)setEdgeInset:(double)arg1 ;
-(void)_trimAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)setThumbIsVisible:(bool)arg1 ;
-(CGRect)_editingRectForStartTime:(double)arg1 endTime:(double)arg2 ;
-(void)_cancelTrackPress:(bool)arg1 ;
-(void)animateCancelEdit;
-(void)_animateAfterEdit:(bool)arg1 ;
-(void)_computeTrackRectForBounds:(CGRect)arg1 ;
-(CGRect)trackRect;
-(void)_updateTimes;
-(void)_updateThumbLocation;
-(CGRect)thumbRectForValue:(double)arg1 ;
-(void)setTrimEndValue:(double)arg1 ;
-(void)setTrimStartValue:(double)arg1 ;
-(void)_trackPressWasHeld;
-(void)_setZoomAnimating:(bool)arg1 ;
-(void)setRotationDisabled:(bool)arg1 ;
-(bool)pointInsideThumb:(CGPoint)arg1 withEvent:(id)arg2 ;
-(int)_editingHandleWithTouch:(id)arg1 ;
-(double)_valueForTouch:(id)arg1 ;
-(void)_beginTrackPressWithTouch:(id)arg1 touchesBegan:(bool)arg2 ;
-(void)_cancelTrackPressIfNeccessaryWithTouch:(id)arg1 ;
-(bool)thumbIsVisible;
-(void)animateAfterEdit;
-(UIEdgeInsets)alignmentMargins;
-(double)trimStartValue;
-(double)trimEndValue;
-(bool)forceZoom;
-(void)forceUnzoom;
-(double)zoomMinimumValue;
-(double)zoomMaximumValue;
-(bool)isZoomAnimating;
-(double)zoomDelay;
-(void)setZoomDelay:(double)arg1 ;
-(bool)showTimeViews;
-(void)setShowTimeViews:(bool)arg1 ;
-(double)maximumTrimLength;
-(void)setMaximumTrimLength:(double)arg1 ;
-(double)minimumTrimLength;
-(void)setMinimumTrimLength:(double)arg1 ;
-(double)edgeInset;
@end
