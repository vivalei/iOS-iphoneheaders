/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIViewController.h>
#import <PhotoLibrary/PLAirPlaySessionDataSource.h>
#import <PhotoLibrary/PLAirPlayControllerDelegate.h>
#import <PhotoLibrary/PLDeletePhotosActionControllerDelegate.h>
#import <UIKit/UIPageControllerDelegate.h>
#import <PhotoLibrary/PLPhotoTileViewControllerDelegate.h>
#import <PhotoLibrary/PLVideoViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <PhotoLibrary/PLPhotoScrubberDataSource.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <PhotoLibrary/PLSlideshowSettingsViewControllerDelegate.h>
#import <PhotoLibrary/PLSlideshowPluginDelegate.h>
#import <PhotoLibrary/PLAirTunesServicePickerViewControllerDelegate.h>
#import <PhotoLibrary/AirPlayRemoteSlideshowDelegate.h>
#import <PhotoLibrary/PLDismissableViewController.h>
#import <PhotoLibrary/PLAssetContainerObserver.h>
#import <PhotoLibraryServices/PLAssetContainerListChangeObserver.h>
#import <PhotoLibraryServices/PLAssetChangeObserver.h>

@protocol PLPhotoBrowserControllerDelegate;
@class NSMutableDictionary, UIPageController, UIScrollView, UIView, UITransitionView, NSIndexPath, NSNumberFormatter, UIActionSheet, UIAlertView, PLProgressHUD, NSTimer, PLManagedAsset, UIWindow, UIViewController, PLProgressView, PLPublishingAgent, PLVideoRemaker, UINavigationController, UILongPressGestureRecognizer, PLEditPhotoController, PLActivityViewController, NSArray, PLLibraryImageDataProvider, NSMutableSet, UIImage, PLPhotoScrubber, UIImageView, PLPhotoTileViewController, PLPictureFramePlugin, UIBarButtonItem, UIPopoverController, PLSlideshowSettingsViewController, NSString, PLAirPlayController, PLAirPlaySession, PLAirPlayBackgroundView, PLDeletePhotosActionController, UINavigationBar, NSMutableArray, NSManagedObjectID, PLAssetContainerDataSource, PLVideoView;

@interface PLPhotoBrowserController : UIViewController <PLAirPlaySessionDataSource, PLAirPlayControllerDelegate, PLDeletePhotosActionControllerDelegate, UIPageControllerDelegate, PLPhotoTileViewControllerDelegate, PLVideoViewDelegate, UIScrollViewDelegate, UINavigationControllerDelegate, UIAlertViewDelegate, UIActionSheetDelegate, PLPhotoScrubberDataSource, UIPopoverControllerDelegate, PLSlideshowSettingsViewControllerDelegate, PLSlideshowPluginDelegate, PLAirTunesServicePickerViewControllerDelegate, AirPlayRemoteSlideshowDelegate, PLDismissableViewController, PLAssetContainerObserver, PLAssetContainerListChangeObserver, PLAssetChangeObserver> {

	<PLPhotoBrowserControllerDelegate>* __delegate;
	NSMutableDictionary* _tileCache;
	UIPageController* _pageController;
	UIScrollView* _scroller;
	UIView* _fadeToBlackView;
	UITransitionView* _slideshowTransitionView;
	UITransitionView* _cameraTransitionView;
	NSIndexPath* _currentIndexPath;
	NSIndexPath* _deletedIndexPath;
	NSIndexPath* _priorIndexPath;
	NSNumberFormatter* _scrubOverlayTitleFormatter;
	int _slideshowStatus;
	BOOL _showingNextImage;
	BOOL _tvOutOn;
	BOOL _playingVideo;
	BOOL _animating;
	CGSize _contentStartSize;
	float _startScale;
	float _endScale;
	UIView* _remakerContainerView;
	UIActionSheet* _actionView;
	UIAlertView* _alertView;
	PLProgressHUD* _savingPhotoHud;
	double _slideshowDelay;
	NSTimer* _slideshowTimer;
	SEL _photoAction;
	id _photoActionInvoker;
	PLManagedAsset* _pendingPhoto;
	UIWindow* _tvOutWindow;
	UIPageController* _tvOutPageController;
	UIScrollView* _tvOutScroller;
	NSMutableDictionary* _tvOutTileCache;
	UITransitionView* _tvOutTransitionView;
	CGRect _animationFrame;
	UIView* _animationView;
	UIViewController* _composeSheetViewController;
	unsigned _didDisplayComposeSheet : 1;
	unsigned _didSlideImageDown : 1;
	unsigned _isAnimatingSendToEmail : 1;
	id _attachmentIdentifier;
	NSTimer* _progressUpdateTimer;
	PLProgressView* _progressView;
	PLPublishingAgent* _currentPublishingAgent;
	PLPublishingAgent* _publishingAgentToPresent;
	int _remakerMode;
	PLVideoRemaker* _remaker;
	PLManagedAsset* _currentVideo;
	UINavigationController* _mmsController;
	double _maximumTrimLength;
	UILongPressGestureRecognizer* _recognizer;
	SEL _actionAfterForcedRotation;
	BOOL _canDelayImageLoading;
	BOOL _delayImageLoading;
	int _autohideControlCount;
	PLEditPhotoController* _editController;
	PLActivityViewController* _activityViewController;
	NSArray* _currentAirplayRoutes;
	unsigned _statusBarIsLocked;
	unsigned _rotationDisabled;
	unsigned _videoEditingMode : 1;
	unsigned _remaking : 1;
	unsigned _isEditingPhoto : 1;
	unsigned _clearingFullScreenView : 1;
	unsigned _scrolling : 1;
	unsigned _canShowCopyCallout : 1;
	unsigned _viewIsDisappearing : 1;
	unsigned _didRotate : 1;
	unsigned _navigationBarDisabled;
	unsigned _bottomBarDisabled;
	unsigned _appInteractionDisabled;
	unsigned _isAnimatingTrash : 1;
	unsigned _isPlayingMusic : 1;
	unsigned _didStartMusicPlayback : 1;
	unsigned _rotationDisabledUnderCropOverlay : 1;
	unsigned _didSetSimpleRemotePriority : 1;
	unsigned _paging : 1;
	unsigned _collapsing : 1;
	unsigned _rotating : 1;
	unsigned _reloadPhotoScrubber : 1;
	unsigned _videoViewWillBeginEditing : 1;
	unsigned _playVideoOnActivation : 1;
	unsigned _remakingWasCancelled : 1;
	unsigned _canUploadHDVideoOver3G : 1;
	unsigned _didSetHDVideoUploadCapability : 1;
	unsigned _didShowHDRPrompt : 1;
	unsigned _imagesAreShuffled : 1;
	unsigned _isEditingComment : 1;
	NSIndexPath* _scrubbedImageIndexPath;
	int _scrubberAssetContainerIndex;
	PLLibraryImageDataProvider* _imageDataProvider;
	NSMutableSet* _imageRequests;
	UIImage* _loadedImage;
	PLPhotoScrubber* _photoScrubber;
	UIImageView* _viewForTrashCanAnimation;
	PLPhotoTileViewController* _deletedTile;
	int _currentAirTunesMode;
	unsigned _slideshowItemsToShow;
	unsigned _slideshowItemsShown;
	NSIndexPath* _slideshowEndIndexPath;
	BOOL _fadingToBlack;
	BOOL _slideshowIsOrigami;
	BOOL _slideshowStartedInFullScreen;
	BOOL _slideshowIsLoading;
	BOOL _slideshowIsEnding;
	PLPictureFramePlugin* _slideshowPlugin;
	UIView* _slideshowView;
	UIBarButtonItem* _slideshowSettingsPopoverDisplayedFromItem;
	UIPopoverController* _slideshowSettingsPopover;
	PLSlideshowSettingsViewController* _slideshowSettingsViewController;
	NSIndexPath* _lastStreamedPhotoIndexPath;
	NSIndexPath* _lastDisplayedRemoteSlideshowPhotoIndexPath;
	NSString* _currentAirTunesTransition;
	NSArray* _availableAirTunesServices;
	UIBarButtonItem* _airTunesServicePickerPopoverDisplayedFromItem;
	UIPopoverController* _airTunesServicePickerPopover;
	PLAirPlayController* _airplayController;
	PLAirPlaySession* _airplaySession;
	unsigned _slideShowIsStreamed : 1;
	unsigned _airTunesSlideShowIsEnding : 1;
	PLAirPlayBackgroundView* _airTunesBackgroundView;
	UIPopoverController* _activityControllerPopover;
	PLDeletePhotosActionController* _deleteController;
	int _commentsInteractionMode;
	UINavigationBar* _commentsEditBar;
	BOOL _commentsTableWasVisible;
	NSMutableArray* _pendingCollectionListChangeNotifications;
	NSMutableArray* _pendingSingleCollectionChangeNotifications;
	NSMutableArray* _pendingAssetChangeNotifications;
	NSManagedObjectID* _currentAssetObjectID;
	NSString* _currentAssetPublicGlobalUUID;
	NSString* _currentAssetContainerUUID;
	id _activityTarget;
	SEL _activityAction;
	BOOL shouldShowOverlaysWhenViewAppears;
	BOOL shouldShowOverlaysWhenViewDisappears;
	BOOL _isCameraApp;
	BOOL _deletesDuplicatesWhenNecessary;
	BOOL _shouldPlayVideoWhenViewAppears;
	PLAssetContainerDataSource* _assetContainerDataSource;
	PLPhotoTileViewController* _mostRecentlyActiveTile;
	int _photoThumbnailFormat;

}

@property (assign,nonatomic) <PLPhotoBrowserControllerDelegate> * delegate; 
@property (nonatomic,readonly) int albumFilter; 
@property (nonatomic,readonly) PLLibraryImageDataProvider * imageDataProvider; 
@property (assign,nonatomic) BOOL isCameraApp;                                                                                                              //@synthesize isCameraApp=_isCameraApp - In the implementation block
@property (assign,nonatomic) unsigned currentTileIndex; 
@property (nonatomic,retain) NSIndexPath * currentIndexPath; 
@property (assign,nonatomic) PLManagedAsset * currentAsset; 
@property (nonatomic,readonly) <PLAssetContainer> * currentAssetContainer; 
@property (nonatomic,readonly) <PLAssetContainerList> * assetContainerList; 
@property (nonatomic,readonly) unsigned allAssetsCount; 
@property (nonatomic,readonly) PLVideoView * currentVideoView; 
@property (nonatomic,readonly) PLPhotoTileViewController * currentTile; 
@property (nonatomic,readonly) BOOL isPlayingSlideshow; 
@property (nonatomic,readonly) UIView * remakerContainerView; 
@property (nonatomic,readonly) UIScrollView * mainScroller; 
@property (nonatomic,retain) PLPhotoScrubber * photoScrubber; 
@property (nonatomic,readonly) UIView * commentsView; 
@property (nonatomic,readonly) UIPageController * pageController; 
@property (nonatomic,readonly) UIView * pageControllerView; 
@property (assign,nonatomic) BOOL deletesDuplicatesWhenNecessary;                                                                                           //@synthesize deletesDuplicatesWhenNecessary=_deletesDuplicatesWhenNecessary - In the implementation block
@property (assign,nonatomic) BOOL shouldShowOverlaysWhenViewAppears; 
@property (assign,nonatomic) BOOL shouldShowOverlaysWhenViewDisappears; 
@property (assign,nonatomic) BOOL shouldPlayVideoWhenViewAppears;                                                                                           //@synthesize shouldPlayVideoWhenViewAppears=_shouldPlayVideoWhenViewAppears - In the implementation block
@property (assign,nonatomic) BOOL canDelayImageLoading; 
@property (assign,nonatomic) BOOL delayImageLoading; 
@property (nonatomic,readonly) BOOL showsAirTunesOption; 
@property (assign,nonatomic) BOOL canShowCopyCallout; 
@property (nonatomic,readonly) BOOL canEditVideo; 
@property (nonatomic,readonly) BOOL canEditPhoto; 
@property (nonatomic,retain) UIScrollView * pageControllerScrollView; 
@property (nonatomic,readonly) PLAssetContainerDataSource * assetContainerDataSource;                                                                       //@synthesize assetContainerDataSource=_assetContainerDataSource - In the implementation block
@property (nonatomic,readonly) <PLRootLibraryNavigationController> * rootNavigationController; 
@property (nonatomic,retain) PLPhotoTileViewController * mostRecentlyActiveTile;                                                                            //@synthesize mostRecentlyActiveTile=_mostRecentlyActiveTile - In the implementation block
@property (nonatomic,readonly) PLManagedAsset * currentAssetForZoomTransition; 
@property (nonatomic,readonly) <PLAssetContainer> * currentAssetContainerForZoomTransition; 
@property (nonatomic,readonly) PLPhotoTileViewController * currentTileForZoomTransition; 
@property (assign,nonatomic) int photoThumbnailFormat;                                                                                                      //@synthesize photoThumbnailFormat=_photoThumbnailFormat - In the implementation block
@property (setter=_setPriorIndexPath:,nonatomic,retain) NSIndexPath * _priorIndexPath;                                                                      //@synthesize priorIndexPath=_priorIndexPath - In the implementation block
@property (setter=_setDeletedIndexPath:,nonatomic,retain) NSIndexPath * _deletedIndexPath;                                                                  //@synthesize deletedIndexPath=_deletedIndexPath - In the implementation block
@property (setter=_setSlideshowEndIndexPath:,nonatomic,retain) NSIndexPath * _slideshowEndIndexPath;                                                        //@synthesize slideshowEndIndexPath=_slideshowEndIndexPath - In the implementation block
@property (setter=_setScrubbedImageIndexPath:,nonatomic,retain) NSIndexPath * _scrubbedImageIndexPath;                                                      //@synthesize scrubbedImageIndexPath=_scrubbedImageIndexPath - In the implementation block
@property (setter=_setLastDisplayedRemoteSlideshowPhotoIndexPath:,nonatomic,retain) NSIndexPath * _lastDisplayedRemoteSlideshowPhotoIndexPath;              //@synthesize lastDisplayedRemoteSlideshowPhotoIndexPath=_lastDisplayedRemoteSlideshowPhotoIndexPath - In the implementation block
+(void)setPageControllerScrollViewClass:(Class)arg1 ;
-(void)_fadeOut;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)delegate;
-(id)navigationBar;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)willPresentActionSheet:(id)arg1 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)viewWillLayoutSubviews;
-(BOOL)isEditing;
-(double)durationForTransition:(int)arg1 ;
-(void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3 ;
-(id)contentScrollView;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)rotatingFooterView;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)_getRotationContentSettings:(SCD_Struct_PL3*)arg1 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)copy:(id)arg1 ;
-(void)_longPressRecognized:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)setRotationDisabled:(BOOL)arg1 ;
-(id)pageController:(id)arg1 viewControllerAtIndex:(int)arg2 ;
-(id)pageController;
-(Class)_pageControllerScrollViewClass;
-(void)pageControllerWillBeginPaging:(id)arg1 ;
-(void)pageControllerDidEndPaging:(id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)setCurrentIndexPath:(id)arg1 ;
-(id)currentIndexPath;
-(id)photoCountFormatter;
-(void)_capabilitiesChanged;
-(void)setPageControllerScrollView:(id)arg1 ;
-(void)applicationResumed:(id)arg1 ;
-(void)_simpleRemoteActionDidOccur:(id)arg1 ;
-(void)_externalScreenGotDisconnected;
-(void)setShouldShowOverlaysWhenViewDisappears:(BOOL)arg1 ;
-(void)_removeTVOutWindow;
-(void)_clearFullScreenView;
-(void)_forceDismissActionSheet:(BOOL)arg1 enableToolbarTimer:(BOOL)arg2 ;
-(void)_forceDismissAlertView:(BOOL)arg1 enableToolbarTimer:(BOOL)arg2 ;
-(void)_forceDismissDeleteController:(BOOL)arg1 enableToolbarTimer:(BOOL)arg2 ;
-(void)_flushTileCache;
-(void)_cleanUpCurrentAirplaySession;
-(BOOL)wantsPhotoBrowserStyleStatusBar;
-(void)_setCurrentIndexPath:(id)arg1 ;
-(BOOL)delayImageLoading;
-(id)_lowResolutionPreviewImageForPhoto:(id)arg1 ;
-(void)_configureVideoViewInTile:(id)arg1 ;
-(void)_willDisplayTileController:(id)arg1 ;
-(void)photoTileViewControllerCancelImageRequests:(id)arg1 ;
-(BOOL)canEditVideo;
-(BOOL)_slideshowNotRunning;
-(id)mostRecentlyActiveTile;
-(void)_updateTileImageAfterZoomTransition;
-(id)_fullScreenPreviewImageForPhoto:(id)arg1 ;
-(id)_tileForAsset:(id)arg1 shouldCreate:(BOOL)arg2 tileCache:(id)arg3 ;
-(void)_slideshowPlayTimerFired:(id)arg1 ;
-(void)_disableIdleTimer;
-(void)_forceRemoveSavingPhotoHUD;
-(id)_playbackVideoView;
-(BOOL)_shouldPauseOrStopVideo;
-(void)_displayLastImageForSlideshowPlugin:(id)arg1 ;
-(void)_endSlideshow;
-(void)_commonDidFinishEmailAnimation:(BOOL)arg1 ;
-(void)_stopAirTunesSlideShow:(BOOL)arg1 ;
-(void)_setSelectedAirplayRoute:(id)arg1 changeSystemRoute:(BOOL)arg2 ;
-(void)_stopStreamingPhotosToAirTunes;
-(void)_prepareForTVOut;
-(void)_cancelRemaking;
-(void)_airplaySetup;
-(id)_updateIndexPath:(id)arg1 insertedSections:(id)arg2 deletedSections:(id)arg3 ;
-(id)_slideshowEndIndexPath;
-(void)_setSlideshowEndIndexPath:(id)arg1 ;
-(id)_lastDisplayedRemoteSlideshowPhotoIndexPath;
-(void)_setLastDisplayedRemoteSlideshowPhotoIndexPath:(id)arg1 ;
-(id)_deletedIndexPath;
-(void)_setDeletedIndexPath:(id)arg1 ;
-(void)_cancelEditControllerIfEditedPhotoDeleted;
-(void)_invalidateAirplayCache;
-(void)_updateCachedIndexesForAssetContainerDidChange:(id)arg1 ;
-(void)_removeSavingPhotoHUDForPhoto:(id)arg1 ;
-(void)viewDidAppear;
-(void)updateBarsAnimated:(BOOL)arg1 ;
-(void)photoTileViewControllerRequestsFullScreenImage:(id)arg1 ;
-(void)_processAssetContainerListDidChangeNotification:(id)arg1 ;
-(void)_processAssetContainerDidChange:(id)arg1 withCurrentContainer:(id)arg2 ;
-(void)_validateTileCache:(id)arg1 ;
-(void)_processAssetsDidChange:(id)arg1 ;
-(void)_updateAfterAnimation;
-(void)togglePlayPause:(id)arg1 ;
-(void)displayNextPhoto:(id)arg1 ;
-(void)displayPreviousPhoto:(id)arg1 ;
-(BOOL)_mainScrollerIsVisible;
-(void)_setMusicIsPlaying:(BOOL)arg1 ;
-(void)animateToIndex;
-(void)_didLoadImage:(id)arg1 forObjectID:(id)arg2 ;
-(BOOL)barsAreVisible;
-(void)_redisplayActionSheet:(id)arg1 ;
-(void)_redisplayDeleteController:(id)arg1 ;
-(void)_redisplayPopovers;
-(id)remakerContainerView;
-(void)_flushTileCache:(id)arg1 preservingTilesInPageController:(id)arg2 ;
-(void)_setPriorIndexPath:(id)arg1 ;
-(void)_hideCallout;
-(void)_pauseVideoPlaybackForIndexPath:(id)arg1 ;
-(void)_updateCurrentIndexForPageController:(id)arg1 ;
-(void)_showHDRPromptIfNeeded;
-(void)_showCommentTableIfNecessary:(float)arg1 ;
-(void)_hideCommentsTableIfNecessary:(float)arg1 ;
-(void)setMainScrollerEnabled:(BOOL)arg1 ;
-(void)_updateStatusBarVisibilityWithDuration:(double)arg1 ;
-(id)newNavigationBar;
-(void)_updateForCommentsControllerEditMode:(id)arg1 ;
-(void)_photoScrubberDidBeginScrubbing:(id)arg1 ;
-(void)_photoScrubberValueDidChange:(id)arg1 ;
-(void)_photoScrubberDidEndScrubbing:(id)arg1 ;
-(void)_setupPhotoScrubber:(BOOL)arg1 ;
-(void)_discardPhotoScrubber;
-(BOOL)showingCommentsTable;
-(void)hideCommentsTable;
-(void)_scrubberDidBeginScrubbing:(id)arg1 ;
-(void)_setScrubbedImageIndexPath:(id)arg1 ;
-(void)showCommentsTable;
-(void)_streamPhoto:(id)arg1 withTransition:(id)arg2 ;
-(void)_scrubberDidEndScrubbing:(id)arg1 ;
-(void)_updateFilteredImagesAndShuffle:(BOOL)arg1 ;
-(BOOL)canDelayImageLoading;
-(void)setDelayImageLoading:(BOOL)arg1 ;
-(void)_makeTilesPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(void)sendViaEmailClicked;
-(void)setStatusBarIsLocked:(BOOL)arg1 ;
-(void)_stopVideoPlaybackForIndexPath:(id)arg1 ;
-(void)setVideoEditingMode:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_cancelProgressTimer;
-(void)_stopSlideshowTimer;
-(BOOL)_stopSlideshow;
-(BOOL)_startingSlideshow;
-(BOOL)_playSlideshow;
-(BOOL)_pauseSlideshow;
-(BOOL)isActiveViewControllerInNavigationController;
-(void)_slideshowWillBegin;
-(void)_slideshowPlayCurrentSlide;
-(id)_preloadNextTileInCache:(id)arg1 insideCurrentAssetContainer:(BOOL)arg2 ;
-(unsigned)currentTileIndex;
-(void)_slideshowWillEnd;
-(void)showNextImageWithTransition:(int)arg1 insideCurrentAssetContainer:(BOOL)arg2 ;
-(void)setCurrentTileIndex:(unsigned)arg1 ;
-(BOOL)_currentItemIsVideo;
-(void)_startSlideshowTimer;
-(void)_setMusicIsPlaying:(BOOL)arg1 forPhoto:(id)arg2 ;
-(void)_handleCancelSlideshowSettings:(id)arg1 ;
-(void)setUsesPhotoBrowserStyleStatusBar:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_endSlideshowSettingsAnimated:(BOOL)arg1 ;
-(void)_loadSlideshowPlugin;
-(void)_fadeIn;
-(void)_prepareToFade;
-(void)_fadeToViewContents;
-(void)_slideshowViewWasTapped:(id)arg1 ;
-(void)_removeAirTunesSlideShowViewAndReset;
-(void)_airTunesSlideShowViewWasTapped;
-(void)_startAirTunesSlideShow;
-(void)setAppInteractionDisabled:(BOOL)arg1 ;
-(void)_pauseVideoPlaybackForIndexPath:(id)arg1 fullStop:(BOOL)arg2 ;
-(void)updateAfterCollapse;
-(id)_priorIndexPath;
-(id)_suppresionContexts;
-(void)airTunesServicePickerViewController:(id)arg1 didSelectRoute:(id)arg2 ;
-(id)_albumAssetsForSlideShow:(id)arg1 startingAtIndex:(unsigned)arg2 ;
-(id)_currentTVOutTile;
-(id)_currentTVOutVideoView;
-(void)setCurrentTileIndex:(unsigned)arg1 updateAfterAnimation:(BOOL)arg2 ;
-(void)setCurrentIndexPath:(id)arg1 updateAfterAnimation:(BOOL)arg2 ;
-(void)_transitionToImage:(id)arg1 fromOldIndex:(int)arg2 toNewIndex:(int)arg3 transition:(int)arg4 transitionView:(id)arg5 insideCurrentAssetContainer:(BOOL)arg6 ;
-(void)_dereferenceTile:(id)arg1 ;
-(void)_performCATransition:(id)arg1 ;
-(void)_transitionToImage:(id)arg1 fromOldIndex:(int)arg2 toNewIndex:(int)arg3 transition:(int)arg4 insideCurrentAssetContainer:(BOOL)arg5 ;
-(void)_prepareForDelete;
-(void)_finishRemoveAsset:(id)arg1 atIndexPath:(id)arg2 ;
-(void)showPreviousImageWithTransition:(int)arg1 insideCurrentAssetContainer:(BOOL)arg2 ;
-(void)_didDeleteCurrentAsset;
-(void)mainScrollerDidEndSmoothScroll;
-(void)_showSavingPhotoHUDForPhoto:(id)arg1 ;
-(void)setVideoEditingMode:(BOOL)arg1 ;
-(id)_scrubbedImageIndexPath;
-(void)didLoadFullScreenImage:(id)arg1 forPhotoAtIndex:(unsigned)arg2 ;
-(void)_loadImageForTile:(id)arg1 format:(int)arg2 ;
-(void)setMostRecentlyActiveTile:(id)arg1 ;
-(id)newToolbar;
-(void)_configureEditNavigationController:(id)arg1 ;
-(int)_presentEditPhotoController;
-(void)_dismissEditControllerWithOldStatusBarStyle:(int)arg1 ;
-(void)didEndEditingPhoto;
-(id)rootNavigationController;
-(void)_endActivityController;
-(void)_enterVideoEditingMode;
-(void)_composeSheetDidDisplay;
-(id)_mailComposeViewControllerWithPhoto:(id)arg1 attachmentIdentifier:(id*)arg2 ;
-(void)_setComposeSheetViewController:(id)arg1 ;
-(void)_performSendViaEmail;
-(double)_durationForCurrentVideo;
-(void)_transcodeVideoUsingMode:(int)arg1 ;
-(void)_reallySendViaEmail:(id)arg1 ;
-(void)_animateSendToEmail;
-(void)_displayComposeSheet;
-(CGRect)_animationDestinationRectForImageSize:(CGSize)arg1 ;
-(void)_finishedSlidingImageUp:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_finishedSlidingImageDown:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_showMMSComposeSheet;
-(void)_dismissModalViewControllerAnimated:(BOOL)arg1 ;
-(BOOL)_canTrimCurrentVideoInPlace;
-(void)_showConfirmationForPassthroughTrimming:(id)arg1 ;
-(void)_delayedExitEditingMode;
-(void)_commonDidBeginRemaking;
-(void)updateProgressView;
-(void)_commonRemakingProgressDidChange:(float)arg1 ;
-(void)_commonDidEndRemaking:(id)arg1 pathToTrimmedFile:(id)arg2 didSucceed:(BOOL)arg3 ;
-(void)removeRemakerContainerView;
-(void)_removeProgressView;
-(void)_clearPublishingAgent:(id)arg1 ;
-(void)_updateProgressView;
-(BOOL)statusBarIsLocked;
-(void)_dismissAirtunesServicePickerPopover;
-(void)_dismissActivityControllerPopover;
-(void)removeCurrentPhoto:(id)arg1 ;
-(id)_buttonItemViewWithTag:(int)arg1 ;
-(void)_endAirTunesPicker;
-(void)_updateTVOutAfterAnimation;
-(void)_configureTVOutPageController;
-(void)_airplayRouteWasPicked:(id)arg1 ;
-(void)_airTunesServiceDidDisconnect:(id)arg1 ;
-(void)setAirTunesMode:(int)arg1 ;
-(void)_verifyAirplayRouteIsPicked;
-(void)_airTunesSlideShowTimerFired;
-(id)_nextAirTunesSlideshowPhoto;
-(id)airPlaySession:(id)arg1 previousPhotoForPhoto:(id)arg2 ;
-(id)airPlaySession:(id)arg1 nextPhotoForPhoto:(id)arg2 ;
-(void)airplayControllerPickableRoutesDidChange:(id)arg1 ;
-(void)photoTileViewController:(id)arg1 willAppear:(BOOL)arg2 ;
-(void)photoTileViewController:(id)arg1 didAppear:(BOOL)arg2 ;
-(void)photoTileViewController:(id)arg1 didDisappear:(BOOL)arg2 ;
-(void)photoTileViewControllerRequestsFullSizeImage:(id)arg1 ;
-(void)photoTileViewControllerSingleTap:(id)arg1 ;
-(void)photoTileViewControllerDoubleTap:(id)arg1 ;
-(void)photoTileViewControllerWillBeginGesture:(id)arg1 ;
-(void)photoTileViewControllerDidEndGesture:(id)arg1 ;
-(BOOL)photoTileViewControllerAllowsEditing:(id)arg1 ;
-(BOOL)isPhotoTileParentPageControllerAnimating:(id)arg1 ;
-(void)photoTileViewControllerDidSetHDRTypeForPhoto:(id)arg1 ;
-(void)photoTileViewController:(id)arg1 willEnterEditModeInCommentsController:(id)arg2 ;
-(void)photoTileViewController:(id)arg1 didExitEditModeInCommentsController:(id)arg2 ;
-(void)photoTileViewController:(id)arg1 commentsControllerWillBeginScrolling:(id)arg2 ;
-(void)videoViewDidCreateAttachments:(id)arg1 ;
-(BOOL)videoViewCanBeginPlayback:(id)arg1 ;
-(void)videoViewDidBeginPlayback:(id)arg1 ;
-(void)videoViewDidPausePlayback:(id)arg1 ;
-(void)videoViewDidEndPlayback:(id)arg1 didFinish:(BOOL)arg2 ;
-(void)videoViewDidEndScrubbing:(id)arg1 ;
-(void)videoViewDidBeginRemaking:(id)arg1 ;
-(void)videoViewDidEndRemaking:(id)arg1 didSucceed:(BOOL)arg2 ;
-(void)videoView:(id)arg1 remakingProgressDidChange:(float)arg2 ;
-(void)videoViewWillBeginEditing:(id)arg1 ;
-(void)videoViewDidBeginEditing:(id)arg1 ;
-(void)videoViewDidCancelEditing:(id)arg1 ;
-(void)videoView:(id)arg1 displayPlayOverlay:(id)arg2 ;
-(BOOL)videoViewShouldRespondToPlayOverlayTap:(id)arg1 ;
-(BOOL)videoViewCanCreateMetadata:(id)arg1 ;
-(id)videoViewRequestsPickedAirplayRoute:(id)arg1 ;
-(int)numPhotosInAlbumForPhotoScrubber:(id)arg1 ;
-(id)photoScrubber:(id)arg1 loadImageSynchronously:(BOOL)arg2 atIndex:(int)arg3 forLoupe:(BOOL)arg4 ;
-(void)slideshowPluginReadyToBegin:(id)arg1 ;
-(void)slideshowPluginDidDisplayFinalImage:(id)arg1 ;
-(BOOL)airplayRemoteSlideshow:(id)arg1 requestAssetWithInfo:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(BOOL)airplayRemoteSlideshow:(id)arg1 handleEvent:(id)arg2 ;
-(id)initWithImageDataProvider:(id)arg1 ;
-(id)pageControllerScrollView;
-(BOOL)isRotationEnabled;
-(void)storeCurrentConfiguration:(id)arg1 ;
-(void)loadCurrentConfiguration:(id)arg1 ;
-(int)albumFilter;
-(id)mainScroller;
-(void)setPhotoScrubber:(id)arg1 ;
-(void)viewWillAppear;
-(void)viewWillDisappear;
-(void)_showTileCache;
-(void)setNavigationBarDisabled:(BOOL)arg1 ;
-(void)setBottomBarDisabled:(BOOL)arg1 ;
-(void)imageViewWillSwitchToFullSizeImage:(id)arg1 ;
-(void)imageViewDidSwitchToFullSizeImage:(id)arg1 ;
-(BOOL)photoTileViewControllerIsDisplayingLandscape:(id)arg1 ;
-(void)setCanDelayImageLoading:(BOOL)arg1 ;
-(void)_performPostAlbumStreamTasksWithNewlyCreatedAlbum:(NSObject*)arg1 ;
-(void)publishingActivityNeedsVideoEditMode:(id)arg1 ;
-(void)prepareToSendViaEmail;
-(void)slideImageOverMessage;
-(void)sendViaMMSClicked;
-(void)smsComposeControllerDataInserted:(id)arg1 ;
-(void)smsComposeControllerCancelled:(id)arg1 ;
-(void)smsComposeControllerSendStarted:(id)arg1 ;
-(void)_repositionPopoversIfNecessary;
-(void)setCanShowCopyCallout:(BOOL)arg1 ;
-(BOOL)canShowCopyCallout;
-(int)airTunesMode;
-(BOOL)showsAirTunesOption;
-(id)airPlayRemoteSlideshowAssetKeys:(id)arg1 ;
-(BOOL)_canUploadHDVideo;
-(BOOL)shouldShowActionMenu;
-(BOOL)shouldShowPlayButton;
-(BOOL)currentItemIsPlaying;
-(BOOL)canEditPhoto;
-(BOOL)_didSetDataForCurrentItem;
-(BOOL)shouldShowOverlaysWhenViewDisappears;
-(void)assetContainerDidChange:(id)arg1 ;
-(void)assetContainerListDidChange:(id)arg1 ;
-(void)assetsDidChange:(id)arg1 ;
-(id)assetContainerList;
-(void)_didFinishPostingNotifications:(id)arg1 ;
-(BOOL)deletesDuplicatesWhenNecessary;
-(BOOL)prepareForDismissingForced:(BOOL)arg1 ;
-(void)setDeletesDuplicatesWhenNecessary:(BOOL)arg1 ;
-(void)playSlideshowFromAlbumUsingOrigami:(BOOL)arg1 ;
-(id)slideshowSettingsViewController:(id)arg1 transitionKeysForAirPlayRoute:(id)arg2 ;
-(void)slideshowSettingsViewControllerPlayButtonWasPressed:(id)arg1 ;
-(void)slideshowSettingsViewController:(id)arg1 didSelectAirPlayRoute:(id)arg2 ;
-(id)slideshowSettingsViewController:(id)arg1 alternateTransitionLocalizationsForAirPlayRoute:(id)arg2 ;
-(id)slideshowSettingsViewController:(id)arg1 slideshowSettingsForAirPlayRoute:(id)arg2 ;
-(void)_publishingAgentDidStartPublishing:(id)arg1 ;
-(void)_showVideoTooLongAlert;
-(BOOL)isCameraApp;
-(void)videoRemakerDidBeginRemaking:(id)arg1 ;
-(void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2 ;
-(BOOL)_appAllowsSupressionOfAlerts;
-(void)videoRemaker:(id)arg1 progressDidChange:(float)arg2 ;
-(void)_publishingAgentDidStartRemaking:(id)arg1 ;
-(void)_publishingAgentDidEndRemaking:(id)arg1 ;
-(void)_publishingAgentDidFinishPublishing:(id)arg1 ;
-(void)_publishingAgentsDidForceCancel:(id)arg1 ;
-(int)photoThumbnailFormat;
-(void)setPhotoThumbnailFormat:(int)arg1 ;
-(id)pageControllerView;
-(void)revealComment:(id)arg1 ;
-(BOOL)setNextSlideshowState:(int)arg1 ;
-(id)currentAsset;
-(id)currentAssetForZoomTransition;
-(id)currentTile;
-(id)currentTileForZoomTransition;
-(id)currentAssetContainer;
-(id)currentAssetContainerForZoomTransition;
-(BOOL)shouldPlayVideoWhenViewAppears;
-(void)setShouldPlayVideoWhenViewAppears:(BOOL)arg1 ;
-(void)setAssetContainerList:(id)arg1 currentImageIndexPath:(id)arg2 ;
-(void)transitionWillBegin;
-(void)transitionDidEndWithOperation:(int)arg1 ;
-(id)imageDataProvider;
-(id)commentsView;
-(void)beginEditingPhoto;
-(void)endEditingPhoto;
-(id)photoScrollerTitle;
-(BOOL)prepareToDisplayActivitySheet;
-(BOOL)dismissPopovers;
-(void)deleteImageClicked:(id)arg1 ;
-(void)displaySlideshowSheetFromItem:(id)arg1 ;
-(void)displayAirplaySheetFromItem:(id)arg1 ;
-(void)playCurrentMedia:(id)arg1 ;
-(void)pauseCurrentMedia:(id)arg1 ;
-(void)trimVideo:(id)arg1 ;
-(void)cancelVideoEditingMode:(id)arg1 ;
-(id)photoScrubber;
-(int)videoRemakerMode;
-(id)currentVideoView;
-(int)allowedDeleteOperationForAsset:(id)arg1 ;
-(BOOL)isPlayingSlideshow;
-(BOOL)canShowNextImage;
-(BOOL)canShowPreviousImage;
-(BOOL)isEditingVideo;
-(id)assetContainerDataSource;
-(unsigned)allAssetsCount;
-(BOOL)shouldShowOverlaysWhenViewAppears;
-(void)setShouldShowOverlaysWhenViewAppears:(BOOL)arg1 ;
-(void)setIsCameraApp:(BOOL)arg1 ;
-(BOOL)_isScrolling;
-(id)_actionViewRootView;
-(void)setCurrentAsset:(id)arg1 ;
-(void)updateOverlaysAnimated:(BOOL)arg1 ;
@end

