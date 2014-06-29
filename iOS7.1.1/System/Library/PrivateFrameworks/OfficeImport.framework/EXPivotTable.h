/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXPivotTable : NSObject
+(void)readLocationFrom:(xmlNode*)arg1 toPivotTable:(id)arg2 ;
+(void)readStyleInfoFrom:(xmlNode*)arg1 toPivotTable:(id)arg2 ;
+(void)readPivotFieldsFrom:(xmlNode*)arg1 toCollection:(id)arg2 ;
+(void)readFieldsFrom:(xmlNode*)arg1 toCollection:(id)arg2 ;
+(void)readItemsFrom:(xmlNode*)arg1 toCollection:(id)arg2 ;
+(void)readPageFieldsFrom:(xmlNode*)arg1 toCollection:(id)arg2 ;
+(void)readDataFieldsFrom:(xmlNode*)arg1 toCollection:(id)arg2 ;
+(void)readConditionalFormatsFrom:(xmlNode*)arg1 toCollection:(id)arg2 ;
+(void)readPivotAreasFrom:(xmlNode*)arg1 toCollection:(id)arg2 ;
+(int)edPivotItemTypeFrom:(id)arg1 ;
+(int)edPivotFieldAxisFrom:(id)arg1 ;
+(void)readFieldItemsFrom:(xmlNode*)arg1 toCollection:(id)arg2 ;
+(int)edPivotDatFieldFormatFrom:(id)arg1 ;
+(int)edPivotConditionalFormatTypeFrom:(id)arg1 ;
+(int)edPivotConditionalFormatScopeFrom:(id)arg1 ;
+(int)edPivotAreaTypeFrom:(id)arg1 ;
+(void)readPivotAreaReferencesFrom:(xmlNode*)arg1 toCollection:(id)arg2 ;
+(id)edPivotTableFromXmlPivotTableElement:(xmlNode*)arg1 state:(id)arg2 ;
@end
