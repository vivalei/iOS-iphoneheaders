/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FacebookSettings/SLFacebookRegistrationInfoPrompt.h>

@class NSString;

@interface SLFacebookRegistrationNamePrompt : SLFacebookRegistrationInfoPrompt {

	NSString* _firstName;
	NSString* _lastName;
	bool _lastNameOnTop;

}
-(void)updateRegistrationInfo;
-(id)lastNameWithSpecifier:(id)arg1 ;
-(void)setLastName:(id)arg1 withSpecifier:(id)arg2 ;
-(void)setFirstName:(id)arg1 withSpecifier:(id)arg2 ;
-(id)firstNameWithSpecifier:(id)arg1 ;
-(bool)isReadyToValidate;
-(bool)validate;
-(id)initWithRegistrationInfo:(id)arg1 ;
-(void).cxx_destruct;
-(id)specifiers;
@end
