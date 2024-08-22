// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EQKITEQUATION_H
#define EQKITEQUATION_H

@class NSData;
@protocol EQKitExpression;

#import <Foundation/Foundation.h>

#import "EQKitEnvironment.h"

@interface EQKitEquation : NSObject {
    NSData *mSource;
}


@property (readonly, nonatomic) EQKitEnvironment *environment; // ivar: mEnvironment
@property (readonly, nonatomic) NSObject<EQKitExpression> *root; // ivar: mRoot


+(id)equationSourceFromPDFDocument:(struct CGPDFDocument *)arg0 ;
+(id)equationWithData:(id)arg0 format:(int)arg1 environment:(id)arg2 error:(*id)arg3 ;
+(id)equationWithString:(id)arg0 format:(int)arg1 environment:(id)arg2 error:(*id)arg3 ;
+(id)equationWithString:(id)arg0 format:(int)arg1 error:(*id)arg2 ;
+(id)equationWithXMLDoc:(struct _xmlDoc *)arg0 node:(struct _xmlNode *)arg1 environment:(id)arg2 error:(*id)arg3 ;
+(id)mathMLStringFromLaTeXString:(id)arg0 environment:(id)arg1 error:(*id)arg2 ;
+(int)formatFromData:(id)arg0 ;
+(int)formatFromString:(id)arg0 ;
-(BOOL)exportToXMLWriter:(struct _xmlTextWriter *)arg0 ns:(char *)arg1 prefix:(char *)arg2 characterCount:(*int)arg3 ;
-(BOOL)isBaseFontNameUsed;
-(id)description;
-(id)init;
-(id)initWithRoot:(id)arg0 source:(id)arg1 ;
-(id)newLayout;
-(id)pdfDataWithLayout:(id)arg0 layoutContext:(id)arg1 ;
-(id)pdfDataWithLayoutContext:(id)arg0 baselineOffset:(*CGFloat)arg1 ;
-(void)dealloc;


@end


#endif