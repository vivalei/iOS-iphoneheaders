/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
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
	unsigned long mCellCount;
	char mCellCountValid;
	unsigned long mStorageVersion;

}

@property (nonatomic,readonly) char hasPasteboardCustomFormats; 
-(void)saveToArchive:(DataStore*)arg1 archiver:(id)arg2 ;
-(char)hasPasteboardCustomFormats;
-(void)copyPasteboardCustomFormatsFromDataStore:(id)arg1 ;
-(id)initWithArchive:(const DataStore*)arg1 unarchiver:(id)arg2 owner:(id)arg3 ;
-(char)needToUpgradeCellStorage;
-(void)upgradeDataStoreCellStorage;
-(void)setStorageParentToInfo:(id)arg1 ;
-(unsigned)copyPasteboardCustomFormat:(unsigned)arg1 toDocument:(id)arg2 clearingPasteboardFormat:(char)arg3 ;
-(void)clearPasteboardCustomFormatList;
-(id)p_pasteboardCustomFormatList;
-(id)p_pasteboardCustomFormatMap;
-(void)p_updateTileStorageToCurrentVersion;
-(void)debugDump;
-(id)initWithOwner:(id)arg1 ;
-(void)dealloc;
-(void)validate;
@end
