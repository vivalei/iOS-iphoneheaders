/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/UIPlugins/Notes.siriUIBundle/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Notes/Notes-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>
#import <Notes/NotesAssistantViewCell.h>

@class UILabel;

@interface NotesAssistantNotesListViewCell : SiriUIContentCollectionViewCell <NotesAssistantViewCell> {

	UILabel* _title;
	UILabel* _date;

}
+(BOOL)requiresConstraintBasedLayout;
+(id)reuseIdentifier;
-(void)setNote:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)prepareForReuse;
@end
