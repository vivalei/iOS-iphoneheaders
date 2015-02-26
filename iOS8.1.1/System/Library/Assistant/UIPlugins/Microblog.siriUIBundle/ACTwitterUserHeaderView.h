/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:39 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/UIPlugins/Microblog.siriUIBundle/Microblog
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Microblog/Microblog-Structs.h>
#import <SiriUI/SiriUIReusableSubtitledHeaderView.h>

@class UIImageView;

@interface ACTwitterUserHeaderView : SiriUIReusableSubtitledHeaderView {

	UIImageView* _verificationBadgeImageView;
	BOOL _showsVerificationBadge;

}

@property (assign,nonatomic) BOOL showsVerificationBadge;              //@synthesize showsVerificationBadge=_showsVerificationBadge - In the implementation block
-(BOOL)showsVerificationBadge;
-(void)setShowsVerificationBadge:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
