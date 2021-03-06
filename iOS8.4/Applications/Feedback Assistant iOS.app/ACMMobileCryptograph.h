/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant iOS/Feedback Assistant iOS-Structs.h>
#import <Feedback Assistant iOS/ACMCryptographProtocol.h>

@interface ACMMobileCryptograph : NSObject <ACMCryptographProtocol>
-(id)randomBytesWithSize:(unsigned)arg1 ;
-(id)encryptData:(id)arg1 withKey:(SecKeyRef)arg2 ;
-(id)signatureForData:(id)arg1 withKey:(SecKeyRef)arg2 ;
@end

