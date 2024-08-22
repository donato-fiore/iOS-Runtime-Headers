// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPEQUATIONBASEREP_H
#define TSWPEQUATIONBASEREP_H

@class TSDMediaRep;
@protocol TSDMagicMoveMatching;



@interface TSWPEquationBaseRep : TSDMediaRep <TSDMagicMoveMatching>





+(void)drawErrorIconWithSize:(struct CGSize )arg0 context:(struct CGContext *)arg1 ;
+(void)drawWarningIconWithSize:(struct CGSize )arg0 context:(struct CGContext *)arg1 ;
+(void)p_drawErrorIcon:(struct CGPDFDocument *)arg0 size:(struct CGSize )arg1 context:(struct CGContext *)arg2 ;


@end


#endif