/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface DetailScrollView : UIView {

	id _delegate;
	char _scrolling;

}

@property (assign,nonatomic) CGPoint contentOffset; 
@property (assign,nonatomic) id delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * contentView; 
-(void)_didEndScrolling;
-(void)_snapBack;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(CGPoint)contentOffset;
-(void)setContentOffset:(CGPoint)arg1 animated:(char)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(UIView *)contentView;
-(void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(char)canBecomeFirstResponder;
@end

