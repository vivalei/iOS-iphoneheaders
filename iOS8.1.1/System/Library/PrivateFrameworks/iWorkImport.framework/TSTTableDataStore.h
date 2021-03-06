/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:39 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPContainedObject.h>

@class TSTTileIDKeyDict, TSTTableHeaderStorage, TSPLazyReference, TSTCustomFormatList, TSUIntToIntDictionary, TSTMergeRegionMap;

@interface TSTTableDataStore : TSPContainedObject {

	TSTTableRBTreeNode_s* mColumnTileIndex;
	TSTTableRBTreeNode_s* mRowTileIndex;
	TSTTileIDKeyDict* mTileStorage;
	TSTTableHeaderStorage* mRowHeaderStorage;
	TSPLazyReference* mColumnHeaderStorageReference;
	TSPLazyReference* mConditionalStyleSetTableReference;
	TSPLazyReference* mStringTableReference;
	TSPLazyReference* mStyleTableReference;
	TSPLazyReference* mFormulaTableReference;
	TSPLazyReference* mFormulaErrorTableReference;
	TSPLazyReference* mRichTextPayloadTableReference;
	TSPLazyReference* mFormatTableReference;
	TSPLazyReference* mMultipleChoiceListFormatTableReference;
	TSPLazyReference* mCommentStorageTableReference;
	TSPLazyReference* mImportWarningSetTableReference;
	TSTCustomFormatList* mPasteboardCustomFormatList;
	TSUIntToIntDictionary* mPasteboardCustomFormatMap;
	unsigned short mNextRowStripID;
	unsigned short mNextColumnStripID;
	TSTMergeRegionMap* mMergedCellRanges;
	unsigned mCellCount;
	BOOL mCellCountValid;
	unsigned mStorageVersion;

}

@property (nonatomic,readonly) BOOL hasPasteboardCustomFormats; 
-(void)saveToArchive:(DataStore*)arg1 archiver:(id)arg2 ;
-(BOOL)hasPasteboardCustomFormats;
-(void)copyPasteboardCustomFormatsFromDataStore:(id)arg1 ;
-(id)initWithArchive:(const DataStore*)arg1 unarchiver:(id)arg2 owner:(id)arg3 ;
-(BOOL)needToUpgradeCellStorage;
-(void)upgradeDataStoreCellStorage;
-(void)setStorageParentToInfo:(id)arg1 ;
-(unsigned)copyPasteboardCustomFormat:(unsigned)arg1 toDocument:(id)arg2 clearingPasteboardFormat:(BOOL)arg3 ;
-(void)clearPasteboardCustomFormatList;
-(id)p_pasteboardCustomFormatList;
-(id)p_pasteboardCustomFormatMap;
-(void)p_updateTileStorageToCurrentVersion;
-(void)debugDump;
-(id)initWithOwner:(id)arg1 ;
-(void)dealloc;
-(void)validate;
@end

