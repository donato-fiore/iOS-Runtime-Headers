// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EQKITMATHMLMTD_H
#define EQKITMATHMLMTD_H

@class NSArray, NSString;
@protocol EQKitMathMLNode, EQKitLayoutSchemataTd;


#import "EQKitMathMLNode.h"

@interface EQKitMathMLMTd : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataTd>

 {
    NSArray *mChildren;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)mathMLAttributes;
-(?)initFromXMLNodeparser;
-(?)initWithChildrennode;
-(BOOL)isBaseFontNameUsed;
-(id)init;
-(id)initWithChildren:(id)arg0 ;
-(id)schemataChildren;
-(int)isOperatorPaddingRequired;
-(struct Schemata )layoutSchemata;
-(void)dealloc;


@end


#endif