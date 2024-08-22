// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EQKITMATHMLMSPACE_H
#define EQKITMATHMLMSPACE_H

@class NSString;
@protocol EQKitMathMLNode, EQKitLayoutSchemataSpace;


#import "EQKitMathMLNode.h"

@interface EQKitMathMLMSpace : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataSpace>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)mathMLAttributes;
-(?)initFromXMLNodeparser;
-(BOOL)isSpaceLike;
-(struct Schemata )layoutSchemata;


@end


#endif