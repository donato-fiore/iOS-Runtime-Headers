// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TYPISTPATHUTILITIES_H
#define TYPISTPATHUTILITIES_H


#import <Foundation/Foundation.h>


@interface TypistPathUtilities : NSObject



+(BOOL)_validatePoints:(struct CGPoint )arg0 To:(struct CGPoint )arg1 ;
+(BOOL)isKoreanConsonantVariant:(unsigned short)arg0 ;
+(CGFloat)_dotProduct:(struct CGPoint )arg0 and:(struct CGPoint )arg1 ;
+(NSUInteger)_queryDatabase:(struct sqlite3 *)arg0 withSql:(id)arg1 forRegion:(id)arg2 ;
+(id)_connectPath:(id)arg0 forCharacters:(id)arg1 withRegion:(id)arg2 ;
+(id)_decomposeCharactersWhereNeeded:(id)arg0 ;
+(id)_decomposeGraphemeIntoSeparateCharactersIfNeeded:(id)arg0 ;
+(id)_determineWritingStyle:(id)arg0 forCharacters:(id)arg1 ;
+(id)_getTextClustersFrom:(id)arg0 forCharacters:(id)arg1 ;
+(id)_getWidthAndHeight:(id)arg0 forCharacters:(id)arg1 ;
+(id)_jamoShiftsForStructure:(int)arg0 ;
+(id)_processCharacters:(id)arg0 withPathMap:(id)arg1 forLocale:(int)arg2 ;
+(id)_processHangulCharacter:(unsigned short)arg0 withPathMap:(id)arg1 forLocale:(NSUInteger)arg2 ;
+(id)_processThaiCharacter:(id)arg0 withPathMap:(id)arg1 forLocale:(NSUInteger)arg2 ;
+(id)_queryHandwritingSourceForCharactersInString:(id)arg0 withRegion:(id)arg1 ;
+(id)_separateUniqueCharacters:(id)arg0 ;
+(id)_shiftPath:(id)arg0 forCharacters:(id)arg1 withRule:(int)arg2 ;
+(id)_shiftThaiStrokes:(id)arg0 withRatio:(CGFloat)arg1 ofHeight:(id)arg2 ;
+(id)convertCurveDeleteTouchPoints:(struct CGPoint )arg0 endPoint:(struct CGPoint )arg1 curveHeight:(CGFloat)arg2 curveDensity:(NSInteger)arg3 tilt:(CGFloat)arg4 ;
+(id)convertSVGPaths:(id)arg0 withTransformation:(struct CGAffineTransform )arg1 ;
+(id)convertSVGStringPathToUIBezierPath:(id)arg0 ;
+(id)convertSingleSVGPaths:(id)arg0 withTransformation:(struct CGAffineTransform )arg1 ;
+(id)convertUIBezierPathToTouchPoints:(id)arg0 ;
+(id)generatePathArgumentStringWithParameters:(id)arg0 fromPoints:(id)arg1 ;
+(id)getPathData:(id)arg0 fromPathMap:(id)arg1 ;
+(id)getPathDataForCharacters:(id)arg0 withRegion:(id)arg1 isCursive:(BOOL)arg2 ;
+(id)getStrokesForJamo:(id)arg0 forVariant:(BOOL)arg1 ofType:(int)arg2 fromPath:(id)arg3 forLocale:(NSUInteger)arg4 ;
+(id)getTextClustersFrom:(id)arg0 withRegion:(id)arg1 ;
+(id)shiftJamosInSyllable:(id)arg0 withPath:(id)arg1 forLocale:(NSUInteger)arg2 ;
+(id)shiftStrokesForJamo:(id)arg0 withDirection:(int)arg1 ;
+(int)_getScribbleRuleFromRegion:(id)arg0 ;
+(int)_mappingRegionToVariantID:(id)arg0 ;
+(struct CGAffineTransform )_determineShiftBasedOnDirection:(int)arg0 ;
+(struct CGAffineTransform )_makeTranslationWithOffset:(CGFloat)arg0 ;
+(struct CGPoint )_addPoint:(struct CGPoint )arg0 andPoint:(struct CGPoint )arg1 ;
+(struct CGPoint )_reflectPoint:(struct CGPoint )arg0 origin:(struct CGPoint )arg1 ;
+(struct CGPoint )_scalarMultiplyPoint:(struct CGPoint )arg0 by:(CGFloat)arg1 ;
+(struct CGPoint )_subtractPoint:(struct CGPoint )arg0 byPoint:(struct CGPoint )arg1 ;
+(struct CGPoint )pointOnCurve:(id)arg0 atTime:(CGFloat)arg1 ;
+(struct CGPoint )pointOnSineCurve:(CGFloat)arg0 withHeight:(CGFloat)arg1 withStartPoint:(struct CGPoint )arg2 withEndPoint:(struct CGPoint )arg3 atTime:(CGFloat)arg4 ;
+(struct sqlite3 *)_openDatabaseFromFile:(id)arg0 ;


@end


#endif