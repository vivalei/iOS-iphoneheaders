/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 9:36:33 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AXUIAlertDelegate <NSObject>
@optional
-(void)alertWithIdentifierWasEnqueued:(id)arg1;
-(double)delayForDequeuingAlertWithIdentifier:(id)arg1;
-(float)desiredWindowLevelForAlertWithIdentifier:(id)arg1;
-(id)styleProviderForAlertWithIdentifier:(id)arg1;
-(void)alertWithIdentifierDidAppear:(id)arg1;
-(void)alertWithIdentifierDidDisappear:(id)arg1;

@end
