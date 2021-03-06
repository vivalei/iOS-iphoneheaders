/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:25:05 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Ubiquity.framework/Versions/A/Support/ubd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet, NSMutableArray;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct {
	NSMutableDictionary* _browsers;
	NSMutableSet* _resolvingNetServices;
	NSMutableDictionary* _monitoredNetServices;
} SCD_Struct_UB1;

typedef struct {
	NSMutableArray* _netServices;
} SCD_Struct_UB2;

typedef struct {
	NSMutableDictionary* _byFQDN;
	NSMutableDictionary* _byEndPoint;
	NSMutableDictionary* _byUUID;
} SCD_Struct_UB3;

typedef struct {
	SCD_Struct_UB3 _foundServices;
	NSMutableDictionary* _preferredFQDN;
} SCD_Struct_UB4;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct __SecCertificate* SecCertificateRef;

typedef struct __SecIdentity* SecIdentityRef;

