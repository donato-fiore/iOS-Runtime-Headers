// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EQKITMATHMLMLONGDIVISION_H
#define EQKITMATHMLMLONGDIVISION_H

@class NSString;
@protocol EQKitMathMLNode, EQKitLayoutSchemataLongDivision;


#import "EQKitMathMLNode.h"
#import "EQKitMathMLMStack.h"

@interface EQKitMathMLMLongDivision : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataLongDivision>

 {
    EQKitMathMLNode *mDivisor;
    EQKitMathMLMStack *mStack;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)mathMLAttributes;
-(id)initFromXMLNode:(struct _xmlNode *)arg0 parser:(id)arg1 ;
-(id)schemataDivisor;
-(id)schemataStack;
-(struct Schemata )layoutSchemata;
-(void)dealloc;


@end


#endif