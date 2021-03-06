/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:38:33 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SKUITableViewSectionDelegate;
@interface SKUITableViewSection : NSObject {

	id<SKUITableViewSectionDelegate> _delegate;
	char _hidesHeaderView;
	int _sectionIndex;

}

@property (assign,nonatomic,__weak) id<SKUITableViewSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char hidesHeaderView;                                          //@synthesize hidesHeaderView=_hidesHeaderView - In the implementation block
@property (assign,nonatomic) int sectionIndex;                                              //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (nonatomic,readonly) int numberOfRowsInSection; 
-(void)setDelegate:(id<SKUITableViewSectionDelegate>)arg1 ;
-(id<SKUITableViewSectionDelegate>)delegate;
-(int)sectionIndex;
-(void)setSectionIndex:(int)arg1 ;
-(float)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(int)numberOfRowsInSection;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3 ;
-(id)headerViewForTableView:(id)arg1 ;
-(id)footerViewForTableView:(id)arg1 ;
-(char)hidesHeaderView;
-(void)setHidesHeaderView:(char)arg1 ;
@end

