/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIKeyboardInputMode;

@interface TIInputModeTableCell : PSTableCell {

	UIKeyboardInputMode* _inputMode;

}

@property (nonatomic,copy) UIKeyboardInputMode * inputMode;              //@synthesize inputMode=_inputMode - In the implementation block
+(long long)cellStyle;
-(id)title;
-(id)subtitle;
-(void)setInputMode:(UIKeyboardInputMode *)arg1 ;
-(UIKeyboardInputMode *)inputMode;
-(void)updateLabels;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end

