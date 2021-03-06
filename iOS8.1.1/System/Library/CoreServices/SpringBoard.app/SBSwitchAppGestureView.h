/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class SBApplication, UIView, SBStretchTransformer, SBAnimationStepper;

@interface SBSwitchAppGestureView : UIView {

	long long m_orientation;
	SBApplication* m_startingApp;
	SBApplication* m_endingApp;
	SBApplication* m_leftwardApp;
	SBApplication* m_rightwardApp;
	long long m_startingViewOrientation;
	long long m_leftwardViewOrientation;
	long long m_rightwardViewOrientation;
	UIView* m_startingView;
	UIView* m_leftwardView;
	UIView* m_rightwardView;
	double m_pageWidth;
	double m_percentage;
	double m_contentOffset;
	SBStretchTransformer* m_stretchTransformer;
	BOOL m_finishingPaging;
	BOOL m_underflowing;
	BOOL m_overflowing;
	/*^block*/id m_completion;
	SBAnimationStepper* _wallpaperAnimationStepper;
	long long _startingWallpaperStyle;
	long long _leftwardWallpaperStyle;
	long long _rightwardWallpaperStyle;

}

@property (assign,nonatomic) long long orientation; 
@property (nonatomic,retain) SBApplication * startingApp; 
@property (nonatomic,retain) SBApplication * endingApp; 
@property (nonatomic,retain) SBApplication * leftwardApp; 
@property (nonatomic,retain) SBApplication * rightwardApp; 
@property (assign,nonatomic) long long startingViewOrientation; 
@property (assign,nonatomic) long long leftwardViewOrientation; 
@property (assign,nonatomic) long long rightwardViewOrientation; 
@property (getter=isPagingLeftward,nonatomic,readonly) BOOL pagingLeftward; 
@property (getter=isPagingRightward,nonatomic,readonly) BOOL pagingRightward; 
@property (assign,getter=isUnderflowing,nonatomic) BOOL underflowing; 
@property (assign,getter=isOverflowing,nonatomic) BOOL overflowing; 
@property (nonatomic,retain) UIView * startingView; 
@property (nonatomic,retain) UIView * leftwardView; 
@property (nonatomic,retain) UIView * rightwardView; 
@property (assign,nonatomic) double pageWidth; 
@property (assign,nonatomic) double percentage; 
@property (assign,nonatomic) double contentOffset; 
@property (nonatomic,retain) SBStretchTransformer * stretchTransformer; 
@property (nonatomic,copy) id completion; 
@property (nonatomic,retain) SBAnimationStepper * wallpaperAnimationStepper;               //@synthesize wallpaperAnimationStepper=_wallpaperAnimationStepper - In the implementation block
@property (assign,nonatomic) long long startingWallpaperStyle;                             //@synthesize startingWallpaperStyle=_startingWallpaperStyle - In the implementation block
@property (assign,nonatomic) long long leftwardWallpaperStyle;                             //@synthesize leftwardWallpaperStyle=_leftwardWallpaperStyle - In the implementation block
@property (assign,nonatomic) long long rightwardWallpaperStyle;                            //@synthesize rightwardWallpaperStyle=_rightwardWallpaperStyle - In the implementation block
-(void)setPercentage:(double)arg1 ;
-(id)initWithInterfaceOrientation:(long long)arg1 startingApp:(id)arg2 leftwardApp:(id)arg3 rightwardApp:(id)arg4 ;
-(void)beginPaging;
-(void)updatePaging:(double)arg1 ;
-(void)finishBackwardToStartWithCompletion:(/*^block*/id)arg1 ;
-(void)finishForwardToEndWithPercentage:(double)arg1 completion:(/*^block*/id)arg2 ;
-(SBApplication *)startingApp;
-(SBApplication *)endingApp;
-(void)setStartingApp:(SBApplication *)arg1 ;
-(void)setEndingApp:(SBApplication *)arg1 ;
-(void)setLeftwardApp:(SBApplication *)arg1 ;
-(void)setRightwardApp:(SBApplication *)arg1 ;
-(void)setStartingView:(UIView *)arg1 ;
-(void)setLeftwardView:(UIView *)arg1 ;
-(void)setRightwardView:(UIView *)arg1 ;
-(void)setStretchTransformer:(SBStretchTransformer *)arg1 ;
-(double)contentOffsetForApp:(id)arg1 ;
-(void)transformGestureViewContainer:(id)arg1 ;
-(id)viewForApp:(id)arg1 ;
-(UIView *)startingView;
-(void)setStartingViewOrientation:(long long)arg1 ;
-(void)setStartingWallpaperStyle:(long long)arg1 ;
-(SBApplication *)leftwardApp;
-(UIView *)leftwardView;
-(void)setLeftwardViewOrientation:(long long)arg1 ;
-(void)setLeftwardWallpaperStyle:(long long)arg1 ;
-(SBApplication *)rightwardApp;
-(UIView *)rightwardView;
-(void)setRightwardViewOrientation:(long long)arg1 ;
-(void)setRightwardWallpaperStyle:(long long)arg1 ;
-(void)moveToApp:(id)arg1 ;
-(void)setUnderflowing:(BOOL)arg1 ;
-(void)setOverflowing:(BOOL)arg1 ;
-(BOOL)isPagingUnderflowPercentage:(double)arg1 ;
-(void)moveToContentOffset:(double)arg1 percentage:(double)arg2 animated:(BOOL)arg3 ;
-(SBStretchTransformer *)stretchTransformer;
-(BOOL)isPagingOverflowPercentage:(double)arg1 ;
-(BOOL)isUnderflowing;
-(BOOL)isOverflowing;
-(void)moveToApp:(id)arg1 animated:(BOOL)arg2 ;
-(void)stretchTransformerAnimationDidStop:(BOOL)arg1 ;
-(double)percentageForApp:(id)arg1 ;
-(double)scaleForPercentage:(double)arg1 ;
-(double)opacityForPercentage:(double)arg1 ;
-(SBAnimationStepper *)wallpaperAnimationStepper;
-(BOOL)isPagingRightward;
-(long long)rightwardWallpaperStyle;
-(long long)leftwardWallpaperStyle;
-(void)setWallpaperAnimationStepper:(SBAnimationStepper *)arg1 ;
-(void)cleanUpWallpaperAnimation;
-(BOOL)isPagingLeftward;
-(long long)startingViewOrientation;
-(long long)leftwardViewOrientation;
-(long long)rightwardViewOrientation;
-(long long)startingWallpaperStyle;
-(void)dealloc;
-(long long)orientation;
-(double)contentOffset;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setContentOffset:(double)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(double)percentage;
-(double)pageWidth;
-(void)setPageWidth:(double)arg1 ;
@end

