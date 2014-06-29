/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIWindow.h>
#import <Maps/FlipViewControllerDelegate.h>

@interface ModalFlipWindow : UIWindow <FlipViewControllerDelegate> {

	/*^block*/ id _dismissal;

}

@property (nonatomic,copy) id dismissal;              //@synthesize dismissal=_dismissal - In the implementation block
-(void)presentViewController:(id)arg1 flippingView:(id)arg2 dismissal:(/*^block*/ id)arg3 ;
-(void)flipViewControllerDidDismiss:(id)arg1 ;
-(void)setDismissal:(/*^block*/ id)arg1 ;
-(/*^block*/ id)dismissal;
-(id)init;
-(void)dismiss;
-(void).cxx_destruct;
@end
