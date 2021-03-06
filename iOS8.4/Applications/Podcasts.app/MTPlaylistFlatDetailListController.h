/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:04 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MTOrderedEpisodesTableViewController.h>
#import <Podcasts/MTPlaylistLayoutControllerProtocol.h>

@protocol MTPlaylistLayoutViewControllerDelegate;
@class UIButton, UIPopoverController, NSString, UIRefreshControl, UIBarButtonItem, UIView, MTAllPropertyChangesQueryObserver;

@interface MTPlaylistFlatDetailListController : MTOrderedEpisodesTableViewController <MTPlaylistLayoutControllerProtocol> {

	UIButton* _settingsButton;
	UIPopoverController* _episodePopover;
	NSString* _settingsUuidDisplayingPopover;
	UIPopoverController* _settingsPopover;
	UIRefreshControl* _refreshControl;
	UIBarButtonItem* _settingsButtonItem;
	unsigned _episodesCount;
	UIView* _headerViewSeparator;
	UIView* _footerView;
	MTAllPropertyChangesQueryObserver* _downloadedQuery;
	char _downloadsAvailable;
	char _downloadButtonEnabled;
	/*^block*/id _settingsBlock;
	id<MTPlaylistLayoutViewControllerDelegate> _layoutDelegate;

}

@property (assign,nonatomic) char downloadsAvailable;                                                       //@synthesize downloadsAvailable=_downloadsAvailable - In the implementation block
@property (assign,nonatomic) char downloadButtonEnabled;                                                    //@synthesize downloadButtonEnabled=_downloadButtonEnabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id settingsBlock;                                                                //@synthesize settingsBlock=_settingsBlock - In the implementation block
@property (assign,nonatomic,__weak) id<MTPlaylistLayoutViewControllerDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
+(id)stationPodcastPredicateForPlaylist:(id)arg1 ;
+(Class)playlistSettingsClass;
-(id)editingToolbarButtons;
-(id)toolbarButtons;
-(id)emptyListMessage;
-(void)showSettings:(id)arg1 ;
-(id)leftButtonItems;
-(void)didEndUpdatingAllPodcasts:(id)arg1 ;
-(id)settingsButtonItem;
-(void)refreshPlaylist:(id)arg1 ;
-(void)setDownloadButtonEnabled:(char)arg1 ;
-(void)setDownloadsAvailable:(char)arg1 ;
-(void)updateDownloadButtonState;
-(void)updateEditingState:(char)arg1 animated:(char)arg2 ;
-(void)_updatePlaylist;
-(void)_updatePlaylistSuppressUpdates:(char)arg1 ;
-(void)playlistSettingsDidChange;
-(id)settingsBlock;
-(void)setSettingsBlock:(id)arg1 ;
-(id)rightEditingItems;
-(void)downloadAll:(id)arg1 ;
-(void)finishedSettings:(id)arg1 ;
-(void)playlistSettingsDidChangeSetting:(id)arg1 ;
-(char)downloadButtonEnabled;
-(char)downloadsAvailable;
-(id)settingsPopover;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)viewDidLayoutSubviews;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(id)headerView;
-(id)popoverController;
-(id)footerView;
-(id<MTPlaylistLayoutViewControllerDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<MTPlaylistLayoutViewControllerDelegate>)arg1 ;
-(id)settingsButton;
@end

