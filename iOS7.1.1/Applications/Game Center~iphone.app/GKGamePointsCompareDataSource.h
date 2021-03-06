/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center~iphone/Game Center~iphone-Structs.h>
#import <Game Center~iphone/GKGamesDataSource.h>

@class NSMutableOrderedSet;

@interface GKGamePointsCompareDataSource : GKGamesDataSource {

	NSMutableOrderedSet* _localGames;

}

@property (nonatomic,retain) NSMutableOrderedSet * localGames;              //@synthesize localGames=_localGames - In the implementation block
-(void)loadGameDetailsForPlayer:(id)arg1 fromGames:(id)arg2 forPages:(NSRange)arg3 handler:(/*^block*/ id)arg4 ;
-(void)loadGamesListForPlayer:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)configureCell:(id)arg1 withGameRecordAtIndex:(unsigned)arg2 ;
-(Class)headerClass;
-(void)setLocalGames:(id)arg1 ;
-(id)localGames;
-(void)_loadGamesListForPlayer:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(id)gameRecordForLocalPlayerAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(Class)cellClass;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
@end

