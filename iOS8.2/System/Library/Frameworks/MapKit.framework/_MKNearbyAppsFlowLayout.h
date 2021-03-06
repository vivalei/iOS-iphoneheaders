/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:36 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@interface _MKNearbyAppsFlowLayout : UICollectionViewFlowLayout {

	char _snapsToItemBoundaries;
	char _snapsToItemCenters;

}

@property (assign,nonatomic) char snapsToItemBoundaries;              //@synthesize snapsToItemBoundaries=_snapsToItemBoundaries - In the implementation block
@property (assign,nonatomic) char snapsToItemCenters;                 //@synthesize snapsToItemCenters=_snapsToItemCenters - In the implementation block
+(float)snapToBoundariesDecelerationRate;
-(id)init;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(void)setSnapsToItemBoundaries:(char)arg1 ;
-(char)snapsToItemBoundaries;
-(char)snapsToItemCenters;
-(void)setSnapsToItemCenters:(char)arg1 ;
@end

