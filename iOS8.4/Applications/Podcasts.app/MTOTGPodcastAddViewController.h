/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MTSourceListController.h>

@class NSString, NSSet;

@interface MTOTGPodcastAddViewController : MTSourceListController {

	NSString* _playlistUuid;
	NSSet* _addedEpisodeUuids;

}

@property (nonatomic,copy) NSString * playlistUuid;                //@synthesize playlistUuid=_playlistUuid - In the implementation block
@property (nonatomic,copy) NSSet * addedEpisodeUuids;              //@synthesize addedEpisodeUuids=_addedEpisodeUuids - In the implementation block
-(void)restoreSelection;
-(id)newCellInstanceWithReuseIdentifier:(id)arg1 ;
-(void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setPlaylistUuid:(NSString *)arg1 ;
-(NSString *)playlistUuid;
-(void)setAddedEpisodeUuids:(NSSet *)arg1 ;
-(NSSet *)addedEpisodeUuids;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
@end
