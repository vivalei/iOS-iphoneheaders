/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/NSCoding.h>
#import <Symbolication/NSCopying.h>

@interface VMUArchitecture : NSObject <NSCoding, NSCopying> {

	int _cpuType;
	int _cpuSubtype;

}
+(void)initialize;
+(id)currentArchitecture;
+(id)anyArchitecture;
+(id)ppcArchitecture;
+(id)ppc32Architecture;
+(id)ppc64Architecture;
+(id)i386Architecture;
+(id)x86_32Architecture;
+(id)x86_64Architecture;
+(id)armArchitecture;
+(id)architectureWithCpuType:(int)arg1 cpuSubtype:(int)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCpuType:(int)arg1 cpuSubtype:(int)arg2 ;
-(BOOL)isLittleEndian;
-(BOOL)is64Bit;
-(int)cpuType;
-(int)cpuSubtype;
-(BOOL)isEqualToArchitecture:(id)arg1 ;
-(BOOL)is32Bit;
-(BOOL)isBigEndian;
-(BOOL)matchesArchitecture:(id)arg1 ;
@end

