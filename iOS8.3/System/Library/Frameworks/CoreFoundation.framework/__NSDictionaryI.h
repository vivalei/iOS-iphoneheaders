/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:42:01 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@interface __NSDictionaryI : NSDictionary {

	unsigned _used : 26;
	unsigned _szidx : 6;

}
+(id)__new:(const id*)arg1 :(const id*)arg2 :(unsigned)arg3 :(char)arg4 :(char)arg5 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned)arg3 ;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(double)_clumpingFactor;
-(double)_clumpingInterestingThreshold;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS16*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(unsigned)count;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)finalize;
@end

