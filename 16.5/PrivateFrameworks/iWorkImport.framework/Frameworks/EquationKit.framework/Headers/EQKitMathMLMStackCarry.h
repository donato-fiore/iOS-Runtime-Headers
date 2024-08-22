// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EQKITMATHMLMSTACKCARRY_H
#define EQKITMATHMLMSTACKCARRY_H

@class NSArray, NSString;
@protocol EQKitMathMLNode, EQKitLayoutSchemataStackCarry;


#import "EQKitMathMLNode.h"

@interface EQKitMathMLMStackCarry : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataStackCarry>

 {
    NSArray *mChildren;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)mathMLAttributes;
-(id)initFromXMLNode:(struct _xmlNode *)arg0 parser:(id)arg1 ;
-(id)initWithChild:(id)arg0 ;
-(id)initWithChildren:(id)arg0 ;
-(id)schemataChildren;
-(struct Schemata )layoutSchemata;
-(void)dealloc;


@end


#endif