/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <PhotosUI/PUFeedCollectionViewLayoutDelegate.h>
#import <PhotosUI/PUFeedSectionInfosManagerDelegate.h>
#import <PhotosUI/PUPhotoBrowserZoomTransitionDelegate.h>
#import <PhotosUI/PUFeedImageCellDelegate.h>
#import <PhotosUI/PUFeedTextCellDelegate.h>
#import <PhotosUI/PUFeedInvitationCellDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <PhotosUI/PUAlbumStreamActivityDelegate.h>
#import <PhotoLibrary/PLCloudFeedNavigating.h>
#import <PhotoLibrary/PLNavigableCloudFeedViewController.h>

@class PUFeedViewControllerSpec, NSDate, PUFeedSectionInfosManager, PUImageManager, PLDateRangeFormatter, UICollectionView, PUFeedViewControllerRestorableState, UITapGestureRecognizer, UIBarButtonItem, UIPopoverController, NSDictionary, NSIndexPath, PUPhotoPinchGestureRecognizer, PLManagedAlbumList, PLCloudSharedAlbum, UIViewController, PUPhotosPickerViewController, _UIContentUnavailableView, PUAlbumStreamActivity, PLManagedAsset, PLCloudSharedComment, PUFeedAssetContainerList, NSMutableSet;

@interface PUFeedViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, PUFeedCollectionViewLayoutDelegate, PUFeedSectionInfosManagerDelegate, PUPhotoBrowserZoomTransitionDelegate, PUFeedImageCellDelegate, PUFeedTextCellDelegate, PUFeedInvitationCellDelegate, UIGestureRecognizerDelegate, PUAlbumStreamActivityDelegate, PLCloudFeedNavigating, PLNavigableCloudFeedViewController> {

	BOOL __flowDirectionReversed;
	BOOL __viewDidAppear;
	BOOL __viewsInSyncWithModel;
	BOOL __appJustEnteredForeground;
	BOOL __userDidDismissPlaceholder;
	BOOL __visibleInterfaceUpdateScheduled;
	BOOL __invitationsPopoverShowPending;
	BOOL __libraryUpdatingPreviouslyExpired;
	PUFeedViewControllerSpec* _spec;
	int _contentType;
	NSDate* __mostRecentContentDate;
	PUFeedSectionInfosManager* __feedSectionInfosManager;
	PUImageManager* __imageManager;
	PLDateRangeFormatter* __dateRangeFormatter;
	UICollectionView* __portraitCollectionView;
	UICollectionView* __landscapeCollectionView;
	int __rotationState;
	int __rotationSourceInterfaceOrientation;
	int __rotationTargetInterfaceOrientation;
	PUFeedViewControllerRestorableState* __rotationLastRestorableState;
	int __barsState;
	int __loadedSectionInfosWindowSize;
	NSDate* __mostRecentContentDateViewed;
	int __mostRecentContentViewed;
	UITapGestureRecognizer* __tapGestureRecognizer;
	UIBarButtonItem* __invitationsBarButtonItem;
	UIPopoverController* __invitationsPopoverController;
	NSDictionary* __preheatedAssetsByFormat;
	NSIndexPath* __indexPathForImageHiddenDuringZoomTransition;
	PUPhotoPinchGestureRecognizer* __pinchGestureRecognizer;
	UICollectionView* __pinchedCollectionView;
	PLManagedAlbumList* __sharedAlbumList;
	PLCloudSharedAlbum* __pushedAlbum;
	UIViewController* __pushedViewController;
	PUPhotosPickerViewController* __presentedPhotosPickerViewController;
	_UIContentUnavailableView* __emptyPlaceholderView;
	PUAlbumStreamActivity* __albumStreamActivity;
	PLManagedAsset* __browsingSelectedAsset;
	PLCloudSharedComment* __browsingSelectedComment;
	PUFeedAssetContainerList* __browsingAssetContainerList;
	NSDictionary* __justLikedSections;
	NSMutableSet* __sectionInfosWithCommentChanges;
	NSMutableSet* __updatedAssets;
	CGPoint __lastPreheatedContentOffset;

}

@property (nonatomic,readonly) PUFeedViewControllerSpec * spec;                                                                                                           //@synthesize spec=_spec - In the implementation block
@property (nonatomic,readonly) int contentType;                                                                                                                           //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) PUFeedSectionInfosManager * _feedSectionInfosManager;                                                                                      //@synthesize _feedSectionInfosManager=__feedSectionInfosManager - In the implementation block
@property (nonatomic,readonly) PUImageManager * _imageManager;                                                                                                            //@synthesize _imageManager=__imageManager - In the implementation block
@property (nonatomic,readonly) PLDateRangeFormatter * _dateRangeFormatter;                                                                                                //@synthesize _dateRangeFormatter=__dateRangeFormatter - In the implementation block
@property (setter=_setPortraitCollectionView:,nonatomic,retain) UICollectionView * _portraitCollectionView;                                                               //@synthesize _portraitCollectionView=__portraitCollectionView - In the implementation block
@property (setter=_setLandscapeCollectionView:,nonatomic,retain) UICollectionView * _landscapeCollectionView;                                                             //@synthesize _landscapeCollectionView=__landscapeCollectionView - In the implementation block
@property (assign,setter=_setFlowDirectionReversed:,getter=_isFlowDirectionReversed,nonatomic) BOOL _flowDirectionReversed;                                               //@synthesize _flowDirectionReversed=__flowDirectionReversed - In the implementation block
@property (assign,setter=_setViewDidAppear:,nonatomic) BOOL _viewDidAppear;                                                                                               //@synthesize _viewDidAppear=__viewDidAppear - In the implementation block
@property (assign,setter=_setRotationState:,nonatomic) int _rotationState;                                                                                                //@synthesize _rotationState=__rotationState - In the implementation block
@property (assign,setter=_setRotationSourceInterfaceOrientation:,nonatomic) int _rotationSourceInterfaceOrientation;                                                      //@synthesize _rotationSourceInterfaceOrientation=__rotationSourceInterfaceOrientation - In the implementation block
@property (assign,setter=_setRotationTargetInterfaceOrientation:,nonatomic) int _rotationTargetInterfaceOrientation;                                                      //@synthesize _rotationTargetInterfaceOrientation=__rotationTargetInterfaceOrientation - In the implementation block
@property (setter=_setRotationLastRestorableState:,nonatomic,retain) PUFeedViewControllerRestorableState * _rotationLastRestorableState;                                  //@synthesize _rotationLastRestorableState=__rotationLastRestorableState - In the implementation block
@property (assign,setter=_setBarsState:,nonatomic) int _barsState;                                                                                                        //@synthesize _barsState=__barsState - In the implementation block
@property (assign,setter=_setLoadedSectionInfosWindowSize:,nonatomic) int _loadedSectionInfosWindowSize;                                                                  //@synthesize _loadedSectionInfosWindowSize=__loadedSectionInfosWindowSize - In the implementation block
@property (nonatomic,readonly) NSDate * _mostRecentContentDate;                                                                                                           //@synthesize _mostRecentContentDate=__mostRecentContentDate - In the implementation block
@property (setter=_setMostRecentContentDateViewed:,nonatomic,retain) NSDate * _mostRecentContentDateViewed;                                                               //@synthesize _mostRecentContentDateViewed=__mostRecentContentDateViewed - In the implementation block
@property (assign,setter=_setMostRecentContentViewed:,nonatomic) int _mostRecentContentViewed;                                                                            //@synthesize _mostRecentContentViewed=__mostRecentContentViewed - In the implementation block
@property (assign,setter=_setViewsInSyncWithModel:,getter=_areViewsInSyncWithModel,nonatomic) BOOL _viewsInSyncWithModel;                                                 //@synthesize _viewsInSyncWithModel=__viewsInSyncWithModel - In the implementation block
@property (setter=_setTapGestureRecognizer:,nonatomic,retain) UITapGestureRecognizer * _tapGestureRecognizer;                                                             //@synthesize _tapGestureRecognizer=__tapGestureRecognizer - In the implementation block
@property (setter=_setInvitationsBarButtonItem:,nonatomic,retain) UIBarButtonItem * _invitationsBarButtonItem;                                                            //@synthesize _invitationsBarButtonItem=__invitationsBarButtonItem - In the implementation block
@property (setter=_setInvitationsPopoverController:,nonatomic,retain) UIPopoverController * _invitationsPopoverController;                                                //@synthesize _invitationsPopoverController=__invitationsPopoverController - In the implementation block
@property (setter=_setPreheatedAssetsByFormat:,nonatomic,retain) NSDictionary * _preheatedAssetsByFormat;                                                                 //@synthesize _preheatedAssetsByFormat=__preheatedAssetsByFormat - In the implementation block
@property (assign,setter=_setLastPreheatedContentOffset:,nonatomic) CGPoint _lastPreheatedContentOffset;                                                                  //@synthesize _lastPreheatedContentOffset=__lastPreheatedContentOffset - In the implementation block
@property (setter=_setIndexPathForImageHiddenDuringZoomTransition:,nonatomic,copy) NSIndexPath * _indexPathForImageHiddenDuringZoomTransition;                            //@synthesize _indexPathForImageHiddenDuringZoomTransition=__indexPathForImageHiddenDuringZoomTransition - In the implementation block
@property (setter=_setPinchGestureRecognizer:,nonatomic,retain) PUPhotoPinchGestureRecognizer * _pinchGestureRecognizer;                                                  //@synthesize _pinchGestureRecognizer=__pinchGestureRecognizer - In the implementation block
@property (setter=_setPinchedCollectionView:,nonatomic,retain) UICollectionView * _pinchedCollectionView;                                                                 //@synthesize _pinchedCollectionView=__pinchedCollectionView - In the implementation block
@property (nonatomic,readonly) PLManagedAlbumList * _sharedAlbumList;                                                                                                     //@synthesize _sharedAlbumList=__sharedAlbumList - In the implementation block
@property (setter=_setPushedAlbum:,nonatomic,retain) PLCloudSharedAlbum * _pushedAlbum;                                                                                   //@synthesize _pushedAlbum=__pushedAlbum - In the implementation block
@property (setter=_setPushedViewController:,nonatomic,retain) UIViewController * _pushedViewController;                                                                   //@synthesize _pushedViewController=__pushedViewController - In the implementation block
@property (setter=_setPresentedPhotosPickerViewController:,nonatomic,retain) PUPhotosPickerViewController * _presentedPhotosPickerViewController;                         //@synthesize _presentedPhotosPickerViewController=__presentedPhotosPickerViewController - In the implementation block
@property (assign,setter=_setAppJustEnteredForeground:,nonatomic) BOOL _appJustEnteredForeground;                                                                         //@synthesize _appJustEnteredForeground=__appJustEnteredForeground - In the implementation block
@property (setter=_setEmptyPlaceholderView:,nonatomic,retain) _UIContentUnavailableView * _emptyPlaceholderView;                                                          //@synthesize _emptyPlaceholderView=__emptyPlaceholderView - In the implementation block
@property (assign,setter=_setUserDidDismissPlaceholder:,nonatomic) BOOL _userDidDismissPlaceholder;                                                                       //@synthesize _userDidDismissPlaceholder=__userDidDismissPlaceholder - In the implementation block
@property (setter=_setAlbumStreamActivity:,nonatomic,retain) PUAlbumStreamActivity * _albumStreamActivity;                                                                //@synthesize _albumStreamActivity=__albumStreamActivity - In the implementation block
@property (setter=_setBrowsingSelectedAsset:,nonatomic,retain) PLManagedAsset * _browsingSelectedAsset;                                                                   //@synthesize _browsingSelectedAsset=__browsingSelectedAsset - In the implementation block
@property (setter=_setBrowsingSelectedComment:,nonatomic,retain) PLCloudSharedComment * _browsingSelectedComment;                                                         //@synthesize _browsingSelectedComment=__browsingSelectedComment - In the implementation block
@property (setter=_setBrowsingAssetContainerList:,nonatomic,retain) PUFeedAssetContainerList * _browsingAssetContainerList;                                               //@synthesize _browsingAssetContainerList=__browsingAssetContainerList - In the implementation block
@property (setter=_setJustLikedSections:,nonatomic,retain) NSDictionary * _justLikedSections;                                                                             //@synthesize _justLikedSections=__justLikedSections - In the implementation block
@property (assign,setter=_setVisibleInterfaceUpdateScheduled:,getter=_isVisibleInterfaceUpdateScheduled,nonatomic) BOOL _visibleInterfaceUpdateScheduled;                 //@synthesize _visibleInterfaceUpdateScheduled=__visibleInterfaceUpdateScheduled - In the implementation block
@property (setter=_setSectionInfosWithCommentChanges:,nonatomic,retain) NSMutableSet * _sectionInfosWithCommentChanges;                                                   //@synthesize _sectionInfosWithCommentChanges=__sectionInfosWithCommentChanges - In the implementation block
@property (setter=_setUpdatedAssets:,nonatomic,retain) NSMutableSet * _updatedAssets;                                                                                     //@synthesize _updatedAssets=__updatedAssets - In the implementation block
@property (assign,setter=_setInvitationsPopoverShowPending:,getter=_isInvitationsPopoverShowPending,nonatomic) BOOL _invitationsPopoverShowPending;                       //@synthesize _invitationsPopoverShowPending=__invitationsPopoverShowPending - In the implementation block
@property (assign,setter=_setLibraryUpdatingPreviouslyExpired:,getter=_isLibraryUpdatingPreviouslyExpired,nonatomic) BOOL _libraryUpdatingPreviouslyExpired;              //@synthesize _libraryUpdatingPreviouslyExpired=__libraryUpdatingPreviouslyExpired - In the implementation block
+(void)initialize;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)shouldAutorotate;
-(BOOL)canBecomeFirstResponder;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)_handleTap:(id)arg1 ;
-(int)contentType;
-(void)_appDidEnterBackground:(id)arg1 ;
-(void)assetContainerListDidChange:(id)arg1 ;
-(id)_tapGestureRecognizer;
-(void)_setTapGestureRecognizer:(id)arg1 ;
-(BOOL)zoomTransition:(id)arg1 getFrame:(CGRect*)arg2 contentMode:(int*)arg3 forPhotoToken:(id)arg4 operation:(int)arg5 ;
-(BOOL)pu_shouldActAsTabRootViewController;
-(BOOL)prepareForDismissingForced:(BOOL)arg1 ;
-(void)_updateEmptyPlaceholderAnimated:(BOOL)arg1 ;
-(id)_emptyPlaceholderView;
-(void)_setEmptyPlaceholderView:(id)arg1 ;
-(id)_pl_debugItems;
-(BOOL)pu_wantsToolbarVisible;
-(BOOL)pu_wantsTabBarVisible;
-(id)zoomTransition:(id)arg1 photoTokenForPhoto:(id)arg2 inCollection:(id)arg3 ;
-(void)zoomTransition:(id)arg1 setVisibility:(BOOL)arg2 forPhotoToken:(id)arg3 ;
-(void)zoomTransition:(id)arg1 willBeginForOperation:(int)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4 ;
-(void)zoomTransition:(id)arg1 didFinishForOperation:(int)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4 ;
-(BOOL)pu_handleSecondTabTap;
-(id)spec;
-(void)_dateRangeFormatterChanged:(id)arg1 ;
-(void)navigateToRevealCloudFeedAsset:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)navigateToCloudFeedAsset:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)navigateToRevealCloudFeedComment:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)navigateToCloudFeedComment:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)navigateToRevealCloudFeedInvitationForAlbum:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(BOOL)cloudFeedAssetIsAvailableForNavigation:(id)arg1 ;
-(BOOL)cloudFeedCommentIsAvailableForNavigation:(id)arg1 ;
-(BOOL)cloudFeedInvitationForAlbumIsAvailableForNavigation:(id)arg1 ;
-(void)feedInvitationCell:(id)arg1 didAccept:(BOOL)arg2 ;
-(BOOL)pu_wantsStatusBarVisible;
-(BOOL)pu_wantsNavigationBarVisible;
-(void)_updatePeripheralInterfaceAnimated:(BOOL)arg1 ;
-(id)_imageManager;
-(void)_updateInterfaceForModelReloadAnimated:(BOOL)arg1 ;
-(BOOL)zoomTransition:(id)arg1 transitionImageForPhotoToken:(id)arg2 callback:(/*^block*/ id)arg3 ;
-(void)didTapFeedCell:(id)arg1 ;
-(void)navigateToNewestContentAnimated:(BOOL)arg1 ;
-(BOOL)_appAllowsSupressionOfAlerts;
-(id)_suppressionContexts;
-(void)_appWillEnterForeground:(id)arg1 ;
-(id)_dateRangeFormatter;
-(void)_updateWindowOfLoadedSectionInfos;
-(void)_setViewsInSyncWithModel:(BOOL)arg1 ;
-(id)_pinchGestureRecognizer;
-(void)_handlePinch:(id)arg1 ;
-(void)_setPinchGestureRecognizer:(id)arg1 ;
-(void)_setPushedAlbum:(id)arg1 ;
-(void)_setPushedViewController:(id)arg1 ;
-(void)_tearDownBrowsing;
-(BOOL)_areViewsInSyncWithModel;
-(void)_updateCollectionViews;
-(BOOL)_shouldShowBarsForInterfaceOrientation:(int)arg1 ;
-(void)_setBarsState:(int)arg1 ;
-(void)_userDidViewFeed;
-(int)_currentInterfaceOrientation;
-(id)_collectionViewForInterfaceOrientation:(int)arg1 ;
-(void)_invalidateLastPreheatedContentOffset;
-(void)_updatePreheatedAssetsForCollectionView:(id)arg1 ;
-(int)_barsState;
-(void)_scheduleBarsAutoHide;
-(BOOL)_isInvitationsPopoverShowPending;
-(void)_showInvitationsPopoverAnimated:(BOOL)arg1 ;
-(void)_setViewDidAppear:(BOOL)arg1 ;
-(void)_cancelBarsAutoHide;
-(void)_appDidFinishEnteringForeground;
-(id)_invitationsPopoverController;
-(void)_setRotationState:(int)arg1 ;
-(void)_setRotationSourceInterfaceOrientation:(int)arg1 ;
-(void)_setRotationTargetInterfaceOrientation:(int)arg1 ;
-(id)_rotationLastRestorableState;
-(id)_currentRestorableState;
-(void)_setRotationLastRestorableState:(id)arg1 ;
-(void)_restoreScrollPositionInCollectionViewForInterfaceOrientation:(int)arg1 fromRestorableState:(id)arg2 ;
-(void)_updateNavigationItemAnimated:(BOOL)arg1 ;
-(id)_portraitCollectionView;
-(id)_landscapeCollectionView;
-(id)_collectionViews;
-(id)_feedSectionInfosManager;
-(id)_sectionInfoForSection:(int)arg1 collectionView:(id)arg2 ;
-(int)_typeForCollectionView:(id)arg1 ;
-(id)_indexPathForImageHiddenDuringZoomTransition;
-(id)_sectionInfosForSections:(id)arg1 collectionView:(id)arg2 ;
-(id)_justLikedSections;
-(void)_getDescriptionPhrase:(out id*)arg1 streamAffordanceLabel:(out id*)arg2 actionText:(out id*)arg3 buttonType:(int*)arg4 forSections:(id)arg5 inCollectionView:(id)arg6 ;
-(id)_dateForSectionWithInfo:(id)arg1 ;
-(id)_textForDate:(id)arg1 ;
-(BOOL)_appJustEnteredForeground;
-(void)_setAppJustEnteredForeground:(BOOL)arg1 ;
-(void)_contextDidFinishRemoteMerge:(id)arg1 ;
-(id)_mostRecentContentDate;
-(id)_mostRecentContentDateViewed;
-(int)_mostRecentContentViewed;
-(void)_setMostRecentContentDateViewed:(id)arg1 ;
-(void)_setMostRecentContentViewed:(int)arg1 ;
-(id)collectionViewForCurrentInterfaceOrientation;
-(BOOL)_isScrolling;
-(id)_assetForItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2 ;
-(id)_preheatedAssetsByFormat;
-(void)_setPreheatedAssetsByFormat:(id)arg1 ;
-(void)_setLastPreheatedContentOffset:(CGPoint)arg1 ;
-(id)_sharedAlbumList;
-(void)_setLibraryUpdatingPreviouslyExpired:(BOOL)arg1 ;
-(BOOL)_isLibraryUpdatingPreviouslyExpired;
-(BOOL)_isLibraryUpdatingTimeoutExpired;
-(BOOL)_shouldShowTransitionUI;
-(BOOL)_userDidDismissPlaceholder;
-(BOOL)_shouldHideSectionWithType:(int)arg1 inCollectionViewType:(int)arg2 ;
-(BOOL)_isCollectionViewEmptyForInterfaceOrientation:(int)arg1 ;
-(void)_setupBrowsingFromAsset:(id)arg1 orComment:(id)arg2 ;
-(void)_setBrowsingSelectedAsset:(id)arg1 ;
-(void)_setBrowsingSelectedComment:(id)arg1 ;
-(void)_updateBrowsingAssetContainerList;
-(void)_setBrowsingAssetContainerList:(id)arg1 ;
-(int)_browsingSelectedSection;
-(void)_ensureWindowOfLoadedSectionInfosIncludesSection:(int)arg1 ;
-(id)_sectionInfosForBrowsingFromSectionInfo:(id)arg1 ;
-(id)_browsingAssetContainerList;
-(id)_pushedViewController;
-(id)_browsingSelectedComment;
-(id)_browsingSelectedAsset;
-(int)_loadedSectionInfosWindowSize;
-(BOOL)_isFlowDirectionReversed;
-(void)_setLoadedSectionInfosWindowSize:(int)arg1 ;
-(int)_rotationState;
-(int)_rotationTargetInterfaceOrientation;
-(void)_setFlowDirectionReversed:(BOOL)arg1 ;
-(void)_configureCollectionView:(id)arg1 ;
-(void)_setPortraitCollectionView:(id)arg1 ;
-(void)_updateSubviewsOrdering;
-(void)_setLandscapeCollectionView:(id)arg1 ;
-(BOOL)_isAnySharedAlbumAvailable;
-(id)_invitationsBarButtonItem;
-(void)_invitationsButtonAction:(id)arg1 ;
-(void)_setInvitationsBarButtonItem:(id)arg1 ;
-(int)_placeholderTypeForInterfaceOrientation:(int)arg1 ;
-(void)_setUserDidDismissPlaceholder:(BOOL)arg1 ;
-(int)_rotationSourceInterfaceOrientation;
-(void)_handlePlaceholderAction;
-(void)_autoHideBarsNow;
-(int)_numberOfSectionInfosForCollectionView:(id)arg1 ;
-(void)_configureImageCell:(id)arg1 forAssetAtIndexPath:(id)arg2 inCollectionView:(id)arg3 ;
-(void)_configureTextCell:(id)arg1 forCommentAtIndexPath:(id)arg2 inCollectionView:(id)arg3 ;
-(void)_configureTextCell:(id)arg1 forLikesAtIndexPath:(id)arg2 inCollectionView:(id)arg3 ;
-(void)_configureTextCell:(id)arg1 forTextAtIndexPath:(id)arg2 inCollectionView:(id)arg3 ;
-(void)_configureInvitationCell:(id)arg1 forInvitationAtIndexPath:(id)arg2 inCollectionView:(id)arg3 ;
-(void)_configureImageCell:(id)arg1 forThumbnailAtIndexPath:(id)arg2 inCollectionView:(id)arg3 ;
-(void)_configureStackCell:(id)arg1 forThumbnailsAtIndexPath:(id)arg2 inCollectionView:(id)arg3 ;
-(void)_configureTextCell:(id)arg1 forCaptionAtIndexPath:(id)arg2 inCollectionView:(id)arg3 ;
-(void)_configureTextCell:(id)arg1 forHeaderOfSections:(id)arg2 inCollectionView:(id)arg3 animated:(BOOL)arg4 ;
-(BOOL)_configureTextCell:(id)arg1 forFooterOfSection:(int)arg2 inCollectionView:(id)arg3 ;
-(id)_groupIDForSectionWithInfo:(id)arg1 ;
-(void)_configureTextCell:(id)arg1 forHeaderOfGroupID:(id)arg2 inCollectionView:(id)arg3 ;
-(BOOL)_setupBrowsingFromItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2 ;
-(void)_getPhotoBrowserController:(out id*)arg1 transition:(out id*)arg2 withOptions:(int)arg3 ;
-(BOOL)_shouldHideSectionInfo:(id)arg1 forCollectionView:(id)arg2 ;
-(int)_typeForSectionInfo:(id)arg1 ;
-(BOOL)_shouldJoinSectionInfo:(id)arg1 withSectionInfo:(id)arg2 collectionViewType:(int)arg3 ;
-(BOOL)_shouldHideHeaderForSectionWithType:(int)arg1 ;
-(BOOL)_viewDidAppear;
-(void)_expandWindowOfLoadedSectionInfos;
-(CGPoint)_lastPreheatedContentOffset;
-(void)_userDidScrollFeed;
-(void)_invalidateMostRecentContentDate;
-(void)_updateInterfaceForDeletedSections:(id)arg1 insertedSections:(id)arg2 updatedSections:(id)arg3 ;
-(void)_scheduleVisibleInterfaceUpdateForSectionInfosWithCommentChanges:(id)arg1 updatedAssets:(id)arg2 ;
-(id)_sectionInfosWithCommentChanges;
-(void)_setSectionInfosWithCommentChanges:(id)arg1 ;
-(id)_updatedAssets;
-(void)_setUpdatedAssets:(id)arg1 ;
-(BOOL)_isVisibleInterfaceUpdateScheduled;
-(void)_setVisibleInterfaceUpdateScheduled:(BOOL)arg1 ;
-(void)_updateVisibleInterfaceUpdatesNow;
-(id)_pushedAlbum;
-(void)_setIndexPathForImageHiddenDuringZoomTransition:(id)arg1 ;
-(id)_pinchedCollectionView;
-(id)_loadedSectionInfoForCloudFeedEntry:(id)arg1 ;
-(void)_navigateToRevealAsset:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(BOOL)_navigateToRevealComment:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)_navigateToSectionInfo:(id)arg1 atItemIndex:(int)arg2 completion:(/*^block*/ id)arg3 ;
-(id)_presentedPhotosPickerViewController;
-(void)_setPresentedPhotosPickerViewController:(id)arg1 ;
-(void)_didTapThumbnailOrOverlayPlayButtonInFeedCell:(id)arg1 ;
-(void)_didTapSectionHeaderFeedCell:(id)arg1 ;
-(void)_didTapSectionFooterFeedCell:(id)arg1 ;
-(id)_collectionViewContainingView:(id)arg1 ;
-(void)_navigateToRevealPhoto:(id)arg1 inAlbum:(NSObject*)arg2 animated:(BOOL)arg3 ;
-(void)_setJustLikedSections:(id)arg1 ;
-(void)_setUserCloudSharedLiked:(BOOL)arg1 forItemsInSections:(id)arg2 inCollectionView:(id)arg3 ;
-(void)_showOutOfNetworkInvitationMessageForSharedAlbum:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(id)_indexPathForItemWithAsset:(id)arg1 inCollectionView:(id)arg2 ;
-(void)_enumerateCenterAssetsInRestorableState:(id)arg1 inCollectionView:(id)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(void)_openiCloudSettings;
-(BOOL)_beginInteractiveNavigationForItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2 ;
-(void)_setPinchedCollectionView:(id)arg1 ;
-(void)_setInvitationsPopoverShowPending:(BOOL)arg1 ;
-(id)initWithSpec:(id)arg1 contentType:(int)arg2 ;
-(void)_setInvitationsPopoverController:(id)arg1 ;
-(void)_createNewStream;
-(void)_setAlbumStreamActivity:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldHideSection:(int)arg3 ;
-(int)collectionView:(id)arg1 layout:(id)arg2 typeForSection:(int)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 contentInsetsForSection:(int)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 imageSizeForTileAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 mininumSizeForTileAtIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldShowCaptionForTileAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 captionSizeForTileAtIndexPath:(id)arg3 proposedSize:(CGSize)arg4 ;
-(id)collectionView:(id)arg1 layout:(id)arg2 batchIDForTileAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 layout:(id)arg2 referenceMaximumLength:(float*)arg3 minimumNumberOfTilesToOmit:(int*)arg4 forSection:(int)arg5 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForRowAtIndexPath:(id)arg3 proposedSize:(CGSize)arg4 ;
-(PUFeedSeparatorMetrics)collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenRowAtIndexPath:(id)arg3 andRowAtIndexPath:(id)arg4 proposedMetrics:(PUFeedSeparatorMetrics)arg5 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForThumbnailInSection:(int)arg3 ;
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldJoinSection:(int)arg3 withSection:(int)arg4 ;
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldHideHeaderInSection:(int)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForHeaderOfSections:(id)arg3 proposedSize:(CGSize)arg4 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForFooterInSection:(int)arg3 proposedSize:(CGSize)arg4 ;
-(PUFeedSeparatorMetrics)collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenSection:(int)arg3 andSection:(int)arg4 proposedMetrics:(PUFeedSeparatorMetrics)arg5 ;
-(id)collectionView:(id)arg1 layout:(id)arg2 groupIDForSection:(int)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 headerSizeForGroupID:(id)arg3 proposedSize:(CGSize)arg4 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 spacingBetweenSection:(int)arg3 andHeaderForGroupID:(id)arg4 ;
-(void)feedSectionInfosManager:(id)arg1 sectionInfosDidChange:(id)arg2 ;
-(void)didTapOverlayPlayButtonInFeedImageCell:(id)arg1 ;
-(void)didTapCommentButtonInFeedImageCell:(id)arg1 ;
-(void)didTapButtonInFeedTextCell:(id)arg1 ;
-(id)_albumStreamActivity;
-(void).cxx_destruct;
@end

