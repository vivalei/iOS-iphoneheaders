/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:50 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class CKShareID, NSMutableDictionary, NSMutableArray, NSArray;

@interface CKLikeItemsOperation : CKOperation {

	CKShareID* _shareID;
	/*^block*/id _likeItemsCompletionBlock;
	NSMutableDictionary* _itemsToLikeByID;
	NSMutableDictionary* _itemsToUnlikeByID;
	NSMutableArray* _likedItems;
	NSMutableArray* _unlikedItems;
	NSMutableDictionary* _errorsByItemID;

}

@property (nonatomic,copy) NSArray * itemsToLike; 
@property (nonatomic,copy) NSArray * itemsToUnlike; 
@property (nonatomic,copy) CKShareID * shareID;                                    //@synthesize shareID=_shareID - In the implementation block
@property (nonatomic,copy) id likeItemsCompletionBlock;                            //@synthesize likeItemsCompletionBlock=_likeItemsCompletionBlock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * itemsToLikeByID;                //@synthesize itemsToLikeByID=_itemsToLikeByID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * itemsToUnlikeByID;              //@synthesize itemsToUnlikeByID=_itemsToUnlikeByID - In the implementation block
@property (nonatomic,retain) NSMutableArray * likedItems;                          //@synthesize likedItems=_likedItems - In the implementation block
@property (nonatomic,retain) NSMutableArray * unlikedItems;                        //@synthesize unlikedItems=_unlikedItems - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * errorsByItemID;                 //@synthesize errorsByItemID=_errorsByItemID - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSMutableDictionary *)errorsByItemID;
-(void)setErrorsByItemID:(NSMutableDictionary *)arg1 ;
-(id)initWithItemsToLike:(id)arg1 itemsToUnlike:(id)arg2 inShareWithID:(id)arg3 ;
-(void)setLikeItemsCompletionBlock:(id)arg1 ;
-(void)setItemsToLike:(NSArray *)arg1 ;
-(void)setItemsToUnlike:(NSArray *)arg1 ;
-(NSMutableDictionary *)itemsToLikeByID;
-(void)setItemsToLikeByID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)itemsToUnlikeByID;
-(void)setItemsToUnlikeByID:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)likedItems;
-(void)setLikedItems:(NSMutableArray *)arg1 ;
-(NSMutableArray *)unlikedItems;
-(void)setUnlikedItems:(NSMutableArray *)arg1 ;
-(id)likeItemsCompletionBlock;
-(NSArray *)itemsToLike;
-(NSArray *)itemsToUnlike;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(CKShareID *)shareID;
-(void)setShareID:(CKShareID *)arg1 ;
@end

