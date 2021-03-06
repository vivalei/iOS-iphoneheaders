/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Symbolication/VMULoadCommand.h>

@interface VMUDySymTabLoadCommand : VMULoadCommand {

	unsigned _ilocalsym;
	unsigned _nlocalsym;
	unsigned _iextdefsym;
	unsigned _nextdefsym;
	unsigned _iundefsym;
	unsigned _nundefsym;
	unsigned _tocoff;
	unsigned _ntoc;
	unsigned _modtaboff;
	unsigned _nmodtab;
	unsigned _extrefsymoff;
	unsigned _nextrefsyms;
	unsigned _indirectsymoff;
	unsigned _nindirectsyms;
	unsigned _extreloff;
	unsigned _nextrel;
	unsigned _locreloff;
	unsigned _nlocrel;

}
-(id)initWithMemory:(id)arg1 ;
-(bool)isDySymTab;
-(unsigned)indirectsymoff;
-(unsigned)nindirectsyms;
@end

