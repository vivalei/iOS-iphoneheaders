/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:07:21 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CommonUtilities/CommonUtilities-Structs.h>
@interface CUTReachability : NSObject {

	char localWiFiRef;
	SCNetworkReachabilityRef reachabilityRef;

}
+(id)reachabilityWithHostName:(id)arg1 ;
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityForInternetConnection;
+(id)reachabilityForLocalWiFi;
-(void)dealloc;
-(int)localWiFiStatusForFlags:(unsigned)arg1 ;
-(int)networkStatusForFlags:(unsigned)arg1 ;
-(char)connectionRequired;
-(int)currentReachabilityStatus;
@end
