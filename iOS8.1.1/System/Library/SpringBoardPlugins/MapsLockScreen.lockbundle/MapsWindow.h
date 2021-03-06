/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <UIKit/UIWindow.h>
#import <MapsLockScreen/TraitsChangeObserving.h>

@class NSMapTable, UITraitCollection, NSString;

@interface MapsWindow : UIWindow <TraitsChangeObserving> {

	NSMapTable* _traitsObservers;
	BOOL _transitioning;
	UITraitCollection* _transitionTraits;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_Ma1 mapsSizeClassPair; 
-(void)removeTraitsChangeObserver:(id)arg1 ;
-(void)_maps_willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(SCD_Struct_Ma1)mapsSizeClassPair;
-(void)addTraitsChangeObserver:(id)arg1 willChangeHandler:(/*^block*/id)arg2 changeHandler:(/*^block*/id)arg3 didChangeHandler:(/*^block*/id)arg4 ;
-(id)_maps_effectiveTraitCollection;
-(void)_invokeTraitsChangeObserversForKey:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setRootViewController:(id)arg1 ;
@end

