/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreMIDI/CoreMIDI-Structs.h>
@class MIDINetworkHost;

@interface MIDINetworkConnection : NSObject {

	MIDINetworkConnectionImpl* _impl;

}

@property (nonatomic,retain,readonly) MIDINetworkHost * host; 
+(id)connectionWithHost:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(MIDINetworkHost *)host;
@end

