// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EQKITMATHMLMENCLOSE_H
#define EQKITMATHMLMENCLOSE_H

@class NSString;
@protocol EQKitLayoutSchemataEnclose;


#import "EQKitMathMLUnaryNode.h"

@interface EQKitMathMLMEnclose : EQKitMathMLUnaryNode <EQKitLayoutSchemataEnclose>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)mathMLAttributes;
-(id)schemataRow;
-(struct Schemata )layoutSchemata;


@end


#endif