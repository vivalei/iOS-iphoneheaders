/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <SiriUI/SiriUIViewController.h>

@protocol SiriUIReusableView, SiriUISnippetViewControllerDelegate;
@class UICollectionReusableView, AceObject, SAUISnippet, NSAttributedString, NSString, NSArray, SAUIAppPunchOut, SAUIConfirmationOptions;

@interface SiriUISnippetViewController : UIViewController <SiriUIViewController> {

	UICollectionReusableView*<SiriUIReusableView> _headerView;
	UICollectionReusableView*<SiriUIReusableView> _footerView;
	UICollectionReusableView*<SiriUIReusableView> _transparentHeaderView;
	UICollectionReusableView*<SiriUIReusableView> _transparentFooterView;
	BOOL _topKeylineHidden;
	BOOL _wantsConfirmationInsets;
	BOOL _isFullPadWidth;
	BOOL _loading;
	BOOL _confirmed;
	BOOL _cancelled;
	BOOL _virgin;
	BOOL _willAnimateConfirmation;
	BOOL _willAnimateCancellation;
	BOOL _showHeaderChevron;
	BOOL _provisional;
	AceObject* aceObject;
	id<SiriUISnippetViewControllerDelegate> _delegate;
	SAUISnippet* _snippet;
	NSAttributedString* _attributedSubtitle;
	NSString* _navigationTitle;
	NSArray* _requestContext;
	SAUIAppPunchOut* _headerPunchOut;
	SAUIAppPunchOut* _snippetPunchOut;
	long long _defaultKeylineType;
	SAUIConfirmationOptions* _previousConfirmationOptions;
	UIEdgeInsets _defaultViewInsets;

}

@property (assign,nonatomic,__weak) id<SiriUISnippetViewControllerDelegate> delegate;                                                                                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SAUISnippet * snippet;                                                                                                                          //@synthesize snippet=_snippet - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSAttributedString * attributedSubtitle;                                                                                                          //@synthesize attributedSubtitle=_attributedSubtitle - In the implementation block
@property (assign,nonatomic) BOOL topKeylineHidden;                                                                                                                          //@synthesize topKeylineHidden=_topKeylineHidden - In the implementation block
@property (nonatomic,copy) NSString * navigationTitle;                                                                                                                       //@synthesize navigationTitle=_navigationTitle - In the implementation block
@property (nonatomic,copy) NSArray * requestContext;                                                                                                                         //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,retain) SAUIAppPunchOut * headerPunchOut;                                                                                                               //@synthesize headerPunchOut=_headerPunchOut - In the implementation block
@property (nonatomic,retain) SAUIAppPunchOut * snippetPunchOut;                                                                                                              //@synthesize snippetPunchOut=_snippetPunchOut - In the implementation block
@property (assign,nonatomic) UIEdgeInsets defaultViewInsets;                                                                                                                 //@synthesize defaultViewInsets=_defaultViewInsets - In the implementation block
@property (assign,nonatomic) BOOL wantsConfirmationInsets;                                                                                                                   //@synthesize wantsConfirmationInsets=_wantsConfirmationInsets - In the implementation block
@property (assign,nonatomic) BOOL isFullPadWidth;                                                                                                                            //@synthesize isFullPadWidth=_isFullPadWidth - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                                                                                                                  //@synthesize loading=_loading - In the implementation block
@property (assign,getter=isConfirmed,nonatomic) BOOL confirmed;                                                                                                              //@synthesize confirmed=_confirmed - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                                                                                                              //@synthesize cancelled=_cancelled - In the implementation block
@property (getter=isVirgin,nonatomic,readonly) BOOL virgin;                                                                                                                  //@synthesize virgin=_virgin - In the implementation block
@property (assign,nonatomic) long long defaultKeylineType;                                                                                                                   //@synthesize defaultKeylineType=_defaultKeylineType - In the implementation block
@property (assign,setter=_setWillAnimateConfirmation:,getter=_willAnimateConfirmation,nonatomic) BOOL willAnimateConfirmation;                                               //@synthesize willAnimateConfirmation=_willAnimateConfirmation - In the implementation block
@property (assign,setter=_setWillAnimateCancellation:,getter=_willAnimateCancellation,nonatomic) BOOL willAnimateCancellation;                                               //@synthesize willAnimateCancellation=_willAnimateCancellation - In the implementation block
@property (setter=_setPreviousConfirmationOptions:,getter=_previousConfirmationOptions,nonatomic,retain) SAUIConfirmationOptions * previousConfirmationOptions;              //@synthesize previousConfirmationOptions=_previousConfirmationOptions - In the implementation block
@property (assign,nonatomic) BOOL showHeaderChevron;                                                                                                                         //@synthesize showHeaderChevron=_showHeaderChevron - In the implementation block
@property (assign,setter=_setProvisional:,getter=_isProvisional,nonatomic) BOOL provisional;                                                                                 //@synthesize provisional=_provisional - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) AceObject * aceObject; 
-(id)_footerView;
-(void)setAttributedSubtitle:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedSubtitle;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)setDelegate:(id<SiriUISnippetViewControllerDelegate>)arg1 ;
-(id<SiriUISnippetViewControllerDelegate>)delegate;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(BOOL)isLoading;
-(id)_privateDelegate;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)siriDidDeactivate;
-(double)desiredHeight;
-(void)setSnippet:(SAUISnippet *)arg1 ;
-(SAUISnippet *)snippet;
-(NSString *)navigationTitle;
-(NSArray *)requestContext;
-(void)setRequestContext:(NSArray *)arg1 ;
-(void)setDefaultViewInsets:(UIEdgeInsets)arg1 ;
-(Class)transparentFooterViewClass;
-(void)configureReusableTransparentFooterView:(id)arg1 ;
-(double)desiredHeightForTransparentFooterView;
-(void)wasAddedToTranscript;
-(AceObject *)aceObject;
-(void)setAceObject:(AceObject *)arg1 ;
-(BOOL)removedAfterDialogProgresses;
-(BOOL)isVirgin;
-(void)_setVirgin:(BOOL)arg1 ;
-(long long)_pinAnimationType;
-(long long)_insertionAnimation;
-(long long)_replacementAnimation;
-(void)setTopKeylineHidden:(BOOL)arg1 ;
-(void)siriWillLayoutSnippetView;
-(void)_cellDidLayoutSubviews;
-(void)siriDidLayoutSnippetView;
-(BOOL)_hasConfirmationButtons;
-(BOOL)_willAnimateConfirmation;
-(BOOL)_willAnimateCancellation;
-(Class)footerViewClass;
-(BOOL)_hasConfirmationOrCancelledInsets;
-(double)desiredHeightForHeaderView;
-(double)desiredHeightForFooterView;
-(double)desiredHeightForTransparentHeaderView;
-(id)_transparentHeaderView;
-(id)_transparentFooterView;
-(UIEdgeInsets)defaultViewInsets;
-(SAUIAppPunchOut *)snippetPunchOut;
-(BOOL)isConfirmed;
-(void)_snippetPunchOutButtonTapped;
-(SAUIAppPunchOut *)headerPunchOut;
-(BOOL)showHeaderChevron;
-(void)setIsFullPadWidth:(BOOL)arg1 ;
-(void)configureReusableHeaderView:(id)arg1 ;
-(Class)headerViewClass;
-(void)setWantsConfirmationInsets:(BOOL)arg1 ;
-(void)setShowHeaderChevron:(BOOL)arg1 ;
-(BOOL)_isProvisional;
-(BOOL)wantsConfirmationInsets;
-(id)_previousConfirmationOptions;
-(void)configureReusableFooterView:(id)arg1 ;
-(void)configureReusableTransparentHeaderView:(id)arg1 ;
-(BOOL)topKeylineHidden;
-(void)headerTapped:(id)arg1 ;
-(void)confirmButtonTapped:(id)arg1 ;
-(Class)transparentHeaderViewClass;
-(id)_createReusableViewIfNeededWithClass:(Class)arg1 ;
-(void)willCancel;
-(void)willConfirm;
-(void)setConfirmed:(BOOL)arg1 ;
-(void)_snippetViewControllerWillBeRemoved;
-(id)alternativeAceCommandsToPerformIfNotExposingViews;
-(void)setNavigationTitle:(NSString *)arg1 ;
-(void)setHeaderPunchOut:(SAUIAppPunchOut *)arg1 ;
-(void)setSnippetPunchOut:(SAUIAppPunchOut *)arg1 ;
-(BOOL)isFullPadWidth;
-(long long)defaultKeylineType;
-(void)setDefaultKeylineType:(long long)arg1 ;
-(void)_setWillAnimateConfirmation:(BOOL)arg1 ;
-(void)_setWillAnimateCancellation:(BOOL)arg1 ;
-(void)_setPreviousConfirmationOptions:(id)arg1 ;
-(void)_setProvisional:(BOOL)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(id)_headerView;
@end
