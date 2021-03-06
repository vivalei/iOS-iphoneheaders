/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/DirectionsManagerObserver.h>

@protocol StarkNavigationStartupDelegate;
@class DirectionsWaypoint, GEOURLRouteHandle, NSString;

@interface StarkNavigationStartupSession : NSObject <DirectionsManagerObserver> {

	char _started;
	char _ended;
	DirectionsWaypoint* _destination;
	GEOURLRouteHandle* _routeHandle;
	char _startWithETAOnly;
	id<StarkNavigationStartupDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<StarkNavigationStartupDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char startWithETAOnly;                                           //@synthesize startWithETAOnly=_startWithETAOnly - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sessionWithSearchResultDestination:(id)arg1 routeHandle:(id)arg2 ;
+(id)_runningSessions;
+(void)_addSessionToRunningSessions:(id)arg1 ;
+(void)_removeSessionFromRunningSessions:(id)arg1 ;
+(id)nonNavigableRouteAlertUserInfo;
+(char)isStartingNavigation;
+(id)sessionWithAddressDestination:(id)arg1 ;
-(void)directionsManagerDidFailToLoad:(id)arg1 withError:(id)arg2 ;
-(void)directionsManagerDidStartLoad:(id)arg1 ;
-(void)directionsManager:(id)arg1 didLoadRoute:(id)arg2 ;
-(void)directionsManagerDidCancelLoad:(id)arg1 ;
-(void)directionsManager:(id)arg1 didStartNavigationSessionOfType:(int)arg2 options:(int)arg3 ;
-(void)setStartWithETAOnly:(char)arg1 ;
-(char)startWithETAOnly;
-(id)initWithDestinationWaypoint:(id)arg1 routeHandle:(id)arg2 ;
-(void)_endWithError:(id)arg1 ;
-(void)_presentErrorIfPossible:(id)arg1 ;
-(char)_shouldPresentError:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)setDelegate:(id<StarkNavigationStartupDelegate>)arg1 ;
-(id<StarkNavigationStartupDelegate>)delegate;
-(void)start;
@end

