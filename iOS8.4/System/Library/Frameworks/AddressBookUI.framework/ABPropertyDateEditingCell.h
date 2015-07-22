/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:14 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABPropertySimpleEditingCell.h>
#import <UIKit/UITextFieldDelegate.h>
#import <AddressBookUI/ABPickerControllerDelegate.h>

@class UIDatePicker, UIViewController, NSString;

@interface ABPropertyDateEditingCell : ABPropertySimpleEditingCell <UITextFieldDelegate, ABPickerControllerDelegate> {

	UIDatePicker* _datePicker;
	UIViewController* _contentViewController;

}

@property (nonatomic,retain) UIDatePicker * datePicker;                             //@synthesize datePicker=_datePicker - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDatePicker:(UIDatePicker *)arg1 ;
-(void)pickerDidCancel:(id)arg1 ;
-(void)picker:(id)arg1 didPickItem:(id)arg2 ;
-(void)labelButtonClicked:(id)arg1 ;
-(void)localeUpdated:(id)arg1 ;
-(void)dateChanged:(id)arg1 ;
-(BOOL)_shouldUseYearlessPickerForDateComponents:(id)arg1 ;
-(UIDatePicker *)datePicker;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(UIViewController *)contentViewController;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setContentViewController:(UIViewController *)arg1 ;
@end
