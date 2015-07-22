/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol SBIconAccessoryView <SBReusableView>
@required
+(id)checkoutAccessoryImagesForIcon:(id)arg1 location:(int)arg2;
-(void)configureAnimatedForIcon:(id)arg1 location:(int)arg2 highlighted:(BOOL)arg3 withPreparation:(/*^block*/id)arg4 animation:(/*^block*/id)arg5 completion:(/*^block*/id)arg6;
-(void)configureForIcon:(id)arg1 location:(int)arg2 highlighted:(BOOL)arg3;
-(CGPoint*)accessoryOriginForIconBounds:(CGRect)arg1;
-(BOOL)displayingAccessory;
-(void)setAccessoryBrightness:(double)arg1;

@end
