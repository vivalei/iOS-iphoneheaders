/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:10 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GEOResourceManifestTileGroupObserver.h>
#import <GeoServices/_GEOCountryConfigurationServerProxyDelegate.h>

@protocol _GEOCountryConfigurationServerProxy;
@class NSString, NSLock, NSMutableArray, NSMutableDictionary;

@interface GEOCountryConfiguration : NSObject <GEOResourceManifestTileGroupObserver, _GEOCountryConfigurationServerProxyDelegate> {

	NSString* _countryCode;
	NSLock* _countryCodeLock;
	NSMutableArray* _updateCompletionHandlers;
	NSLock* _supportedFeaturesLock;
	NSMutableDictionary* _supportedFeatures;
	double _urlAuthenticationTimeToLive;
	char _hasURLAuthenticationTimeToLive;
	id<_GEOCountryConfigurationServerProxy> _serverProxy;

}

@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,readonly) char currentCountrySupportsTraffic; 
@property (nonatomic,readonly) char currentCountrySupportsDirections; 
@property (nonatomic,readonly) char currentCountrySupportsNavigation; 
@property (nonatomic,readonly) char currentCountrySupportsRouteGenius; 
@property (nonatomic,readonly) char currentCountrySupportsCarIntegration; 
@property (nonatomic,readonly) double urlAuthenticationTimeToLive; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)disableServerConnection;
+(void)setUseLocalProxy:(char)arg1 ;
+(id)sharedConfiguration;
-(void)dealloc;
-(id)init;
-(id)defaultForKey:(id)arg1 defaultValue:(id)arg2 ;
-(void)updateCountryConfiguration:(/*^block*/id)arg1 ;
-(void)updateCountryConfiguration:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(void)_updateCountryConfiguration:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(id)_defaultForKey:(id)arg1 inCountry:(id)arg2 defaultValue:(id)arg3 sourcePtr:(int*)arg4 ;
-(char)countryCode:(id)arg1 supportsFeature:(int)arg2 ;
-(char)currentCountrySupportsFeature:(int)arg1 ;
-(char)currentCountrySupportsTraffic;
-(char)currentCountrySupportsNavigation;
-(id)_countryDefaultForKey:(id)arg1 inCountry:(id)arg2 sourcePtr:(int*)arg3 ;
-(id)defaultForKey:(id)arg1 defaultValue:(id)arg2 sourcePtr:(int*)arg3 ;
-(void)_resetSupportedFeatures;
-(void)serverProxyProvidersDidChange:(id)arg1 ;
-(void)serverProxy:(id)arg1 countryCodeDidChange:(id)arg2 ;
-(char)currentCountrySupportsDirections;
-(char)currentCountrySupportsRouteGenius;
-(char)currentCountrySupportsCarIntegration;
-(double)urlAuthenticationTimeToLive;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)updateProvidersForCurrentCountry;
-(NSString *)countryCode;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
@end

