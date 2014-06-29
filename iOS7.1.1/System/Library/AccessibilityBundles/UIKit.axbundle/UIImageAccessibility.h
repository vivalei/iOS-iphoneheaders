/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIImageAccessibility_super.h>

@interface UIImageAccessibility : UIImageAccessibility_super
+(id)kitImageNamed:(id)arg1 ;
+(id)imageNamed:(id)arg1 ;
+(id)imageWithContentsOfFile:(id)arg1 ;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)imageAtPath:(id)arg1 ;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(void)_initializeSafeCategory;
+(id)_accessibilityTargetClassName;
+(id)_installSafeCategoryValidationMethod;
+(id)_initializeSafeCategoryFromValidationManager;
-(void)_accessibilityApplyLabelOnMainThread:(id)arg1 ;
-(void)dealloc;
-(id)imageWithAlignmentRectInsets:(UIEdgeInsets)arg1 ;
-(id)_bezeledImageWithShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 fillRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 drawShadow:(bool)arg9 ;
-(id)_doubleBezeledImageWithExteriorShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 interiorShadowRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 fillRed:(double)arg9 green:(double)arg10 blue:(double)arg11 alpha:(double)arg12 ;
-(id)_imageScaledToProportion:(double)arg1 interpolationQuality:(int)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)imageWithRenderingMode:(long long)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 cache:(bool)arg2 ;
-(id)_flatImageWithColor:(id)arg1 ;
-(id)_flatImageWithWhite:(double)arg1 alpha:(double)arg2 ;
-(id)accessibilityIdentifier;
-(id)_accessibilityPhotoDescription;
@end
