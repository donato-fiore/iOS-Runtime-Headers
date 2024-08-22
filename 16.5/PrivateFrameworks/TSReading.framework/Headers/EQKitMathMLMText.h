// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EQKITMATHMLMTEXT_H
#define EQKITMATHMLMTEXT_H

@class NSString;
@protocol EQKitMathMLNode, EQKitLayoutSchemataText, EQKitFontStyling;


#import "EQKitMathMLNode.h"
#import "EQKitMathMLTokenContent.h"

@interface EQKitMathMLMText : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataText, EQKitFontStyling>

 {
    EQKitMathMLTokenContent *mContent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)mathMLAttributes;
-(?)initFromXMLNodeparser;
-(BOOL)isBaseFontNameUsed;
-(BOOL)schemataIsQuoted;
-(id)initWithContent:(id)arg0 ;
-(id)schemataChildren;
-(int)scriptContext;
-(int)scriptVariant;
-(struct Schemata )layoutSchemata;
-(void)dealloc;


@end


#endif