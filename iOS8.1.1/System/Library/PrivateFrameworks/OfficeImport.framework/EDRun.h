/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:03 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/EDKeyedObject.h>

@class EDResources, NSString;

@interface EDRun : NSObject <EDKeyedObject> {

	EDResources* mResources;
	unsigned long long mCharIndex;
	unsigned long long mFontIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)runWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 resources:(id)arg3 ;
+(id)runWithCharIndex:(unsigned long long)arg1 font:(id)arg2 resources:(id)arg3 ;
+(id)runWithResources:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setFontIndex:(unsigned long long)arg1 ;
-(unsigned long long)fontIndex;
-(id)initWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 resources:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)font;
-(long long)key;
-(unsigned long long)charIndex;
-(id)initWithResources:(id)arg1 ;
-(void)setCharIndex:(unsigned long long)arg1 ;
-(id)initWithCharIndex:(unsigned long long)arg1 font:(id)arg2 resources:(id)arg3 ;
-(BOOL)isEqualToRun:(id)arg1 ;
-(void)adjustIndex:(unsigned long long)arg1 ;
@end
