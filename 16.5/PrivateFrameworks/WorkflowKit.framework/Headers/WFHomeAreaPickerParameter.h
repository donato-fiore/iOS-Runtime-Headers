// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHOMEAREAPICKERPARAMETER_H
#define WFHOMEAREAPICKERPARAMETER_H

@class NSString;
@protocol WFDynamicEnumerationDataSource;


#import "WFDynamicEnumerationParameter.h"

@interface WFHomeAreaPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(Class)singleStateClass;
-(id)enumeration:(id)arg0 accessoryIconForPossibleState:(id)arg1 ;
-(id)enumeration:(id)arg0 localizedLabelForPossibleState:(id)arg1 ;
-(id)initWithDefinition:(id)arg0 ;
-(void)loadDefaultSerializedRepresentationForEnumeration:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadPossibleStatesForEnumeration:(id)arg0 searchTerm:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif