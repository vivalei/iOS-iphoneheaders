/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:55 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBFolderViewDelegate.h>

@class SBIconViewMap, SBFolderView;

@interface SBHomeScreenPreviewView : UIView <SBFolderViewDelegate> {

	SBIconViewMap* _viewMap;
	SBFolderView* _folderContent;

}
+(id)preview;
+(void)cleanupPreview;
-(void)folderView:(id)arg1 currentPageIndexDidChange:(int)arg2 ;
-(id)initWithFrame:(CGRect)arg1 iconController:(id)arg2 ;
-(Class)iconListViewClassForFolderView:(id)arg1 ;
-(void)folderViewWillBeginScrolling:(id)arg1 ;
-(void)folderViewDidEndScrolling:(id)arg1 ;
-(void)folderViewShouldClose:(id)arg1 ;
-(void)folderViewShouldBeginEditing:(id)arg1 ;
-(void)dealloc;
@end
