/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:13 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol MPTermsViewControllerDelegate;
@class SSTermsAndConditions, UIActivityIndicatorView, UIView, UITextView;

@interface MPTermsViewController : UIViewController {

	BOOL _needToLoadTerms;
	SSTermsAndConditions* _termsAndConditions;
	id<MPTermsViewControllerDelegate> _delegate;
	UIActivityIndicatorView* _activityIndicatorView;
	UIView* _topSpacerView;
	UIView* _bottomSpacerView;
	UITextView* _termsTextView;

}

@property (assign,nonatomic,__weak) id<MPTermsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;                //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,retain) UIView * topSpacerView;                                         //@synthesize topSpacerView=_topSpacerView - In the implementation block
@property (nonatomic,retain) UIView * bottomSpacerView;                                      //@synthesize bottomSpacerView=_bottomSpacerView - In the implementation block
@property (nonatomic,retain) UITextView * termsTextView;                                     //@synthesize termsTextView=_termsTextView - In the implementation block
-(void)_setupViewForLoadingTerms;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)_startLoadingTerms;
-(UITextView *)termsTextView;
-(void)_userAcceptedTerms;
-(void)setTermsTextView:(UITextView *)arg1 ;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)setTopSpacerView:(UIView *)arg1 ;
-(void)setBottomSpacerView:(UIView *)arg1 ;
-(UIView *)topSpacerView;
-(UIView *)bottomSpacerView;
-(void)_acceptAction:(id)arg1 ;
-(void)_loadedTerms:(id)arg1 ;
-(void)_failedToLoadTermsWithError:(id)arg1 ;
-(void)_setupViewForShowingTerms;
-(void)_setupViewForFailedToLoadTerms;
-(void)_failedToAcceptTermsWithError:(id)arg1 ;
-(void)_setupViewForFailedToAcceptTerms;
-(void)_cancelAction:(id)arg1 ;
-(void)setDelegate:(id<MPTermsViewControllerDelegate>)arg1 ;
-(id)init;
-(id<MPTermsViewControllerDelegate>)delegate;
-(BOOL)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
@end
