// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFQUANTITYFIELDPARAMETER_H
#define WFQUANTITYFIELDPARAMETER_H

@class NSArray;


#import "WFNumberFieldParameter.h"

@interface WFQuantityFieldParameter : WFNumberFieldParameter

@property (copy, nonatomic) NSArray *possibleUnits; // ivar: _possibleUnits


+(BOOL)defaultAllowsDecimalNumbers;
+(BOOL)defaultAllowsNegativeNumbers;
-(Class)singleStateClass;
-(id)defaultSerializedRepresentation;
-(id)defaultUnit;
-(id)initWithDefinition:(id)arg0 ;
-(id)localizedLabelForPossibleUnit:(id)arg0 magnitude:(id)arg1 style:(NSUInteger)arg2 ;
-(void)createDialogRequestWithAttribution:(id)arg0 defaultState:(id)arg1 prompt:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif