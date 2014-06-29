/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKChallenge.h>

@class GKScore, GKLeaderboard;

@interface GKScoreChallenge : GKChallenge {

	GKScore* _score;

}

@property (nonatomic,retain) GKScore * score;                                     //@synthesize score=_score - In the implementation block
@property (nonatomic,@dynamic,readonly) GKLeaderboard * leaderboard; 
+(bool)instancesRespondToSelector:(SEL)arg1 ;
-(id)composeGoalText;
-(id)alertGoalText;
-(id)iconSource;
-(id)smallIconURLString;
-(id)iconURLString;
-(id)listTitleText;
-(id)listGoalText;
-(id)detailGoalText;
-(id)smallIconSource;
-(id)score;
-(void)setInternal:(id)arg1 ;
-(id)detailGoalTextForPlayer:(id)arg1 withLeaderboard:(id)arg2 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(bool)detailsLoaded;
-(void)loadDetailsWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)leaderboard;
-(void)dealloc;
-(id)description;
-(id)titleText;
-(void)setScore:(id)arg1 ;
@end
