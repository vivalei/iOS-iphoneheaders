/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:52:27 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/_HKQueryServerDataObject.h>

@interface _HKStatisticsQueryServerDataObject : _HKQueryServerDataObject {

	unsigned _options;
	unsigned _mergeStrategy;

}

@property (assign,nonatomic) unsigned options;                    //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) unsigned mergeStrategy;              //@synthesize mergeStrategy=_mergeStrategy - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOptions:(unsigned)arg1 ;
-(unsigned)options;
-(unsigned)mergeStrategy;
-(void)setMergeStrategy:(unsigned)arg1 ;
@end

