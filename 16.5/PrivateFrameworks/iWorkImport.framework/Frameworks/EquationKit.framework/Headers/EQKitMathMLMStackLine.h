// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EQKITMATHMLMSTACKLINE_H
#define EQKITMATHMLMSTACKLINE_H

@class NSString;
@protocol EQKitMathMLNode, EQKitLayoutSchemataStackLine;


#import "EQKitMathMLNode.h"

@interface EQKitMathMLMStackLine : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataStackLine>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)mathMLAttributes;
-(NSUInteger)schemataThickness;
-(id)initFromXMLNode:(struct _xmlNode *)arg0 parser:(id)arg1 ;
-(struct Schemata )layoutSchemata;


@end


#endif