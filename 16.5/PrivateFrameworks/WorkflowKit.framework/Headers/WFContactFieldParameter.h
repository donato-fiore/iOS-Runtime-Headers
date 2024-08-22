// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCONTACTFIELDPARAMETER_H
#define WFCONTACTFIELDPARAMETER_H

@class NSString, NSArray;


#import "WFParameter.h"

@interface WFContactFieldParameter : WFParameter

@property (readonly, nonatomic) BOOL allowsCustomHandles; // ivar: _allowsCustomHandles
@property (readonly, nonatomic) BOOL allowsTextEntry; // ivar: _allowsTextEntry
@property (readonly, nonatomic) NSString *autocapitalizationType; // ivar: _autocapitalizationType
@property (readonly, nonatomic) NSString *autocorrectionType; // ivar: _autocorrectionType
@property (readonly, nonatomic) BOOL hidesLabel; // ivar: _hidesLabel
@property (readonly, nonatomic) NSString *keyboardType;
@property (readonly, nonatomic) NSArray *supportedContactProperties; // ivar: _supportedContactProperties
@property (readonly, nonatomic) NSString *textAlignment; // ivar: _textAlignment


-(BOOL)displaysMultipleValueEditor;
-(BOOL)shouldAlignLabels;
-(Class)multipleStateClass;
-(Class)singleStateClass;
-(Class)stateClass;
-(id)initWithDefinition:(id)arg0 ;


@end


#endif