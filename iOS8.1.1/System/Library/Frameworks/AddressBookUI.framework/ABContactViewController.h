/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:41 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UITableViewController.h>
#import <AddressBookUI/ABPropertyActionDelegate.h>
#import <AddressBookUI/ABPropertyCellDelegate.h>
#import <AddressBookUI/ABContactGroupPickerDelegate.h>
#import <AddressBookUI/ABPresenterDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <AddressBookUI/ABContactAddLinkedCardActionDelegate.h>
#import <AddressBookUI/ABContactHeaderViewDelegate.h>
#import <AddressBookUI/ABContactViewControllerDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>
#import <AddressBookUI/ABContactViewDataSource.h>
#import <AddressBookUI/ABContactViewDelegate.h>
#import <UIKit/UIViewControllerRestoration.h>

@protocol ABContactViewControllerDelegate, ABPresenterDelegate;
@class NSArray, CNContact, NSString, UIView, ABCardGroup, ABContactView, ABContactHeaderDisplayView, ABContactHeaderEditView, NSMutableArray, NSDictionary, NSMutableDictionary, NSMapTable, ABCardFaceTimeGroup, ABCardLinkedCardsGroup, ABPropertyAction, ABPropertyFaceTimeAction, ABPropertyLinkedCardsAction, ABContactAddLinkedCardAction, ABContactAction, ABContactAddFavoriteAction, ABContactToggleBlockCallerAction, ABContactAddNewFieldAction, ABContactCreateNewContactAction, ABContactAddToExistingContactAction, ABMedicalIDAction, ABSiriContactContextProvider, ABPropertyIDSRequest, HKHealthStore, ABContactHeaderView;

@interface ABContactViewController : UITableViewController <ABPropertyActionDelegate, ABPropertyCellDelegate, ABContactGroupPickerDelegate, ABPresenterDelegate, UIPopoverControllerDelegate, ABContactAddLinkedCardActionDelegate, ABContactHeaderViewDelegate, ABContactViewControllerDelegate, UIAdaptivePresentationControllerDelegate, ABContactViewDataSource, ABContactViewDelegate, UIViewControllerRestoration> {

	NSArray* _displayedProperties;
	BOOL _needsReload;
	BOOL _disablingRotation;
	int _animating;
	BOOL _isMailVIP;
	BOOL _allowsEditing;
	BOOL _alwaysEditing;
	BOOL _allowsActions;
	BOOL _allowsPropertyActions;
	BOOL _allowsCardActions;
	BOOL _allowsConferencing;
	BOOL _allowsSharing;
	BOOL _allowsAddToFavorites;
	BOOL _allowsSendMessage;
	BOOL _allowsContactBlocking;
	BOOL _allowsAddingToAddressBook;
	BOOL _shouldShowLinkedContacts;
	BOOL _allowsOnlyPhoneActions;
	BOOL _allowsOnlyFaceTimeActions;
	BOOL _allowsDeletion;
	BOOL _hideCardActions;
	CNContact* _contact;
	NSString* _alternateName;
	NSString* _message;
	NSString* _primaryProperty;
	UIView* _personHeaderView;
	ABCardGroup* _cardTopGroup;
	ABCardGroup* _cardBottomGroup;
	ABCardGroup* _cardFooterGroup;
	id<ABContactViewControllerDelegate> _contactDelegate;
	id<ABPresenterDelegate> _presentingDelegate;
	ABContactView* _displayContactView;
	ABContactView* _editingContactView;
	ABContactHeaderDisplayView* _displayHeaderView;
	ABContactHeaderEditView* _editingHeaderView;
	NSMutableArray* _mutableContacts;
	NSDictionary* _propertyGroups;
	NSMutableArray* _displayGroups;
	NSMutableArray* _editingGroups;
	NSArray* _nameEditingGroups;
	NSMutableDictionary* _groupsAfterGroup;
	NSMapTable* _cachedLabelWidths;
	ABCardGroup* _cardPrimaryPropertyActionsGroup;
	ABCardGroup* _cardActionsGroup;
	ABCardGroup* _cardMedicalIDGroup;
	ABCardGroup* _cardBlockContactGroup;
	ABCardFaceTimeGroup* _cardFaceTimeGroup;
	ABCardLinkedCardsGroup* _cardLinkedCardsGroup;
	ABPropertyAction* _sendMessageAction;
	ABPropertyFaceTimeAction* _faceTimeAction;
	ABPropertyFaceTimeAction* _faceTimeAudioAction;
	ABPropertyLinkedCardsAction* _linkedCardsAction;
	ABContactAddLinkedCardAction* _addLinkedCardAction;
	ABContactAction* _shareContactAction;
	ABContactAddFavoriteAction* _addFavoriteAction;
	ABContactToggleBlockCallerAction* _blockAction;
	ABContactAddNewFieldAction* _addNewFieldAction;
	ABContactCreateNewContactAction* _createNewContactAction;
	ABContactAddToExistingContactAction* _addToExistingContactAction;
	ABMedicalIDAction* _medicalIDAction;
	ABCardGroup* _cardEditingActionsGroup;
	ABCardGroup* _cardEditingDeleteContactGroup;
	ABContactAction* _deleteContactAction;
	ABSiriContactContextProvider* _siriContextProvider;
	NSMutableArray* _linkedContactsEdits;
	ABPropertyIDSRequest* _iMessageIDSRequest;
	ABPropertyIDSRequest* _faceTimeIDSRequest;
	NSDictionary* _userActivityUserInfo;
	HKHealthStore* _healthStore;

}

@property (nonatomic,readonly) CNContact * contact;                                                         //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) ABContactView * contactView; 
@property (nonatomic,readonly) ABContactHeaderView * contactHeaderView; 
@property (nonatomic,copy) NSArray * displayedProperties;                                                   //@synthesize displayedProperties=_displayedProperties - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing;                                                            //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) BOOL alwaysEditing;                                                            //@synthesize alwaysEditing=_alwaysEditing - In the implementation block
@property (assign,nonatomic) BOOL allowsActions;                                                            //@synthesize allowsActions=_allowsActions - In the implementation block
@property (assign,nonatomic) BOOL allowsPropertyActions;                                                    //@synthesize allowsPropertyActions=_allowsPropertyActions - In the implementation block
@property (assign,nonatomic) BOOL allowsCardActions;                                                        //@synthesize allowsCardActions=_allowsCardActions - In the implementation block
@property (assign,nonatomic) BOOL allowsConferencing;                                                       //@synthesize allowsConferencing=_allowsConferencing - In the implementation block
@property (assign,nonatomic) BOOL allowsSharing;                                                            //@synthesize allowsSharing=_allowsSharing - In the implementation block
@property (assign,nonatomic) BOOL allowsAddToFavorites;                                                     //@synthesize allowsAddToFavorites=_allowsAddToFavorites - In the implementation block
@property (assign,nonatomic) BOOL allowsSendMessage;                                                        //@synthesize allowsSendMessage=_allowsSendMessage - In the implementation block
@property (assign,nonatomic) BOOL allowsContactBlocking;                                                    //@synthesize allowsContactBlocking=_allowsContactBlocking - In the implementation block
@property (assign,nonatomic) BOOL allowsAddingToAddressBook;                                                //@synthesize allowsAddingToAddressBook=_allowsAddingToAddressBook - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLinkedContacts;                                                 //@synthesize shouldShowLinkedContacts=_shouldShowLinkedContacts - In the implementation block
@property (assign,nonatomic) BOOL allowsOnlyPhoneActions;                                                   //@synthesize allowsOnlyPhoneActions=_allowsOnlyPhoneActions - In the implementation block
@property (assign,nonatomic) BOOL allowsOnlyFaceTimeActions;                                                //@synthesize allowsOnlyFaceTimeActions=_allowsOnlyFaceTimeActions - In the implementation block
@property (assign,nonatomic) BOOL allowsDeletion;                                                           //@synthesize allowsDeletion=_allowsDeletion - In the implementation block
@property (assign,nonatomic) BOOL hideCardActions;                                                          //@synthesize hideCardActions=_hideCardActions - In the implementation block
@property (assign,nonatomic) BOOL isMailVIP;                                                                //@synthesize isMailVIP=_isMailVIP - In the implementation block
@property (nonatomic,retain) NSString * alternateName;                                                      //@synthesize alternateName=_alternateName - In the implementation block
@property (nonatomic,retain) NSString * message;                                                            //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSString * primaryProperty;                                                    //@synthesize primaryProperty=_primaryProperty - In the implementation block
@property (nonatomic,retain) UIView * personHeaderView;                                                     //@synthesize personHeaderView=_personHeaderView - In the implementation block
@property (nonatomic,retain) ABCardGroup * cardTopGroup;                                                    //@synthesize cardTopGroup=_cardTopGroup - In the implementation block
@property (nonatomic,retain) ABCardGroup * cardBottomGroup;                                                 //@synthesize cardBottomGroup=_cardBottomGroup - In the implementation block
@property (nonatomic,readonly) ABCardGroup * cardFooterGroup;                                               //@synthesize cardFooterGroup=_cardFooterGroup - In the implementation block
@property (assign,nonatomic) id<ABContactViewControllerDelegate> contactDelegate;                           //@synthesize contactDelegate=_contactDelegate - In the implementation block
@property (assign,nonatomic) id<ABPresenterDelegate> presentingDelegate;                                    //@synthesize presentingDelegate=_presentingDelegate - In the implementation block
@property (nonatomic,retain) ABContactView * displayContactView;                                            //@synthesize displayContactView=_displayContactView - In the implementation block
@property (nonatomic,retain) ABContactView * editingContactView;                                            //@synthesize editingContactView=_editingContactView - In the implementation block
@property (nonatomic,retain) ABContactHeaderDisplayView * displayHeaderView;                                //@synthesize displayHeaderView=_displayHeaderView - In the implementation block
@property (nonatomic,retain) ABContactHeaderEditView * editingHeaderView;                                   //@synthesize editingHeaderView=_editingHeaderView - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableContacts;                                              //@synthesize mutableContacts=_mutableContacts - In the implementation block
@property (nonatomic,retain) NSDictionary * propertyGroups;                                                 //@synthesize propertyGroups=_propertyGroups - In the implementation block
@property (nonatomic,retain) NSMutableArray * displayGroups;                                                //@synthesize displayGroups=_displayGroups - In the implementation block
@property (nonatomic,retain) NSMutableArray * editingGroups;                                                //@synthesize editingGroups=_editingGroups - In the implementation block
@property (nonatomic,retain) NSArray * nameEditingGroups;                                                   //@synthesize nameEditingGroups=_nameEditingGroups - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * groupsAfterGroup;                                        //@synthesize groupsAfterGroup=_groupsAfterGroup - In the implementation block
@property (nonatomic,retain) NSMapTable * cachedLabelWidths;                                                //@synthesize cachedLabelWidths=_cachedLabelWidths - In the implementation block
@property (nonatomic,retain) ABCardGroup * cardPrimaryPropertyActionsGroup;                                 //@synthesize cardPrimaryPropertyActionsGroup=_cardPrimaryPropertyActionsGroup - In the implementation block
@property (nonatomic,retain) ABCardGroup * cardActionsGroup;                                                //@synthesize cardActionsGroup=_cardActionsGroup - In the implementation block
@property (nonatomic,retain) ABCardGroup * cardMedicalIDGroup;                                              //@synthesize cardMedicalIDGroup=_cardMedicalIDGroup - In the implementation block
@property (nonatomic,retain) ABCardGroup * cardBlockContactGroup;                                           //@synthesize cardBlockContactGroup=_cardBlockContactGroup - In the implementation block
@property (nonatomic,retain) ABCardFaceTimeGroup * cardFaceTimeGroup;                                       //@synthesize cardFaceTimeGroup=_cardFaceTimeGroup - In the implementation block
@property (nonatomic,retain) ABCardLinkedCardsGroup * cardLinkedCardsGroup;                                 //@synthesize cardLinkedCardsGroup=_cardLinkedCardsGroup - In the implementation block
@property (nonatomic,retain) ABPropertyAction * sendMessageAction;                                          //@synthesize sendMessageAction=_sendMessageAction - In the implementation block
@property (nonatomic,retain) ABPropertyFaceTimeAction * faceTimeAction;                                     //@synthesize faceTimeAction=_faceTimeAction - In the implementation block
@property (nonatomic,retain) ABPropertyFaceTimeAction * faceTimeAudioAction;                                //@synthesize faceTimeAudioAction=_faceTimeAudioAction - In the implementation block
@property (nonatomic,retain) ABPropertyLinkedCardsAction * linkedCardsAction;                               //@synthesize linkedCardsAction=_linkedCardsAction - In the implementation block
@property (nonatomic,retain) ABContactAddLinkedCardAction * addLinkedCardAction;                            //@synthesize addLinkedCardAction=_addLinkedCardAction - In the implementation block
@property (nonatomic,retain) ABContactAction * shareContactAction;                                          //@synthesize shareContactAction=_shareContactAction - In the implementation block
@property (nonatomic,retain) ABContactAddFavoriteAction * addFavoriteAction;                                //@synthesize addFavoriteAction=_addFavoriteAction - In the implementation block
@property (nonatomic,retain) ABContactToggleBlockCallerAction * blockAction;                                //@synthesize blockAction=_blockAction - In the implementation block
@property (nonatomic,retain) ABContactAddNewFieldAction * addNewFieldAction;                                //@synthesize addNewFieldAction=_addNewFieldAction - In the implementation block
@property (nonatomic,retain) ABContactCreateNewContactAction * createNewContactAction;                      //@synthesize createNewContactAction=_createNewContactAction - In the implementation block
@property (nonatomic,retain) ABContactAddToExistingContactAction * addToExistingContactAction;              //@synthesize addToExistingContactAction=_addToExistingContactAction - In the implementation block
@property (nonatomic,retain) ABMedicalIDAction * medicalIDAction;                                           //@synthesize medicalIDAction=_medicalIDAction - In the implementation block
@property (nonatomic,retain) ABCardGroup * cardEditingActionsGroup;                                         //@synthesize cardEditingActionsGroup=_cardEditingActionsGroup - In the implementation block
@property (nonatomic,retain) ABCardGroup * cardEditingDeleteContactGroup;                                   //@synthesize cardEditingDeleteContactGroup=_cardEditingDeleteContactGroup - In the implementation block
@property (nonatomic,retain) ABContactAction * deleteContactAction;                                         //@synthesize deleteContactAction=_deleteContactAction - In the implementation block
@property (nonatomic,retain) ABSiriContactContextProvider * siriContextProvider;                            //@synthesize siriContextProvider=_siriContextProvider - In the implementation block
@property (nonatomic,retain) NSMutableArray * linkedContactsEdits;                                          //@synthesize linkedContactsEdits=_linkedContactsEdits - In the implementation block
@property (nonatomic,retain) ABPropertyIDSRequest * iMessageIDSRequest;                                     //@synthesize iMessageIDSRequest=_iMessageIDSRequest - In the implementation block
@property (nonatomic,retain) ABPropertyIDSRequest * faceTimeIDSRequest;                                     //@synthesize faceTimeIDSRequest=_faceTimeIDSRequest - In the implementation block
@property (nonatomic,retain) NSDictionary * userActivityUserInfo;                                           //@synthesize userActivityUserInfo=_userActivityUserInfo - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                                   //@synthesize healthStore=_healthStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL isPresentingModalViewController; 
+(id)boolStateRestorationProperties;
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(void)applyStyleProvider:(id)arg1 ;
-(NSString *)alternateName;
-(id)initWithContact:(id)arg1 ;
-(CNContact *)contact;
-(void)reloadDataPreservingChanges:(BOOL)arg1 ;
-(BOOL)allowsOnlyPhoneActions;
-(void)setAllowsOnlyPhoneActions:(BOOL)arg1 ;
-(BOOL)allowsOnlyFaceTimeActions;
-(void)setAllowsOnlyFaceTimeActions:(BOOL)arg1 ;
-(void)actionWasCanceled:(id)arg1 ;
-(void)action:(id)arg1 presentViewController:(id)arg2 sender:(id)arg3 ;
-(void)actionDidUpdate:(id)arg1 ;
-(void)action:(id)arg1 dismissViewController:(id)arg2 sender:(id)arg3 ;
-(void)setAllowsConferencing:(BOOL)arg1 ;
-(BOOL)shouldAllowSelectingContact:(id)arg1 ;
-(void)setMergeContact:(id)arg1 ;
-(ABContactView *)contactView;
-(id)alreadyPickedGroups;
-(void)contactGroupPickerDidFinish:(id)arg1 withGroup:(id)arg2 ;
-(void)contactGroupPickerDidCancel:(id)arg1 ;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)reloadDataIfNeeded;
-(void)updateWithNewContact:(id)arg1 ;
-(void)headerHeightDidChange;
-(UIView *)personHeaderView;
-(void)setPersonHeaderView:(UIView *)arg1 ;
-(void)setEditingGroups:(NSMutableArray *)arg1 ;
-(void)headerPhotoDidUpdate;
-(NSMutableArray *)editingGroups;
-(void)sender:(id)arg1 presentViewController:(id)arg2 ;
-(void)sender:(id)arg1 dismissViewController:(id)arg2 ;
-(void)setGroupsAfterGroup:(NSMutableDictionary *)arg1 ;
-(id)_loadMutableLinkedContactsForUnifiedContact:(id)arg1 ;
-(id)_loadPropertyGroups;
-(void)setSiriContextProvider:(ABSiriContactContextProvider *)arg1 ;
-(void)setNeedsReloadLazy;
-(void)localeDidChange:(id)arg1 ;
-(BOOL)allowsAddingToAddressBook;
-(void)updateEditNavigationItemsAnimated:(BOOL)arg1 ;
-(ABPropertyIDSRequest *)iMessageIDSRequest;
-(ABPropertyIDSRequest *)faceTimeIDSRequest;
-(ABContactView *)editingContactView;
-(ABContactView *)displayContactView;
-(ABContactHeaderEditView *)editingHeaderView;
-(ABContactHeaderDisplayView *)displayHeaderView;
-(id<ABPresenterDelegate>)presentingDelegate;
-(NSArray *)nameEditingGroups;
-(id)_loadNameEditingGroups;
-(void)setNameEditingGroups:(NSArray *)arg1 ;
-(id)cardGroupForProperty:(id)arg1 ;
-(long long)indexOfGroup:(id)arg1 ;
-(ABCardGroup *)cardActionsGroup;
-(void)_updateLabelWidths;
-(void)prepareCell:(id)arg1 ;
-(void)_updateLabelWidthForCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_reloadFaceTimeGroup;
-(void)_reloadLinkedCardsGroup;
-(void)_reloadPropertyGroupsPreservingChanges:(BOOL)arg1 ;
-(void)_reloadMedicalIDGroup;
-(void)setupActions;
-(id)_loadDisplayGroups;
-(void)setDisplayGroups:(NSMutableArray *)arg1 ;
-(id)_loadEditingGroups;
-(void)_updateAvailableTransports;
-(ABContactHeaderView *)contactHeaderView;
-(ABCardFaceTimeGroup *)cardFaceTimeGroup;
-(void)_addFaceTimeGroupAnimated:(BOOL)arg1 ;
-(void)_updateUserActivity;
-(NSMutableArray *)mutableContacts;
-(NSDictionary *)propertyGroups;
-(id)_currentGroups;
-(NSMutableDictionary *)groupsAfterGroup;
-(void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 inGroup:(id)arg4 destructive:(BOOL)arg5 ;
-(id)navigationItemController;
-(void)editCancel:(id)arg1 ;
-(void)updateDoneButton;
-(void)toggleEditing:(id)arg1 ;
-(BOOL)_modelIsEmpty;
-(BOOL)_modelHasChanges;
-(NSMutableArray *)displayGroups;
-(SCD_Struct_AB4)editingTransition;
-(BOOL)alwaysEditing;
-(NSMutableArray *)linkedContactsEdits;
-(void)setMutableContacts:(NSMutableArray *)arg1 ;
-(void)setLinkedContactsEdits:(NSMutableArray *)arg1 ;
-(void)saveModelChangesToContact;
-(void)_linkEditableContactForEditedReadOnlyContact;
-(void)_saveChangesForGroups:(id)arg1 ;
-(void)saveLinkedContactChanges;
-(void)_scrollContactView:(id)arg1 toVisibleGroupInContactView:(id)arg2 ;
-(ABSiriContactContextProvider *)siriContextProvider;
-(id)_cardGroupAtIndex:(long long)arg1 ;
-(long long)_numberOfItemsInCustomGroup:(id)arg1 ;
-(BOOL)_indexPathIsActionItem:(id)arg1 ;
-(id)_cellForIndexPath:(id)arg1 ;
-(id)contactView:(id)arg1 cellForItemAtIndex:(long long)arg2 inGroup:(id)arg3 ;
-(void)removeLinkedContact:(id)arg1 ;
-(void)removeEditingItem:(id)arg1 atIndexPath:(id)arg2 ;
-(ABContactAddLinkedCardAction *)addLinkedCardAction;
-(void)addEditingItemAtIndexPath:(id)arg1 ;
-(id)_itemAtIndexPath:(id)arg1 ;
-(ABCardGroup *)cardEditingDeleteContactGroup;
-(BOOL)allowsPropertyActions;
-(void)contactView:(id)arg1 didSelectItemAtIndex:(long long)arg2 inGroup:(id)arg3 ;
-(long long)_modalPresentationStyleForViewController:(id)arg1 ;
-(void)setAllowsAddToFavorites:(BOOL)arg1 ;
-(void)setShouldShowLinkedContacts:(BOOL)arg1 ;
-(BOOL)allowsActions;
-(void)_updateAvailableTransportsForItems:(id)arg1 ;
-(ABContactAddFavoriteAction *)addFavoriteAction;
-(void)reloadCardGroup:(id)arg1 ;
-(ABContactAction *)deleteContactAction;
-(void)contactViewController:(id)arg1 didDeleteContact:(id)arg2 ;
-(ABContactCreateNewContactAction *)createNewContactAction;
-(void)createNewContact:(id)arg1 ;
-(ABContactAddToExistingContactAction *)addToExistingContactAction;
-(void)addToExistingContact:(id)arg1 ;
-(void)addLinkedContact:(id)arg1 ;
-(ABContactToggleBlockCallerAction *)blockAction;
-(void)_setupContactBlockingActionsWithUpdate:(BOOL)arg1 ;
-(ABMedicalIDAction *)medicalIDAction;
-(void)_validateGroup:(id)arg1 ;
-(ABPropertyAction *)sendMessageAction;
-(ABPropertyFaceTimeAction *)faceTimeAction;
-(ABPropertyLinkedCardsAction *)linkedCardsAction;
-(id)_dateForProperty:(id)arg1 ;
-(void)_addedGroupWithName:(id)arg1 ;
-(void)setPresentingDelegate:(id<ABPresenterDelegate>)arg1 ;
-(BOOL)isMailVIP;
-(void)_updateLabelWidthsForItem:(id)arg1 ;
-(NSMapTable *)cachedLabelWidths;
-(void)setCachedLabelWidths:(NSMapTable *)arg1 ;
-(void)_updateLabelWidthsForGroup:(id)arg1 ;
-(long long)contactView:(id)arg1 numberOfItemsInGroup:(id)arg2 ;
-(void)_updateItemsInGroup:(id)arg1 ;
-(void)updateContactsViewWithBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(ABCardLinkedCardsGroup *)cardLinkedCardsGroup;
-(void)_setupEditingCardActions;
-(void)_setupCardActions;
-(void)_setupAddToAddressBookActions;
-(void)_setupPrimaryPropertyActions;
-(id)_sendMessageActionAllowingEmailIDs:(BOOL)arg1 ;
-(void)setSendMessageAction:(ABPropertyAction *)arg1 ;
-(BOOL)allowsSharing;
-(id)_shareContactAction;
-(void)setShareContactAction:(ABContactAction *)arg1 ;
-(BOOL)allowsAddToFavorites;
-(id)_addFavoriteActionWithConferencing:(BOOL)arg1 telephony:(BOOL)arg2 ;
-(void)setAddFavoriteAction:(ABContactAddFavoriteAction *)arg1 ;
-(BOOL)allowsCardActions;
-(BOOL)allowsSendMessage;
-(NSString *)primaryProperty;
-(ABContactAction *)shareContactAction;
-(BOOL)allowsContactBlocking;
-(void)setBlockAction:(ABContactToggleBlockCallerAction *)arg1 ;
-(void)blockListDidChange:(id)arg1 ;
-(ABCardGroup *)cardBlockContactGroup;
-(id)_addCreateNewContactAction;
-(void)setCreateNewContactAction:(ABContactCreateNewContactAction *)arg1 ;
-(id)_addToExistingContactAction;
-(void)setAddToExistingContactAction:(ABContactAddToExistingContactAction *)arg1 ;
-(id)_addNewFieldAction;
-(void)setAddNewFieldAction:(ABContactAddNewFieldAction *)arg1 ;
-(ABCardGroup *)cardEditingActionsGroup;
-(ABContactAddNewFieldAction *)addNewFieldAction;
-(void)setDeleteContactAction:(ABContactAction *)arg1 ;
-(ABCardGroup *)cardPrimaryPropertyActionsGroup;
-(id)_faceTimeAction;
-(void)setFaceTimeAction:(ABPropertyFaceTimeAction *)arg1 ;
-(ABPropertyFaceTimeAction *)faceTimeAudioAction;
-(id)_faceTimeAudioAction;
-(void)setFaceTimeAudioAction:(ABPropertyFaceTimeAction *)arg1 ;
-(id)_allDisplayPropertyItemsFromGroups:(id)arg1 ;
-(void)_updateIMessageTransportButtonsForItems:(id)arg1 ;
-(void)_updatePhoneTransportButtonsForItems:(id)arg1 ;
-(void)_updateEmailTransportButtonsForItems:(id)arg1 ;
-(void)setIMessageIDSRequest:(ABPropertyIDSRequest *)arg1 ;
-(BOOL)allowsConferencing;
-(void)setCardFaceTimeGroup:(ABCardFaceTimeGroup *)arg1 ;
-(void)setFaceTimeIDSRequest:(ABPropertyIDSRequest *)arg1 ;
-(void)addCardGroup:(id)arg1 afterGroup:(id)arg2 ;
-(ABCardGroup *)cardMedicalIDGroup;
-(void)setCardMedicalIDGroup:(ABCardGroup *)arg1 ;
-(void)setMedicalIDAction:(ABMedicalIDAction *)arg1 ;
-(BOOL)shouldShowLinkedContacts;
-(id)_linkedCardsAction;
-(id)_addLinkedCardAction;
-(void)setCardLinkedCardsGroup:(ABCardLinkedCardsGroup *)arg1 ;
-(ABCardGroup *)cardTopGroup;
-(id)_addGroupsInArray:(id)arg1 afterGroup:(id)arg2 ;
-(NSArray *)displayedProperties;
-(ABCardGroup *)cardBottomGroup;
-(BOOL)hideCardActions;
-(ABCardGroup *)cardFooterGroup;
-(NSDictionary *)userActivityUserInfo;
-(void)setUserActivityUserInfo:(NSDictionary *)arg1 ;
-(id)action:(id)arg1 cellForPropertyItem:(id)arg2 sender:(id)arg3 ;
-(void)action:(id)arg1 prepareChildContactViewController:(id)arg2 sender:(id)arg3 ;
-(void)action:(id)arg1 pushViewController:(id)arg2 sender:(id)arg3 ;
-(void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewLabel:(id)arg3 ;
-(void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewValue:(id)arg3 ;
-(void)propertyCell:(id)arg1 performActionForItem:(id)arg2 withTransportType:(long long)arg3 ;
-(void)propertyCellDidChangeLayout:(id)arg1 ;
-(id)defaultValueForPropertyCell:(id)arg1 ;
-(BOOL)isPresentingModalViewController;
-(long long)numberOfGroupsInContactView:(id)arg1 ;
-(double)contactView:(id)arg1 heightForItemAtIndex:(long long)arg2 inGroup:(id)arg3 ;
-(void)setIsMailVIP:(BOOL)arg1 ;
-(id)cardActions;
-(void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 inGroup:(id)arg4 ;
-(void)removeActionWithTarget:(id)arg1 selector:(SEL)arg2 inGroup:(id)arg3 ;
-(id)indexPathOfDisplayedPropertyItem:(id)arg1 ;
-(SCD_Struct_AB4)transitionToEditing:(BOOL)arg1 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)setAlwaysEditing:(BOOL)arg1 ;
-(void)setAllowsPropertyActions:(BOOL)arg1 ;
-(void)setAllowsCardActions:(BOOL)arg1 ;
-(void)setAllowsSendMessage:(BOOL)arg1 ;
-(void)setAllowsDeletion:(BOOL)arg1 ;
-(void)setHideCardActions:(BOOL)arg1 ;
-(void)setCardTopGroup:(ABCardGroup *)arg1 ;
-(void)setCardBottomGroup:(ABCardGroup *)arg1 ;
-(void)setDisplayContactView:(ABContactView *)arg1 ;
-(void)setEditingContactView:(ABContactView *)arg1 ;
-(void)setDisplayHeaderView:(ABContactHeaderDisplayView *)arg1 ;
-(void)setEditingHeaderView:(ABContactHeaderEditView *)arg1 ;
-(void)setPropertyGroups:(NSDictionary *)arg1 ;
-(void)setCardPrimaryPropertyActionsGroup:(ABCardGroup *)arg1 ;
-(void)setCardActionsGroup:(ABCardGroup *)arg1 ;
-(void)setCardBlockContactGroup:(ABCardGroup *)arg1 ;
-(void)setLinkedCardsAction:(ABPropertyLinkedCardsAction *)arg1 ;
-(void)setAddLinkedCardAction:(ABContactAddLinkedCardAction *)arg1 ;
-(void)setCardEditingActionsGroup:(ABCardGroup *)arg1 ;
-(void)setCardEditingDeleteContactGroup:(ABCardGroup *)arg1 ;
-(void)setAlternateName:(NSString *)arg1 ;
-(void)saveChanges;
-(BOOL)allowsDeletion;
-(void)setDisplayedProperties:(NSArray *)arg1 ;
-(void)setAllowsActions:(BOOL)arg1 ;
-(void)setAllowsAddingToAddressBook:(BOOL)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)updateUserActivityState:(id)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)heightForHeaderInTableView:(id)arg1 ;
-(id)viewForHeaderInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(void)loadView;
-(NSString *)message;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)actionDidFinish:(id)arg1 ;
-(id)tableView;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(id<ABContactViewControllerDelegate>)contactDelegate;
-(void)setContactDelegate:(id<ABContactViewControllerDelegate>)arg1 ;
-(void)setNeedsReload;
-(void)setAllowsContactBlocking:(BOOL)arg1 ;
-(void)setAllowsSharing:(BOOL)arg1 ;
-(BOOL)needsReload;
-(void)setPrimaryProperty:(NSString *)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
@end
