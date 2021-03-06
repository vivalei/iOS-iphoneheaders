/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ADSRVClientConnectionRecord : NSObject {

	int _adSpaceCount;
	double _connectTime;
	double _disconnectTime;

}

@property (assign,nonatomic) double connectTime;                 //@synthesize connectTime=_connectTime - In the implementation block
@property (assign,nonatomic) double disconnectTime;              //@synthesize disconnectTime=_disconnectTime - In the implementation block
@property (assign,nonatomic) int adSpaceCount;                   //@synthesize adSpaceCount=_adSpaceCount - In the implementation block
-(void)setConnectTime:(double)arg1 ;
-(double)disconnectTime;
-(void)setDisconnectTime:(double)arg1 ;
-(int)adSpaceCount;
-(void)setAdSpaceCount:(int)arg1 ;
-(double)connectTime;
@end

