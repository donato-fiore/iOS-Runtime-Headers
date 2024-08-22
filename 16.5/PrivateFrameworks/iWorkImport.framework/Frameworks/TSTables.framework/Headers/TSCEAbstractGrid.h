// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCEABSTRACTGRID_H
#define TSCEABSTRACTGRID_H


#import <Foundation/Foundation.h>


@interface TSCEAbstractGrid : NSObject



-(?)flattenedGrid;
-(?)flattenedGridNoThrow;
-(?)formatAtIndexaccessContext;
-(?)preferredFormatOptions;
-(?)subGridValueAtGridCoord:(?)arg0 width:(?)arg1 heightaccessContext;
-(?)valueAtIndexNoThrowaccessContext;
-(?)valueAtIndexaccessContext;
-(BOOL)boolean:(id)arg0 argIndex:(int)arg1 evaluationContext:(*void)arg2 ;
-(BOOL)containsError:(int)arg0 evaluationContext:(*void)arg1 ;
-(NSUInteger)count;
-(char)deepType:(*void)arg0 ;
-(char)gridKind;
-(char)nativeType;
-(id)date:(id)arg0 argIndex:(int)arg1 evaluationContext:(*void)arg2 ;
-(id)error;
-(id)init;
-(id)rawString:(id)arg0 argIndex:(int)arg1 locale:(id)arg2 ;
-(id)string:(id)arg0 argIndex:(int)arg1 locale:(id)arg2 ;
-(struct TSCEASTNodeArray *)newCorrespondingAST:(id)arg0 argIndex:(int)arg1 bakeReferences:(BOOL)arg2 evaluationContext:(*void)arg3 ;
-(struct TSCEGridDimensions )dimensions;
-(struct TSCENumberValue )number:(id)arg0 argIndex:(int)arg1 evaluationContext:(*void)arg2 ;
-(struct TSCEReferenceValue )reference:(id)arg0 argIndex:(int)arg1 evaluationContext:(*void)arg2 ;
-(struct TSCEValue )value;
-(struct TSCEValue )valueAtGridCoord:(struct TSCEGridCoord *)arg0 accessContext:(struct TSCEGridAccessContext *)arg1 ;


@end


#endif