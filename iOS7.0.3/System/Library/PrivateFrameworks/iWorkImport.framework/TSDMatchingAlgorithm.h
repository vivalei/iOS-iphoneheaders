/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface TSDMatchingAlgorithm : NSObject {

	int* mCostMatrix;
	char* mMaskMatrix;
	BOOL* mIsStarInColumn;
	BOOL* mIsStarInRow;
	BOOL* mIsColCovered;
	BOOL* mIsRowCovered;
	id* mObjectMapping;
	int mMatrixDimension;
	int mZ0Row;
	int mZ0Col;
	NSMutableArray* mResults;

}
+(id)bestMatchesFromArray:(id)arg1 ;
-(BOOL)p_step4FindAZeroAndReturnRow:(int*)arg1 column:(int*)arg2 ;
-(int)p_step4IndexOfStarredZeroInRow:(int)arg1 ;
-(void)p_allocateMatrices;
-(int)p_doStep1;
-(int)p_doStep2;
-(int)p_doStep3;
-(int)p_doStep4;
-(int)p_doStep5;
-(int)p_doStep6;
-(void)p_deallocateMatrices;
-(id)p_bestMatchesFromArray:(id)arg1 ;
@end

