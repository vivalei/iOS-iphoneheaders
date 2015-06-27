/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:02 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSData;


@protocol TSPPassphraseConsumer <NSObject>
@property (nonatomic,readonly) NSString * passphraseHint; 
@property (nonatomic,readonly) NSData * keychainGenericItem; 
@property (nonatomic,readonly) NSString * service; 
@optional
-(char)setDecryptionKey:(id)arg1;
-(NSData *)keychainGenericItem;
-(NSString *)service;
-(NSString *)passphraseHint;

@required
-(char)setPassphrase:(id)arg1;

@end
