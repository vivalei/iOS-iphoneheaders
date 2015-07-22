/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PRCandidate : NSObject {

	NSString* _string;
	double _errorScore;
	double _lmScore;
	BOOL _blacklisted;

}
+(double)errorScoreForType:(unsigned long long)arg1 ;
+(id)candidateWithString:(id)arg1 errorType:(unsigned long long)arg2 ;
+(id)candidateWithBuffer:(char*)arg1 encoding:(unsigned)arg2 transform:(unsigned long long)arg3 errorType:(unsigned long long)arg4 ;
+(id)candidateWithString:(id)arg1 errorScore:(double)arg2 ;
+(id)candidateWithBuffer:(char*)arg1 encoding:(unsigned)arg2 errorType:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)description;
-(id)string;
-(id)initWithString:(id)arg1 errorScore:(double)arg2 ;
-(double)errorScore;
-(double)languageModelScore;
-(BOOL)isBlacklisted;
-(void)setErrorScore:(double)arg1 ;
-(void)setLanguageModelScore:(double)arg1 ;
-(void)setBlacklisted:(BOOL)arg1 ;
-(double)score;
@end
