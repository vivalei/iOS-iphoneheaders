/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class SBVOTWindow, UIView, SBVoiceOverTouchCursorDisplay, SBVoiceOverTouchRotorDisplay, SBAXInspector, SBVoiceOverTouchLabelElementAlertItem, NSString;

@interface SBVoiceOverTouchConnection : NSObject <UIAlertViewDelegate, UITextFieldDelegate> {

	CFMachPortRef _votMachPort;
	SBVOTWindow* _votWindow;
	UIView* _contentView;
	SBVoiceOverTouchCursorDisplay* _cursorDisplay;
	SBVoiceOverTouchRotorDisplay* _rotorDisplay;
	SBAXInspector* _inspector;
	SBVoiceOverTouchLabelElementAlertItem* _labelAlert;
	BOOL _screenCurtainEnabled;
	BOOL inVoiceOverPassthroughMode;

}

@property (assign,nonatomic) BOOL inVoiceOverPassthroughMode; 
@property (assign,nonatomic) BOOL screenCurtainEnabled;                    //@synthesize screenCurtainEnabled=_screenCurtainEnabled - In the implementation block
@property (nonatomic,readonly) BOOL elementLabelerVisible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultConnection;
-(BOOL)screenCurtainEnabled;
-(void)exitedItemChooserWithSelection:(long long)arg1 ;
-(BOOL)elementLabelerVisible;
-(BOOL)inVoiceOverPassthroughMode;
-(void)_tripleClickAlertDisplayed:(id)arg1 ;
-(id)votWindow;
-(void)setInVoiceOverPassthroughMode:(BOOL)arg1 ;
-(void)setScreenCurtainEnabled:(BOOL)arg1 ;
-(void)_registerForMachConnection;
-(void)_programmaticAppSwitch:(BOOL)arg1 ;
-(void)_displayItemChooser:(id)arg1 ;
-(void)_registerVOTConnectionWithPort:(unsigned)arg1 ;
-(void)_updateVisualRotor:(id)arg1 ;
-(void)setAccessibilityInspectorInfo:(id)arg1 ;
-(id)AXInspector;
-(void)tearDownVoiceOverTouchConnection;
-(void)setLabelElementPanelVisible:(BOOL)arg1 initialValue:(id)arg2 ;
-(void)setAccessibilityInspectorNotification:(id)arg1 ;
-(void)setScreenCurtainEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setItemChooserCategories:(id)arg1 ;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
@end
