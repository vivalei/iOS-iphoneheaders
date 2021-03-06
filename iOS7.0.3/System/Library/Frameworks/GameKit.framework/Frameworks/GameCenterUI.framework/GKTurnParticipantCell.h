/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKBaseTurnParticipantCell.h>

@class UIImageView;

@interface GKTurnParticipantCell : GKBaseTurnParticipantCell {

	UIImageView* _statusImageView;

}

@property (nonatomic,retain) UIImageView * statusImageView;              //@synthesize statusImageView=_statusImageView - In the implementation block
-(void)updateLineLayoutConstraints;
-(void)didUpdateModel;
-(id)statusImageView;
-(void)setStatusImageView:(id)arg1 ;
-(void)setParticipant:(id)arg1 ;
-(void)setMatch:(id)arg1 ;
-(void)setDetailPressedAction:(SEL)arg1 ;
-(void)setNeedsUpdateLineLayoutConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
@end

