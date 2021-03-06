/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchDisplayDelegate.h>

@protocol CKConversationSearcherDelegate;
@class NSMutableArray, UISearchDisplayController, UISearchBar, CKSpotlightQuery;

@interface CKConversationSearcher : NSObject <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, UISearchDisplayDelegate> {

	<CKConversationSearcherDelegate>* _delegate;
	NSMutableArray* _sortedSearchResults;
	UISearchDisplayController* _searchController;
	UISearchBar* _searchBar;
	CKSpotlightQuery* _currentQuery;
	bool _shouldDisplayNoResults;
	bool _active;
	bool _showingSearchResults;

}

@property (nonatomic,readonly) UISearchDisplayController * searchController; 
@property (getter=isActive,nonatomic,readonly) bool active;                                          //@synthesize active=_active - In the implementation block
@property (getter=isShowingSearchResults,nonatomic,readonly) bool showingSearchResults;              //@synthesize showingSearchResults=_showingSearchResults - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(bool)isActive;
-(id)searchBar;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(bool)searchBarShouldBeginEditing:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 didShowSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 didHideSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayControllerDidBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerDidEndSearch:(id)arg1 ;
-(void)searchDisplayControllerWillBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerWillEndSearch:(id)arg1 ;
-(bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
-(void)_cancel;
-(bool)isShowingSearchResults;
-(id)searchController;
-(id)initWithDelegate:(id)arg1 ;
@end

