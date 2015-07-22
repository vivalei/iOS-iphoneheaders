/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:51 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIButton, UILabel, UIImageView, UIControl, NSString, UIImage;

@interface SKUIRedeemITunesPassLearnMoreView : UIView {

	UIButton* _button;
	UILabel* _explanationLabel;
	UIImageView* _headerImageView;

}

@property (nonatomic,readonly) UIControl * button; 
@property (nonatomic,copy) NSString * buttonTitle; 
@property (nonatomic,copy) NSString * explanationString; 
@property (nonatomic,retain) UIImage * headerImage; 
-(UIControl *)button;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setButtonTitle:(NSString *)arg1 ;
-(NSString *)buttonTitle;
-(UIImage *)headerImage;
-(void)setHeaderImage:(UIImage *)arg1 ;
-(void)setExplanationString:(NSString *)arg1 ;
-(NSString *)explanationString;
@end
