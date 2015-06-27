/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:53 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/CoreCECBus.h>

@interface CoreCECBusClient : CoreCECBus
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(void)activeSourceHasChangedTo:(id)arg1 fromDevice:(id)arg2 ;
-(id)addDeviceWithType:(unsigned)arg1 error:(id*)arg2 ;
-(char)setOSDName:(id)arg1 error:(id*)arg2 ;
-(char)setTvLanguageCode:(id)arg1 error:(id*)arg2 ;
-(void)mergePropertiesFromBus:(id)arg1 ;
@end
