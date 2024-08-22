// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCETRACKEDREFERENCETSPOBJECTDEPRECATED_H
#define TSCETRACKEDREFERENCETSPOBJECTDEPRECATED_H

@class TSPObject;



@interface TSCETrackedReferenceTSPObjectDeprecated : TSPObject {
    *TSCEASTNodeArray mAST;
    ? mFormulaID;
}




-(BOOL)validatedLoadFromUnarchiver:(id)arg0 ;
-(struct ? )formulaID;
-(struct TSCEASTNodeArray *)ast;
-(void)dealloc;
-(void)encodeToArchive:(*void)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif