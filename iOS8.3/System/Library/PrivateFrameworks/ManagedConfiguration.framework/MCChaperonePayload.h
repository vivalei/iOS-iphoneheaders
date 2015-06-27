/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:21:09 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSData, NSNumber;

@interface MCChaperonePayload : MCPayload {

	NSData* _pairingCertificateData;
	char _nonChaperonePairingAllowed;
	NSNumber* _nonChaperonePairingAllowedNum;

}

@property (nonatomic,retain,readonly) NSData * pairingCertificateData;                //@synthesize pairingCertificateData=_pairingCertificateData - In the implementation block
@property (nonatomic,readonly) char nonChaperonePairingAllowed;                       //@synthesize nonChaperonePairingAllowed=_nonChaperonePairingAllowed - In the implementation block
@property (nonatomic,readonly) NSNumber * nonChaperonePairingAllowedNum;              //@synthesize nonChaperonePairingAllowedNum=_nonChaperonePairingAllowedNum - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)description;
-(id)subtitle2Label;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)payloadDescriptionKeyValueSections;
-(id)subtitle2Description;
-(NSData *)pairingCertificateData;
-(char)nonChaperonePairingAllowed;
-(NSNumber *)nonChaperonePairingAllowedNum;
@end
