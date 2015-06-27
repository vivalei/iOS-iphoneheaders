/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPSmartField.h>

@class NSString;

@interface TSWPRubyField : TSWPSmartField {

	NSString* _rubyText;

}

@property (nonatomic,copy) NSString * rubyText;                  //@synthesize rubyText=_rubyText - In the implementation block
@property (nonatomic,readonly) NSString * baseText; 
@property (nonatomic,readonly) int baseTextScript; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)saveToArchive:(RubyFieldArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const RubyFieldArchive*)arg1 unarchiver:(id)arg2 ;
-(int)smartFieldKind;
-(int)styleAttributeArrayKind;
-(NSString *)baseText;
-(NSString *)rubyText;
-(char)canCopy:(NSRange)arg1 ;
-(int)attributeArrayKind;
-(void)setRubyText:(NSString *)arg1 ;
-(id)initWithContext:(id)arg1 rubyText:(id)arg2 ;
-(int)baseTextScript;
-(void)dealloc;
-(id)text;
-(char)allowsEditing;
@end
