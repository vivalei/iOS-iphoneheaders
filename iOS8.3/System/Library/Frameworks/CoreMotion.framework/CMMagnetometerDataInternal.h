/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:44:22 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/NSCopying.h>

@interface CMMagnetometerDataInternal : NSObject <NSCopying> {

	SCD_Struct_CM1 fMagneticField;

}
-(void)setMagneticField:(SCD_Struct_CM1)arg1 ;
-(id)initWithMagneticField:(SCD_Struct_CM1)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

