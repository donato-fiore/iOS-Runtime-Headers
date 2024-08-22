// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EQKITMATHMLMPADDED_H
#define EQKITMATHMLMPADDED_H

@class NSString;
@protocol EQKitLayoutSchemataPadded;


#import "EQKitMathMLUnaryNode.h"

@interface EQKitMathMLMPadded : EQKitMathMLUnaryNode <EQKitLayoutSchemataPadded>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)mathMLAttributes;
-(BOOL)isEmbellishedOperator;
-(id)operatorCore;
-(id)schemataNode;
-(struct Schemata )layoutSchemata;
-(void)dealloc;


@end


#endif