/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:01:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class UIActivityIndicatorView;

@interface PLFilledActivityIndicator : UIView {

	UIActivityIndicatorView* _indicatorView;

}
-(id)initWithLocation:(CGPoint)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(char)isOpaque;
-(char)isAnimating;
-(void)stopAnimating;
-(void)startAnimatingAfterDelay:(double)arg1 ;
@end
