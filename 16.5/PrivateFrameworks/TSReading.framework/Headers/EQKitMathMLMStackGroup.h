// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EQKITMATHMLMSTACKGROUP_H
#define EQKITMATHMLMSTACKGROUP_H

@class NSArray, NSString;
@protocol EQKitMathMLNode, EQKitLayoutSchemataStackGroup;


#import "EQKitMathMLNode.h"

@interface EQKitMathMLMStackGroup : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataStackGroup>

 {
    NSArray *mChildren;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)mathMLAttributes;
-(?)initFromXMLNodeparser;
-(BOOL)isBaseFontNameUsed;
-(id)initWithChildren:(id)arg0 ;
-(id)schemataChildren;
-(struct Schemata )layoutSchemata;
-(void)dealloc;


@end


#endif