/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:39 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BBBulletinUpdate.h>

@interface BBBulletinUpdateAdd : BBBulletinUpdate {

	BOOL _shouldPlayLightsAndSirens;

}

@property (nonatomic,readonly) BOOL shouldPlayLightsAndSirens;              //@synthesize shouldPlayLightsAndSirens=_shouldPlayLightsAndSirens - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)shouldPlayLightsAndSirens;
-(id)initWithBulletin:(id)arg1 updateType:(long long)arg2 transactionID:(unsigned long long)arg3 ;
-(id)initWithBulletin:(id)arg1 updateType:(long long)arg2 transactionID:(unsigned long long)arg3 shouldPlayLightsAndSirens:(BOOL)arg4 ;
@end
