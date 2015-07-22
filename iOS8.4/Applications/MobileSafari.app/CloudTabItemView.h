/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIButton.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CloudTabItemViewDelegate;
@class UIView, UIPanGestureRecognizer, CloudTabItemDeleteConfirmationView, WBSCloudTab, NSString;

@interface CloudTabItemView : UIButton <UIGestureRecognizerDelegate> {

	UIView* _separatorView;
	char _editing;
	float _startingSwipeOffset;
	float _swipeOffset;
	UIPanGestureRecognizer* _panGestureRecognizer;
	CloudTabItemDeleteConfirmationView* _deleteConfirmationView;
	float _leftEdgeInset;
	char _editable;
	int _style;
	id<CloudTabItemViewDelegate> _delegate;
	WBSCloudTab* _cloudTab;

}

@property (assign,nonatomic) int style;                                                 //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<CloudTabItemViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WBSCloudTab * cloudTab;                                    //@synthesize cloudTab=_cloudTab - In the implementation block
@property (assign,getter=isEditable,nonatomic) char editable;                           //@synthesize editable=_editable - In the implementation block
@property (assign,nonatomic) char showsSeparator; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)defaultHeight;
-(WBSCloudTab *)cloudTab;
-(void)setCloudTab:(WBSCloudTab *)arg1 ;
-(void)_deleteButtonTapped:(id)arg1 ;
-(void)_setUpDeleteConfirmationViewIfNecessary;
-(float)_swipeOffsetFromPanGestureRecognizer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<CloudTabItemViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<CloudTabItemViewDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(char)isEditable;
-(int)style;
-(void)_updateStyle;
-(void)setStyle:(int)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)setEditable:(char)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(void)_panRecognized:(id)arg1 ;
-(char)showsSeparator;
-(void)setShowsSeparator:(char)arg1 ;
-(void)_setEditing:(char)arg1 animated:(char)arg2 ;
@end
