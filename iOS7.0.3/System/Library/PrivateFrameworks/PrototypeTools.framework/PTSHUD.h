/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/_UISettingsKeyPathObserver.h>
#import <UIKit/_UISettingsGroupObserver.h>

@class _UISettings, _UISettingsGroup, NSString, NSDictionary, NSArray, UILabel, PT2DGraphView, NSMutableDictionary, PTSSlider, UIView;

@interface PTSHUD : UIView <UIGestureRecognizerDelegate, _UISettingsKeyPathObserver, _UISettingsGroupObserver> {

	BOOL _showing;
	BOOL _archiveAIsActive;
	int _savedSettingsIndex;
	_UISettings* _settings;
	_UISettingsGroup* _settingsGroup;
	NSString* _persisentSettingsGroupFilename;
	NSDictionary* _configuration;
	NSString* _mode;
	NSArray* _modeChangeKeys;
	UILabel* _infoLabel;
	PT2DGraphView* _coverageView;
	NSMutableDictionary* _archiveA;
	NSMutableDictionary* _archiveB;
	PTSSlider* _savedSettingsIndexSlider;
	UIView* _panView;
	CGPoint _initialPoint;

}

@property (nonatomic,retain) _UISettings * settings;                               //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) _UISettingsGroup * settingsGroup;                     //@synthesize settingsGroup=_settingsGroup - In the implementation block
@property (nonatomic,copy) NSString * persisentSettingsGroupFilename;              //@synthesize persisentSettingsGroupFilename=_persisentSettingsGroupFilename - In the implementation block
@property (assign,nonatomic) BOOL showing;                                         //@synthesize showing=_showing - In the implementation block
@property (assign,nonatomic) int savedSettingsIndex;                               //@synthesize savedSettingsIndex=_savedSettingsIndex - In the implementation block
@property (nonatomic,copy) NSDictionary * configuration;                           //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) NSString * mode;                                        //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) NSArray * modeChangeKeys;                               //@synthesize modeChangeKeys=_modeChangeKeys - In the implementation block
@property (nonatomic,retain) UILabel * infoLabel;                                  //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) PT2DGraphView * coverageView;                         //@synthesize coverageView=_coverageView - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * archiveA;                       //@synthesize archiveA=_archiveA - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * archiveB;                       //@synthesize archiveB=_archiveB - In the implementation block
@property (assign,nonatomic) BOOL archiveAIsActive;                                //@synthesize archiveAIsActive=_archiveAIsActive - In the implementation block
@property (assign,nonatomic) CGPoint initialPoint;                                 //@synthesize initialPoint=_initialPoint - In the implementation block
@property (nonatomic,retain) PTSSlider * savedSettingsIndexSlider;                 //@synthesize savedSettingsIndexSlider=_savedSettingsIndexSlider - In the implementation block
@property (nonatomic,retain) UIView * panView;                                     //@synthesize panView=_panView - In the implementation block
+(id)window;
+(id)sharedInstance;
+(CGRect)defaultFrame;
-(void)setInfoLabel:(id)arg1 ;
-(BOOL)showing;
-(void)setShowing:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)show;
-(void)setMode:(id)arg1 ;
-(id)mode;
-(void)hide;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(void)settingsGroup:(id)arg1 didInsertSettings:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)settingsGroup:(id)arg1 didRemoveSettings:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)settingsGroup:(id)arg1 didMoveSettings:(id)arg2 fromIndex:(unsigned)arg3 toIndex:(unsigned)arg4 ;
-(void)setSettings:(id)arg1 ;
-(id)settings;
-(CGPoint)initialPoint;
-(void)setInitialPoint:(CGPoint)arg1 ;
-(id)configuration;
-(void)setConfiguration:(id)arg1 ;
-(void)handleVerticalPanGesture:(id)arg1 ;
-(void)setPanView:(id)arg1 ;
-(void)showInMode:(id)arg1 ;
-(void)setSettingsGroup:(id)arg1 ;
-(id)settingsGroup;
-(id)panView;
-(id)modeChangeKeys;
-(void)showInModeForKeyPath:(id)arg1 ;
-(id)savedSettingsIndexSlider;
-(void)configureForSettings:(id)arg1 settingsGroup:(id)arg2 ;
-(void)setPersisentSettingsGroupFilename:(id)arg1 ;
-(void)setModeChangeKeys:(id)arg1 ;
-(void)setSavedSettingsIndexSlider:(id)arg1 ;
-(void)savedSettingsIndexSliderValueChanged:(id)arg1 ;
-(int)savedSettingsIndex;
-(void)setArchiveA:(id)arg1 ;
-(void)setArchiveB:(id)arg1 ;
-(void)setArchiveAIsActive:(BOOL)arg1 ;
-(id)persisentSettingsGroupFilename;
-(void)showMessage:(id)arg1 ;
-(void)setSavedSettingsIndex:(int)arg1 ;
-(BOOL)showSavedSettingsIndex:(int)arg1 ;
-(void)configureForSettings:(id)arg1 ;
-(void)restoreDefaultValuesAction:(id)arg1 ;
-(void)saveToPersistentSettingsAction:(id)arg1 ;
-(id)coverageView;
-(void)setCoverageView:(id)arg1 ;
-(id)archiveA;
-(id)archiveB;
-(BOOL)archiveAIsActive;
-(id)infoLabel;
-(void).cxx_destruct;
@end

