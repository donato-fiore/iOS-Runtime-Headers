// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFLINKSTARTWORKOUTPICKERPARAMETER_H
#define WFLINKSTARTWORKOUTPICKERPARAMETER_H

@class NSString;
@protocol WFDynamicEnumerationDataSource;


#import "WFDynamicEnumerationParameter.h"
#import "WFLinkAction.h"

@interface WFLinkStartWorkoutPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource>



@property (weak, nonatomic) WFLinkAction *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(Class)singleStateClass;
-(id)enumeration:(id)arg0 localizedLabelForPossibleState:(id)arg1 ;
-(id)initWithDefinition:(id)arg0 ;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(void)loadPossibleStatesForEnumeration:(id)arg0 searchTerm:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif