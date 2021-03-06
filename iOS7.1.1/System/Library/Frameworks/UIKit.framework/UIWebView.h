/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <CoreFoundation/NSCoding.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIWebViewInternal, UIScrollView, NSURLRequest;

@interface UIWebView : UIView <NSCoding, UIScrollViewDelegate> {

	UIWebViewInternal* _internal;

}

@property (assign,nonatomic) <UIWebViewDelegate> * delegate; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,readonly) NSURLRequest * request; 
@property (getter=canGoBack,nonatomic,readonly) bool canGoBack; 
@property (getter=canGoForward,nonatomic,readonly) bool canGoForward; 
@property (getter=isLoading,nonatomic,readonly) bool loading; 
@property (assign,nonatomic) bool scalesPageToFit; 
@property (assign,nonatomic) bool detectsPhoneNumbers; 
@property (assign,nonatomic) unsigned long long dataDetectorTypes; 
@property (assign,nonatomic) bool allowsInlineMediaPlayback; 
@property (assign,nonatomic) bool mediaPlaybackRequiresUserAction; 
@property (assign,nonatomic) bool mediaPlaybackAllowsAirPlay; 
@property (assign,nonatomic) bool suppressesIncrementalRendering; 
@property (assign,nonatomic) bool keyboardDisplayRequiresUserAction; 
@property (assign,nonatomic) long long paginationMode; 
@property (assign,nonatomic) long long paginationBreakingMode; 
@property (assign,nonatomic) double pageLength; 
@property (assign,nonatomic) double gapBetweenPages; 
@property (nonatomic,readonly) unsigned long long pageCount; 
+(id)_initializeSafeCategoryFromValidationManager;
+(id)_installSafeCategoryValidationMethod;
+(void)_initializeSafeCategory;
+(void)initialize;
+(id)_relativePathFromAbsolutePath:(id)arg1 removingPathComponents:(unsigned long long)arg2 ;
+(void)_fixPathsForSandboxDirectoryChange;
+(void)_updatePersistentStoragePaths;
-(void)_accessibilityPauseSpeaking:(id)arg1 ;
-(void)_accessibilitySpeak:(id)arg1 ;
-(id)_accessibilitySpeakSelectionTextInputResponder;
-(Class)_printFormatterClass;
-(bool)isElementAccessibilityExposedToInterfaceBuilder;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOpaque:(bool)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)reload;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(bool)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(CGImageRef)newSnapshotWithRect:(CGRect)arg1 ;
-(CGImageRef)createSnapshotWithRect:(CGRect)arg1 ;
-(bool)_appliesExclusiveTouchToSubviewTree;
-(void)setDataDetectorTypes:(unsigned long long)arg1 ;
-(unsigned long long)dataDetectorTypes;
-(void)selectAll:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)_define:(id)arg1 ;
-(void)_addShortcut:(id)arg1 ;
-(void)select:(id)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(void)loadRequest:(id)arg1 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 ;
-(void)view:(id)arg1 didSetFrame:(CGRect)arg2 oldFrame:(CGRect)arg3 ;
-(void)webViewMainFrameDidFinishLoad:(id)arg1 ;
-(void)webViewMainFrameDidFailLoad:(id)arg1 withError:(id)arg2 ;
-(void)webViewMainFrameDidCommitLoad:(id)arg1 ;
-(void)saveStateToHistoryItem:(id)arg1 forWebView:(id)arg2 ;
-(void)restoreStateFromHistoryItem:(id)arg1 forWebView:(id)arg2 ;
-(id)_scrollView;
-(void)setMediaPlaybackAllowsAirPlay:(bool)arg1 ;
-(bool)mediaPlaybackAllowsAirPlay;
-(id)request;
-(void)setDetectsPhoneNumbers:(bool)arg1 ;
-(bool)detectsPhoneNumbers;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2 ;
-(bool)suppressesIncrementalRendering;
-(void)setSuppressesIncrementalRendering:(bool)arg1 ;
-(unsigned long long)pageCount;
-(id)_documentView;
-(void)scrollViewWasRemoved:(id)arg1 ;
-(bool)scalesPageToFit;
-(bool)isLoading;
-(void)_updateViewSettings;
-(id)_browserView;
-(void)_setScalesPageToFitViewportSettings;
-(void)_setRichTextReaderViewportSettings;
-(void)_updateBrowserViewExposedScrollViewRect;
-(void)_updateCheckeredPattern;
-(void)_setDrawInWebThread:(bool)arg1 ;
-(void)_updateOpaqueAndBackgroundColor;
-(void)_didRotate:(id)arg1 ;
-(void)setScalesPageToFit:(bool)arg1 ;
-(void)_webViewCommonInitWithWebView:(id)arg1 scalesPageToFit:(bool)arg2 shouldEnableReachability:(bool)arg3 ;
-(id)stringByEvaluatingJavaScriptFromString:(id)arg1 ;
-(void)setAllowsInlineMediaPlayback:(bool)arg1 ;
-(bool)allowsInlineMediaPlayback;
-(void)setMediaPlaybackRequiresUserAction:(bool)arg1 ;
-(bool)mediaPlaybackRequiresUserAction;
-(bool)canGoBack;
-(bool)canGoForward;
-(void)_rescaleDocument;
-(void)_frameOrBoundsChanged;
-(void)_updateScrollerViewForInputView:(id)arg1 ;
-(void)_didCompleteScrolling;
-(void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(void)_reportError:(id)arg1 ;
-(void)_updateRequest;
-(id)_makeAlertView;
-(void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4 ;
-(long long)paginationMode;
-(long long)_paginationMode;
-(void)setPaginationMode:(long long)arg1 ;
-(void)_setPaginationMode:(long long)arg1 ;
-(long long)paginationBreakingMode;
-(bool)_paginationBehavesLikeColumns;
-(void)setPaginationBreakingMode:(long long)arg1 ;
-(void)_setPaginationBehavesLikeColumns:(bool)arg1 ;
-(double)pageLength;
-(double)_pageLength;
-(void)setPageLength:(double)arg1 ;
-(void)_setPageLength:(double)arg1 ;
-(double)gapBetweenPages;
-(double)_gapBetweenPages;
-(void)setGapBetweenPages:(double)arg1 ;
-(void)_setGapBetweenPages:(double)arg1 ;
-(unsigned long long)_pageCount;
-(bool)keyboardDisplayRequiresUserAction;
-(void)setKeyboardDisplayRequiresUserAction:(bool)arg1 ;
-(id)_initWithFrame:(CGRect)arg1 enableReachability:(bool)arg2 ;
-(id)scrollView;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;
-(void)_beginRotation;
-(void)_finishRotation;
-(void)webViewMainFrameDidFirstVisuallyNonEmptyLayoutInFrame:(id)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5 ;
-(void)webView:(id)arg1 unableToImplementPolicyWithError:(id)arg2 frame:(id)arg3 ;
-(void)webView:(id)arg1 frame:(id)arg2 exceededDatabaseQuotaForSecurityOrigin:(id)arg3 database:(id)arg4 ;
-(void)webView:(id)arg1 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg2 totalSpaceNeeded:(unsigned long long)arg3 ;
-(void)webView:(id)arg1 printFrameView:(id)arg2 ;
-(void)webViewSupportedOrientationsUpdated:(id)arg1 ;
-(void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3 ;
-(id)webView:(id)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(id)arg3 ;
-(id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5 ;
-(void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2 ;
-(void)webViewClose:(id)arg1 ;
-(void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 ;
-(bool)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 ;
-(id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 ;
-(id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3 ;
-(void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3 ;
-(void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4 ;
-(void)webView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4 ;
-(void)webView:(id)arg1 resource:(id)arg2 didCancelAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4 ;
-(bool)webView:(id)arg1 resource:(id)arg2 canAuthenticateAgainstProtectionSpace:(id)arg3 forDataSource:(id)arg4 ;
-(id)_initWithWebView:(id)arg1 ;
-(id)_pdfViewHandler;
-(void)_setOverridesOrientationChangeEventHandling:(bool)arg1 ;
-(void)_setDrawsCheckeredPattern:(bool)arg1 ;
-(void)_setWebSelectionEnabled:(bool)arg1 ;
-(void)_setAlwaysDispatchesScrollEvents:(bool)arg1 ;
-(bool)_alwaysDispatchesScrollEvents;
-(void)_setAudioSessionCategoryOverride:(unsigned long long)arg1 ;
-(unsigned long long)_audioSessionCategoryOverride;
-(void)_setNetworkInterfaceName:(id)arg1 ;
-(id)_networkInterfaceName;
-(void)configureWithSettings:(id)arg1 ;
@end

