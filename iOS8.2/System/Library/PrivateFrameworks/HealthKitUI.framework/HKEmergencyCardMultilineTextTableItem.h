/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <HealthKitUI/HKEmergencyCardTableItem.h>
#import <HealthKitUI/HKMedicalIDEditorCellEditDelegate.h>
#import <HealthKitUI/HKMedicalIDEditorCellHeightChangeDelegate.h>

@protocol HKEmergencyCardRowHeightChangeDelegate;
@class _HKMedicalIDMultilineStringCell, HKMedicalIDEditorMultilineStringCell;

@interface HKEmergencyCardMultilineTextTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, HKMedicalIDEditorCellHeightChangeDelegate> {

	_HKMedicalIDMultilineStringCell* _labelCell;
	HKMedicalIDEditorMultilineStringCell* _editableCell;
	id<HKEmergencyCardRowHeightChangeDelegate> _rowHeightChangeDelegate;

}

@property (assign,nonatomic,__weak) id<HKEmergencyCardRowHeightChangeDelegate> rowHeightChangeDelegate;              //@synthesize rowHeightChangeDelegate=_rowHeightChangeDelegate - In the implementation block
-(void)commitEditing;
-(void)setData:(id)arg1 ;
-(id)_cell;
-(void)medicalIDEditorCellDidChangeValue:(id)arg1 ;
-(void)medicalIDEditorCell:(id)arg1 didChangeHeight:(float)arg2 keepRectVisible:(CGRect)arg3 inView:(id)arg4 ;
-(void)setRowHeightChangeDelegate:(id<HKEmergencyCardRowHeightChangeDelegate>)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndex:(int)arg2 ;
-(float)tableView:(id)arg1 heightForRowAtIndex:(int)arg2 ;
-(id<HKEmergencyCardRowHeightChangeDelegate>)rowHeightChangeDelegate;
-(id)_editableCell;
-(id)_placeholderText;
-(void)_configureEditableCell:(id)arg1 ;
-(id)_labelCell;
-(id)_multilineStringValue;
-(void)_updateMultilineStringValueWithValue:(id)arg1 ;
@end

