/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UILabel.h>

@class UIButton;

@interface UIButtonLabel : UILabel {

	BOOL _reverseShadow;
	UIButton* _button;

}
-(void)setLineBreakMode:(int)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)_setWantsAutolayout;
-(void)setFont:(id)arg1 ;
-(CGSize)shadowOffset;
-(CGSize)intrinsicContentSize;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)setMinimumScaleFactor:(float)arg1 ;
-(void)setTextAlignment:(int)arg1 ;
-(void)_setMinimumFontSize:(float)arg1 ;
-(id)_defaultAttributes;
-(id)_initWithFrame:(CGRect)arg1 button:(id)arg2 ;
-(void)setReverseShadow:(BOOL)arg1 ;
@end

