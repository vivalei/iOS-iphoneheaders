/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:59 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDOperation.h>

@class UITextView;

@interface DDTextKitOperation : DDOperation {

	NSRange _range;
	int _editCount;

}

@property (nonatomic,retain) UITextView * container; 
@property (assign) NSRange range;                                 //@synthesize range=_range - In the implementation block
-(void)textDidChange:(id)arg1 ;
-(NSRange)range;
-(void)cleanup;
-(void)setRange:(NSRange)arg1 ;
-(void)dispatchContainerModificationBlock:(/*^block*/id)arg1 ;
-(char)needsToStartOver;
-(char)doURLificationOnDocument;
-(id)newOperationForStartingOver;
-(id)newOperationForContinuation;
-(void)_updateGenerationNumber;
-(char)_rangeValidForContainer;
-(DDScanQueryRef)_createScanQueryForBackend;
-(id)initWithContainer:(id)arg1 ;
-(char)_addResultsToAttributes;
@end
