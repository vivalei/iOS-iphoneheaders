/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPPasteboardWriteAssistant.h>

@class TSPPasteboard;

@interface TSPCopyAssistant : TSPPasteboardWriteAssistant {

	TSPPasteboard* _pasteboard;
	bool _didAttemptToCopy;

}
-(void)loadNativeData;
-(void)copyToPasteboardIsSmartCopy:(bool)arg1 ;
-(id)initWithPasteboard:(id)arg1 sourceContext:(id)arg2 ;
-(id)initWithContext:(id)arg1 ;
-(void).cxx_destruct;
-(void)copyToPasteboard;
@end

