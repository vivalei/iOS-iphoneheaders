/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol SBIconAccessoryView <NSObject>
@required
+(id)checkoutAccessoryImagesForIcon:(id)arg1 location:(int)arg2;
-(void)configureAnimatedForIcon:(id)arg1 location:(int)arg2 highlighted:(BOOL)arg3 withPreparation:(/*^block*/ id)arg4 animation:(/*^block*/ id)arg5 completion:(/*^block*/ id)arg6;
-(void)configureForIcon:(id)arg1 location:(int)arg2 highlighted:(BOOL)arg3;
-(CGPoint*)accessoryOriginForIconBounds:(CGRect)arg1;
-(BOOL)displayingAccessory;
-(void)setAccessoryBrightness:(float)arg1;
-(void)prepareForReuse;
@end

