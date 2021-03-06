/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:18 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/VictoriaSettings.bundle/VictoriaSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSViewController.h>
#import <VictoriaSettings/STEmpedLinkingManagerDelegate.h>
#import <VictoriaSettings/STLinkingViewDelegate.h>

@class STLinkingView, UILabel, STEmpedLinkingManager, NSString;

@interface NikeSettingsLinkingController : PSViewController <STEmpedLinkingManagerDelegate, STLinkingViewDelegate> {

	STLinkingView* _linkingView;
	UILabel* _titleLabel;
	STEmpedLinkingManager* _linkingManager;
	BOOL _isRemoteLinking;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)suspend;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)bundle;
-(void)_configureLinkingAnimated:(BOOL)arg1 ;
-(void)_setTitleLabelText:(id)arg1 ;
-(void)_updateForSensorStatusChange;
-(void)linkingViewRequestsEmpedSearch:(id)arg1 ;
-(void)linkingViewRequestsRemoteSearch:(id)arg1 ;
-(void)linkingViewRequestsPop:(id)arg1 ;
-(void)empedLinkingManager:(id)arg1 linkedStateChanged:(BOOL)arg2 ;
-(void)empedLinkingManager:(id)arg1 remoteLinkedStateChanged:(BOOL)arg2 ;
@end

